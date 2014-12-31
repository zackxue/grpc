/*
 * sgrpc.c
 *
 *  Created on: 2014年10月18日
 *      Author: LiuFengxiang
 *		 Email: lfx@jovision.com
 */

#include <jv_common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#include "sgrpc.h"
#include "grpc.h"
#include "ipc.h"
#include <cJSON.h>
#include <sp_user.h>

#include <pthread.h>
#include "utl_iconv.h"
#undef DEBUG_LEVEL
#define DEBUG_LEVEL 3


#define GRPC_SUPPORT

#define SGRPC_PORT 8127

static struct{
	grpc_t *grpc;
	grpc_t *grpcYST;
	BOOL bRunning;
	pthread_t thread;
}sGrpcInfo;

static pthread_mutex_t sMutex = PTHREAD_MUTEX_INITIALIZER;

static char *__sgrpc_parse(grpc_t *grpc, const char *data)
{
	char *resp = NULL;
#ifdef GRPC_SUPPORT
	pthread_mutex_lock(&sMutex);
	grpc_s_serve_without_send(grpc, data);
	if (grpc->root)
	{
		resp = cJSON_PrintUnformatted(grpc->root);
	}
	pthread_mutex_unlock(&sMutex);
#endif
	return resp;
}

int __sgrpc_free(grpc_t *grpc, char *resp)
{
#ifdef GRPC_SUPPORT
	pthread_mutex_lock(&sMutex);
	if (resp)
		free(resp);
	grpc_end(grpc);
	pthread_mutex_unlock(&sMutex);
#endif
	return 0;
}

#ifdef GRPC_SUPPORT

/**
 *@brief 查找字符串的值
 *
 *@param body 消息体。类似这样：PLAY RTSP/1.0\r\n CSeq: 3\r\n Scale: 0.5\r\n Range: npt=0-
 *@param key 要查找的键值
 *@param seg 分割符，可以是':', '=' 等
 *@param value 返回结果
 *@param maxValueLen 提供的value的最大保存长度
 */
static char *__get_line_value(const char *body, const char *key, char seg, char *data, int maxLen)
{
	char *p;
	char *dst;
	int len;

	p = (char *)strstr(body, key);
	if (data)
		data[0] = '\0';
	if (!p)
		return NULL;

	p += strlen(key);
	while (*p && *p != seg)
		p++;
	p++;
	dst = p;
	len = 0;
	while (*p && *p != '\r' && *p != '\n')
	{
		p++;
		len++;
	}

	if (*dst == '"')
	{
		dst++;
		len-=2; // " 一定是成对出现的
	}

	if (data)
		p = data;
	else
		p = (char *)malloc(len+1);
	memcpy(p, dst, len);
	p[len] = '\0';

	return p;
}

/**
 *@brief 检测Content-Length 字段，获取数据总长度
 *
 *@param predata 已收到的数据
 *
 *@return 将要收到的数据的总长度。
 *@note 数据总长度为：HTTP头的长度 + Content-Length所指定的数据长度
 */
static int __get_content_length(const char *predata)
{
	char *tstr;
	int ret;
	char temp[32];
	int contentLen;
	if (!predata)
	{
		return -1;
	}
	tstr = __get_line_value(predata, "Content-Length", ':', temp, 32);
	if (tstr)
	{
		contentLen = atoi(tstr);
		const char *p = strstr(predata, "\r\n\r\n");
		if (p)
		{
			return contentLen + p - predata + 4;
		}
		return contentLen + strlen(predata);
	}
	else
	{
		return 0;
	}

}

int __build_resp(int err, const char *jsonData, char *resp)
{
	const char *form;
	int contentLen;

	if (jsonData == NULL)
		contentLen = 0;
	else
		contentLen = strlen(jsonData) + strlen("grpc:");

	switch(err)
	{
	case 200:
		form = "OK";
		break;
	case 401:
		form = "Unauthorized";
		break;
	case 403:
		form = "Forbidden";
		break;
	default:
	case 404:
		form = "Not Found";
		break;
	}

	sprintf(resp
			, "HTTP/1.1 %d %s\r\n"
			, err, form);
	char temp[64];
	if (contentLen)
	{
//		contentLen += strlen(xmlVer);
		sprintf(temp, "Content-Length: %d\r\n", contentLen);
		strcat(resp, temp);
	}
	strcat(resp,"Content-Type: application/x-www-form-urlencoded\r\n");
	strcat(resp,"Connection: close\r\n"
			"\r\n");

	if (jsonData)
	{
		strcat (resp, "grpc:");
		strcat (resp, jsonData);
	}

	return 0;
}

static int __parse_data(char *buffer)
{
	char *p = (char *)buffer;
	int cnt = 0;
	while(*p)
	{
		if (*p == '\n')
			cnt++;
		else if (*p != '\r')
			cnt = 0;

		p++;
		if (cnt == 2)
			break;
	}
	while (*p && (*p == '\r' || *p == '\n'))
		p++;

	p = strstr(p, "grpc:");
	if (p == NULL)
	{
		p = strstr(buffer, "grpc:");
		if (p == NULL)
		{
			Debug(0, "Failed find \"grpc:\" in %s\n", buffer);
			return -1;
		}
	}
	p += 5;

	int len = 0;
	char tmpBuf[128*1024];
	
	memset(tmpBuf, 0, sizeof(tmpBuf));
	utl_iconv_utf8togb2312(p, tmpBuf, sizeof(tmpBuf));
	
	char *resp = __sgrpc_parse(sGrpcInfo.grpc, tmpBuf);

	memset(tmpBuf, 0, sizeof(tmpBuf));
	len = utl_iconv_gb2312toutf8(resp, tmpBuf, sizeof(tmpBuf));
	tmpBuf[len] = '\0';

	__build_resp(200, tmpBuf, buffer);
	__sgrpc_free(sGrpcInfo.grpc, resp);

	return strlen(buffer);

}

