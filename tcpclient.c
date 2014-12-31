/*
 * client.c
 *
 *  Created on: 2014年10月10日
 *      Author: LiuFengxiang
 *		 Email: lfx@jovision.com
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>


#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define USE_HTTP 1
#if USE_HTTP
#define SERVER_PORT 80
#else
#define SERVER_PORT 8127
#endif

#include <grpc.h>
//#include <account.h>
#include <ipc.h>
typedef struct{
	int fd;
	struct sockaddr_in server;
//	struct sockaddr_in from;
}UserDefInfo;

static UserDefInfo sInfo;

int send_test(struct _grpc_t *grpc, void *buffer, int len)
{
	UserDefInfo *user = (UserDefInfo *)grpc->userdef;
	int fd = socket(AF_INET, SOCK_STREAM, 0);
//	int ret = bind(fd, (const struct sockaddr *) &user->server, sizeof(struct sockaddr_in));
	int ret = connect(fd, (const struct sockaddr *) &user->server, sizeof(struct sockaddr_in));
	if (ret < 0)
	{
		printf("Failed connect server, becase: %s\n", strerror(errno));
		return -1;
	}
	user->fd = fd;
	/**
POST /onvif/device_service HTTP/1.1
Content-Type: application/soap+xml; charset=utf-8; action="http://www.onvif.org/ver10/device/wsdl/GetSystemDateAndTime"
Host: 192.168.7.79
Content-Length: 261
Accept-Encoding: gzip, deflate
Connection: Close
	 */
	const char *header =
#if USE_HTTP
			"POST /cgi-bin/transfer_8127 HTTP/1.1\r\n"
			"Host: Haha\r\n"
#endif
			"charset=utf-8;\r\n"
			"Content-Length: %d\r\n"
			"Content-Type: application/x-www-form-urlencoded\r\n"
			"Connection: Close\r\n\r\n"
			"grpc:";
	char temp[256];
	sprintf(temp, header, len+strlen("grpc:"));
	send(fd, temp, strlen(temp), 0);
	return send(fd, buffer, len, 0);
}

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

int recv_test(struct _grpc_t *grpc, void *dst, int len, int *timeoutms)
{
	UserDefInfo *user = (UserDefInfo *)grpc->userdef;
	int ret;
	int contentLen = 0;
	int offset = 0;
	char *buffer = dst;
	while(1)
	{
		ret = recv(user->fd, &buffer[offset], len-offset, 0);
		if (ret == -1)
		{
			printf("error: recv failed : %s\n", strerror(errno));
			return 0;
		}
		else if (ret == 0)
		{
			printf("socket is closed\n");
			break;
		}
		offset += ret;
		buffer[offset] = '\0';
		if (contentLen == 0)
		{
			contentLen = __get_content_length(buffer);
		}
		printf("received: %d, conteltlen: %d\n", offset, contentLen);
		if (contentLen == 0 || contentLen <= offset)
		{
			//不知道咋搞的，有时候会先收到一个HTTP/1.0 200 OK
			if (offset < 32 && strstr(buffer, "HTTP/"))
			{
				continue;
			}
			break;
		}
//					CPrintf("data not received enough\n");
	}
//	printf("received:\n%s\n", buffer);

	char *p = strstr(buffer, "grpc:");
	if (p)
	{
		ret = strlen(p);
		p += 5;
		memmove(buffer, p, ret);
		buffer[ret] = '\0';
	}
	close(user->fd);
	return ret;
}

void *__create_fd(char *ip)
{
//	int fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in addrto;
    bzero(&addrto, sizeof(struct sockaddr_in));
    addrto.sin_family = AF_INET;
    addrto.sin_addr.s_addr = inet_addr(ip);
    addrto.sin_port = htons(SERVER_PORT);


    UserDefInfo *user = malloc(sizeof(UserDefInfo));
//    user->fd = fd;
    user->server = addrto;

	return user;
}

int main(int argc, char *argv[])
{
	int ret;

	grpcInitParam_t initParam;
	char *ip;
	if (argc == 1)
		ip = "127.0.0.1";
	else
		ip = argv[1];
	initParam.userdef = __create_fd(ip);
	initParam.fptr_net.recv = recv_test;
	initParam.fptr_net.send = send_test;
	initParam.methodList = ipc_methodList;

while(1)
{
//	initParam.fptr_net.recv
	grpc_t *grpc = grpc_new();
	grpcUser_t user;
	grpc_init(grpc, &initParam);

	strcpy(user.name, "admin");
	strcpy(user.passwd, "123456");
	grpc_c_account_set(grpc, &user);

//	{
//		PARAM_REQ_ipc_ifconfig_get_inet req;
//		PARAM_RESP_ipc_ifconfig_get_inet resp;
//		CLIENT_ipc_ifconfig_get_inet(grpc, &req, &resp);
//	}
//	break;

	while (1)//account_get_users
	{
		PARAM_REQ_ipc_account_get_users users;
		PARAM_RESP_ipc_account_get_users resp;
#if 1
		//直接阻塞式，一个函数搞定
		ret = CLIENT_ipc_account_get_users(grpc, &users, &resp);
		if (ret == 0)
		{
			printf("usercnt: %d\n", resp.users_cnt);
			int i;
			for (i=0;i<resp.users_cnt;i++)
			{
				printf("name: %s    ,level: %s   desp: %s\n"
						, resp.users[i].name
						, resp.users[i].level
						, resp.users[i].description
						);
			}
		}
		else
		{
			printf("error happened: %d, %s\n", grpc->error.errcode, grpc->error.message);
		}
		grpc_end(grpc);
		break;
#else
		CLIENT_REQ_ipc_account_get_users(grpc, &users);
		grpc_end(grpc);

#if 0
		//直接阻塞式
		if (0 == grpc_c_recv(grpc))
		{
			ret = CLIENT_RESP_ipc_account_get_users(grpc, &resp);
			if (ret == 0)
			{
				printf("usercnt: %d\n", resp.users_cnt);
				int i;
				for (i=0;i<resp.users_cnt;i++)
				{
					printf("name: %s    ,level: %s   desp: %s\n"
							, resp.users[i].name
							, resp.users[i].level
							, resp.users[i].description
							);
				}
			}
			else
			{
				printf("error happened: %d, %s\n", grpc->error.errcode, grpc->error.message);
			}
		}
		grpc_end(grpc);
#else
		//被动回调式
		char buffer[128*1024];
		int ret = recv_test(grpc, buffer, sizeof(buffer));
		if (ret > 0)
		{
			buffer[ret] = '\0';
			grpc_c_resp_direct(grpc, buffer);
		}

#endif
#endif
		break;
	}
	grpc_delete(grpc);
}
	while(1)
	{
		usleep(1000);
	}
	return 0;
}