static void *__sgrpc_web_process(void *param)
{
	unsigned int port = SGRPC_PORT;
	int ret;
	int sl;//sock listen
	int sc;//sock client
	struct sockaddr_in addrl, addrc;
	int addrlen;

	pthreadinfo_add(__func__);
	sl = socket(AF_INET, SOCK_STREAM, 0);
	if (sl == -1)
	{
		Debug(0, "create socket failed: %s\n", strerror(errno));
		return NULL;
	}

    int sock_opt = 1;
   /* reuse socket addr */
    if ((setsockopt(sl, SOL_SOCKET, SO_REUSEADDR, (void *) &sock_opt,
                    sizeof (sock_opt))) == -1) {
    	Debug(0, "setsockopt\n");
    }


	addrl.sin_family = AF_INET;
	addrl.sin_port = htons(port);
	addrl.sin_addr.s_addr = INADDR_ANY;
	if (0 != bind(sl, (const struct sockaddr *)&addrl, sizeof(struct sockaddr)))
	{
		Debug(0, "bind error: %s\n", strerror(errno));
		return NULL;
	}
	if (0 != listen(sl, 10))
	{
		Debug(0, "listen error: %s\n", strerror(errno));
		return NULL;
	}

	while(sGrpcInfo.bRunning)
	{
		fd_set rfds;
		struct timeval tv;

		FD_ZERO(&rfds);
		FD_SET(sl, &rfds);

		tv.tv_sec = 1;
		tv.tv_usec = 0;

		ret = select(sl+1, &rfds, NULL, NULL, &tv);
		/* Don't rely on the value of tv now! */

		if (ret == -1)
		   perror("select()");
		else if (ret == 0)
		{
//			printf("No data within five seconds.\n");
		}
		else
		{
//			printf("Data is available now: ret: %d.\n", ret);
			if (FD_ISSET(sl, &rfds))
			{
				int receved;
				char buffer[50*1024];
				addrlen = sizeof(struct sockaddr);
				memset(&addrc, 0, addrlen);
				sc = accept(sl, (struct sockaddr *)&addrc, (socklen_t*)&addrlen);
				if (sc == -1)
				{
					Printf("ERROR: accept failed: %s\n", strerror(errno));
					return NULL;
				}
				int contentLen = 0;
				int offset = 0;
				while(1)
				{
					ret = recv(sc, &buffer[offset], sizeof(buffer)-offset, 0);
					if (ret == -1)
					{
						Debug(0, "error: recv failed : %s\n", strerror(errno));
						return NULL;
					}
					else if (ret == 0)
					{
						Debug(0, "socket is closed\n");
//						close(sc);
						break;
					}
					offset += ret;
					buffer[offset] = '\0';
//					Debug(3, "received: %d, %s\n", ret, buffer);
					if (contentLen == 0)
					{
						contentLen = __get_content_length(buffer);
					}
//					Debug(3, "received: %d, conteltlen: %d\n", offset, contentLen);
					if (contentLen == 0 || contentLen <= offset)
						break;
//					CPrintf("data not received enough\n");
				}
				if (offset != 0)
				{
					Debug(3, "[RECEIVED]:\n%s\n", buffer);
					ret = __parse_data(buffer);
					if(ret < 0)
					{
						__build_resp(404, NULL, buffer);
						ret = strlen(buffer);
					}

					Debug(3, "[TO-SEND]:\n%s\n", buffer);
					send(sc, buffer, ret, 0);

				}
				close(sc);
			}
		}
	}

	close(sl);

	return NULL;
}
#endif

int sgrpc_account_refresh()
{
	grpcUser_t user;
	int i;
	int cnt = sp_user_get_cnt();
	if (!sGrpcInfo.grpc)
		return 0;
	grpc_s_account_clear(sGrpcInfo.grpc);
	for (i=0;i<cnt;i++)
	{
		SPUser_t su;
		sp_user_get(i, &su);
		strcpy(user.name, su.name);
		strcpy(user.passwd, su.passwd);
		switch(su.level)
		{
		case PS_USER_LEVEL_Administrator: user.level = GRPC_USER_LEVEL_Administrator;break;
		case PS_USER_LEVEL_Operator: user.level = GRPC_USER_LEVEL_Operator;break;
		case PS_USER_LEVEL_User: user.level = GRPC_USER_LEVEL_User;break;
		default:
		case PS_USER_LEVEL_Anonymous: user.level = GRPC_USER_LEVEL_Anonymous;break;
		case PS_USER_LEVEL_Extended: user.level = GRPC_USER_LEVEL_Extended;break;
		}
		grpc_s_account_add(sGrpcInfo.grpc, &user);
			//GRPC_USER_LEVEL_Administrator
	}
	return 0;
}

int sgrpc_init()
{
#ifdef GRPC_SUPPORT
	sGrpcInfo.bRunning = TRUE;
	pthread_create(&sGrpcInfo.thread, NULL, (void *)__sgrpc_web_process, NULL);
	sGrpcInfo.grpc = grpc_new();
	grpcInitParam_t initParam;
	initParam.methodList = ipc_methodList;
	grpc_init(sGrpcInfo.grpc, &initParam);
	sgrpc_account_refresh();

	sGrpcInfo.grpcYST = grpc_new();
	grpc_init(sGrpcInfo.grpcYST, &initParam);

	#endif
	return 0;
}

char *sgrpc_parse_yst(const char *data)
{
	return __sgrpc_parse(sGrpcInfo.grpcYST, data);
}

int sgrpc_free_yst(char *resp)
{
	return __sgrpc_free(sGrpcInfo.grpcYST, resp);
}

