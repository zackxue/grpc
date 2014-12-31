/*
 * grpc.c
 *
 *  Created on: 2014年10月9日
 *      Author: LiuFengxiang
 *		 Email: lfx@jovision.com
 */

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "grpc.h"
#include <errno.h>
#include "md5.h"
#include <ctype.h>

#define MEMFLAG_VALUE 0xACAC5C5C
//extern grpcMethod_t methodList_s[];
//extern grpcMethod_t methodList_c[];

typedef struct{
	unsigned int MEMFLAG; //MEMFLAG_VALUE
	unsigned int size;
	void *next;
}_MemInfo_t;

/**
 *@brief 创建grpc，所有工作的开始
 */
grpc_t *grpc_new(void)
{
	grpc_t *grpc = malloc(sizeof(grpc_t));
	memset(grpc, 0, sizeof(grpc_t));
	return grpc;
}

/**
 *@brief 删除grpc，所有工作的结束
 */
int grpc_delete(grpc_t *grpc)
{
	grpc_end(grpc);
	free(grpc);
	return 0;
}

/**
 *@brief 必要的初始化
 */
int grpc_init(grpc_t *grpc, grpcInitParam_t *initParam)
{
	if (initParam)
	{
		grpc->userdef = initParam->userdef;
		grpc->fptr_net = initParam->fptr_net;
		grpc->methodList = initParam->methodList;
	}
	return 0;
}

/**
 *@brief 清空Server端验证信息
 */
int grpc_s_account_clear(grpc_t *grpc)
{
	grpc->userCnt = 0;
	return 0;
}

/**
 *@brief 增加Server端验证信息
 */
int grpc_s_account_add(grpc_t *grpc, const grpcUser_t *user)
{
	if (grpc->userCnt < sizeof(grpc->userServer)/sizeof(grpc->userServer[0]))
	{
		grpc->userServer[grpc->userCnt++] = *user;
		return 0;
	}
	printf("error: too many user setted: %d\n", grpc->userCnt);
	return -1;
}

/**
 *@brief 设置Client端登陆信息
 */
int grpc_c_account_set(grpc_t *grpc, const grpcUser_t *user)
{
	grpc->userClient = *user;
	return 0;
}

static int _grpc_send(grpc_t *grpc)
{
	int ret = 0;
	char *tosend;
	int len;
	cJSON *sentcnt;

	sentcnt = cJSON_GetObjectItem(grpc->root, "sentcnt");
	if (sentcnt)
	{
		sentcnt->valueint = grpc->sentcnt;
	}
	else
	{
		cJSON_AddNumberToObject(grpc->root, "sentcnt", grpc->sentcnt);
	}
	if (grpc->userClient.name[0] != '\0')
	{
		MD5_CTX ctx;
		const char *method;
		unsigned char digest[16];
		MD5Init(&ctx);
		MD5Update(&ctx, (unsigned char *)grpc->userClient.name, strlen(grpc->userClient.name));
		method = cJSON_GetObjectValueString(grpc->root, "method");
		if (method)
		{
//			printf("md5 method: %s\n", method);
			MD5Update(&ctx, (unsigned char *)method, strlen(method));
		}
		MD5Update(&ctx, (unsigned char *)grpc->userClient.passwd, strlen(grpc->userClient.passwd));
		MD5Final(&ctx, digest);

		//add user and digest
		{
			cJSON *user = cJSON_CreateObject();
			char strdigest[36];
			int i;
			for (i = 0; i < 16; i++)
			{
				sprintf(strdigest + i * 2, "%02x", digest[i]);
			}
			strdigest[32]='\0';
			cJSON_AddItemToObject(grpc->root, "user", user);
			cJSON_AddStringToObject(user, "name", grpc->userClient.name);
			cJSON_AddStringToObject(user, "digest", strdigest);
		}
	}

	tosend = cJSON_PrintUnformatted(grpc->root);
	len = strlen(tosend);
//	printf("tosend: %s\n", tosend);
	if (grpc->fptr_net.send)
		ret = grpc->fptr_net.send(grpc, tosend, len);
	else
		printf("send error: send func not setted\n");
	free(tosend);
	if (ret != len)
	{
		printf("send error  : %s, ret: %d, tosend: %d\n", strerror(errno), ret, len);
	}
	return ret;
}

static int _grpc_recv(grpc_t *grpc, int timeout_milliseconds)
{
	int len;
	if (!grpc->fptr_net.recv)
	{
		printf("recv error: recv func not setted\n");
		return -1;
	}
	len = grpc->fptr_net.recv(grpc, grpc->buffer, sizeof(grpc->buffer), timeout_milliseconds);
	if (len <= 0)
		return len;
	if (len)
		grpc->buffer[len] = '\0';
	return 0;
}

static grpcMethod_t *_grpc_method_get(grpcMethod_t * methodlist, const char *method)
{
	int i;
	if (methodlist == NULL || method == NULL)
		return NULL;
	for (i=0;methodlist[i].name;i++)
	{
		if (strcmp(methodlist[i].name, method) == 0 && methodlist[i].client_method_ptr && methodlist[i].server_method_ptr)
			return &methodlist[i];
	}
	return NULL;
}

/**
 *@brief 服务端用，等待数据的到来，调用适用的函数，并最终发送数据
 */
int grpc_s_serve(grpc_t *grpc)
{
	int ret = _grpc_recv(grpc, grpc->timeout_milliseconds);
	if (ret < 0)
		return ret;
	return grpc_s_serve_direct(grpc, grpc->buffer);
}

/**
 *@brief 服务端用，无须等待数据，直接处理到来的数据
 */
int grpc_s_serve_direct(grpc_t *grpc, const char *data)
{
	int ret = grpc_s_serve_without_send(grpc, data);
//	if (ret != 0)
//		return ret;
	ret = _grpc_send(grpc);

	grpc_end(grpc);
	return ret;
}

static int _grpc_check_access(grpc_t *grpc, grpcMethod_t *method)
{
	if (grpc->userCnt == 0)
		return 0;
	else
	{
		GRPCUserLevel_e level = GRPC_USER_LEVEL_Anonymous;
		cJSON *user = cJSON_GetObjectItem(grpc->root, "user");
		if (user)
		{
			const char *name = cJSON_GetObjectValueString(user, "name");
			const char *digest = cJSON_GetObjectValueString(user, "digest");
			if (name && digest)
			{
				int u;
				for (u=0;u<grpc->userCnt;u++)
				{
					if (0 == strcmp(name, grpc->userServer[u].name))
					{
						MD5_CTX ctx;
						unsigned char serverDigest[16];
						MD5Init(&ctx);
						MD5Update(&ctx, (unsigned char *)name, strlen(name));
						MD5Update(&ctx, (unsigned char *)method->name, strlen(method->name));
						MD5Update(&ctx, (unsigned char *)grpc->userServer[u].passwd, strlen(grpc->userServer[u].passwd));
						MD5Final(&ctx, serverDigest);

						{
							unsigned char clientDigest[16];
							int i,j;
							j=0;
							for (i = 0; i < 32; i++)
							{
								unsigned char c ;
								if (isdigit(digest[i]))
									c = digest[i]-'0';
								else
									c = digest[i]-'a'+10;
								i++;
								c <<= 4;
								if (isdigit(digest[i]))
									c |= digest[i]-'0';
								else
									c |= digest[i]-'a'+10;
								clientDigest[j++] = c;
							}

							if (memcmp(clientDigest, serverDigest, 16) == 0)
							{
								printf("leve;%d, %d\n", grpc->userServer[u].level , method->level);
								if (grpc->userServer[u].level > method->level)
									return GRPC_ERR_NO_POWER;
								return 0;
							}
							else
								return GRPC_ERR_PASSWD_ERR;
						}
					}
				}
			}
		}
		return GRPC_ERR_PASSWD_ERR;
	}
}

/**
 *@brief 服务端用，无须等待数据，直接处理到来的数据，同时，数据不发送，不删除，保存在grpc->root中
 */
int grpc_s_serve_without_send(grpc_t *grpc, const char *data)
{
	int ret = -1;
	const char *method;
	grpcMethod_t * methodptr;

	if (grpc->buffer != data)
		strncpy((char *)grpc->buffer, data, sizeof(grpc->buffer));
	if (grpc->root)
		cJSON_Delete(grpc->root);
	grpc->root = cJSON_Parse((const char *)grpc->buffer);

	if (!grpc->root)
	{
		printf("ERROR: Failed Parse Message:\n%s\n\n", grpc->buffer);
		return -1;
	}
	method = cJSON_GetObjectValueString(grpc->root, "method");

	methodptr = _grpc_method_get(grpc->methodList, method);
	if (methodptr)
	{
		int ret = _grpc_check_access(grpc, methodptr);
		if (ret == 0)
		{
			ret = methodptr->server_method_ptr(grpc);
			if (ret != 0)// if error happened
			{
				cJSON *error = cJSON_CreateObject();
				cJSON_AddNumberToObject(error, "errcode", grpc->error.errcode);
				cJSON_AddStringToObject(error, "message", grpc->error.message);
				cJSON_AddItemToObject(grpc->root, "error", error);
			}
		}
		else
		{
			cJSON *error = cJSON_CreateObject();
			cJSON_AddNumberToObject(error, "errcode", ret);
			cJSON_AddStringToObject(error, "message", ret == GRPC_ERR_NO_POWER ? "No Power" : "No User or Error Passwd");
			cJSON_AddItemToObject(grpc->root, "error", error);
		}
	}
	else
	{
		cJSON *error = cJSON_CreateObject();
		cJSON_AddNumberToObject(error, "errcode", GRPC_ERR_METHOD_NOT_FOUND);
		cJSON_AddStringToObject(error, "message", "Method not found");
		cJSON_AddItemToObject(grpc->root, "error", error);
	}

	cJSON_DeleteItemFromObject(grpc->root, "param");
	return ret;
}

/**
 *@brief 客户端用，由外部直接送数据进来
 */
int grpc_c_resp_direct(grpc_t *grpc, const char *resp)
{
	int ret = -1;
	grpcMethod_t * methodptr;
	const char *method;
	cJSON *error;
	if (grpc->buffer != resp)
		strncpy((char *)grpc->buffer, resp, sizeof(grpc->buffer));
	if (grpc->root)
		cJSON_Delete(grpc->root);
	grpc->root = cJSON_Parse((const char *)grpc->buffer);

	if (!grpc->root)
	{
		printf("ERROR: Failed Parse Message:\n%s\n\n", grpc->buffer);
		return -1;
	}
	error = cJSON_GetObjectItem(grpc->root, "error");
	grpc->error.errcode = 0;
	grpc->error.message[0] = '\0';
	if (error)
	{
		const char *p = cJSON_GetObjectValueString(error, "message");
		if (p)
			strncpy(grpc->error.message, p, sizeof(grpc->error.message));
		grpc->error.errcode = cJSON_GetObjectValueInt(error, "errcode");
	}

	method = cJSON_GetObjectValueString(grpc->root, "method");

	methodptr = _grpc_method_get(grpc->methodList, method);
	if (methodptr)
	{
		ret = methodptr->client_method_ptr(grpc);
		if (ret != 0)// if error happened
		{
			printf("ERROR: grpc_c_resp_direct Failed in method: %s, with ret: %d\n", method, ret);
		}
	}
	else
	{
		printf("ERROR: grpc_c_resp_direct Failed find method: %s\n", method);
	}

	grpc_end(grpc);
	return 0;
}

/**
 *@brief 对于服务端，#grpc_serve之后，清理信息。或者对于客户端，调用REQ之后，清理内存。可重复调用
 */
int grpc_end(grpc_t *grpc)
{
	_MemInfo_t *mi;
	if (grpc->root)
	{
		cJSON_Delete(grpc->root);
		grpc->root = NULL;
	}

	//free memory
	mi = grpc->memlist;
	while(mi)
	{
		_MemInfo_t *p = mi;
		mi = mi->next;
		free(p);
	}
	grpc->memlist = NULL;

	return 0;
}

/**
 *@brief 用于客户端，将#grpc_t::root 变成字符串发送出去
 */
int grpc_c_send(grpc_t *grpc)
{
	grpc->sentcnt++;
	return _grpc_send(grpc);
}

/**
 *@brief 用于客户端，接收数据，并将收到的信息，变成#grpc_t::root
 */
int grpc_c_recv(grpc_t *grpc)
{
	cJSON *error;
	while(1)
	{
		int sentcnt;
		int ret = _grpc_recv(grpc, grpc->timeout_milliseconds);
		if (ret != 0)
			return ret;
		if (grpc->root)
			cJSON_Delete(grpc->root);
		grpc->root = cJSON_Parse(grpc->buffer);
		if (!grpc->root)
		{
			printf("ERROR: Failed parse json: %s\n", grpc->buffer);
			return -1;
		}
		sentcnt = cJSON_GetObjectValueInt(grpc->root, "sentcnt");
		if (sentcnt == grpc->sentcnt)
			break;
		cJSON_Delete(grpc->root);
		grpc->root = NULL;
	}
	error = cJSON_GetObjectItem(grpc->root, "error");
	grpc->error.errcode = 0;
	grpc->error.message[0] = '\0';
	if (error)
	{
		const char *p = cJSON_GetObjectValueString(error, "message");
		if (p)
			strncpy(grpc->error.message, p, sizeof(grpc->error.message));
		grpc->error.errcode = cJSON_GetObjectValueInt(error, "errcode");
	}
	if (grpc->root)
		return 0;

	printf("ERROR: Failed Parse json: %s\n", grpc->buffer);
	return -1;
}

/**
 *@brief 申请内存，由#grpc_end负责释放
 */
void *grpc_malloc(grpc_t *grpc, int size)
{
	char *p;
	_MemInfo_t *info;
	size += sizeof(_MemInfo_t);
	p = (char *)malloc(size);
	info = (_MemInfo_t *)p;
	info->MEMFLAG = MEMFLAG_VALUE;
	info->next = grpc->memlist;
	info->size = size;
	grpc->memlist = info;
	p += sizeof(_MemInfo_t);
	return p;
}

/**
 *@brief 申请内存，复制字符串，由#grpc_end负责释放
 */
char *grpc_strdup(grpc_t *grpc, const char *str)
{
	int len;
	char *p;
	if (!str)
		return NULL;
	len = strlen(str)+1;
	p = grpc_malloc(grpc, len);
	memcpy(p, str, len);
	return p;
}

/**
 *@brief 编写错误信息
 */
int grpc_s_set_error(grpc_t *grpc, int errcode, const char *message)
{
	grpc->error.errcode = errcode;
	strncpy(grpc->error.message, message, sizeof(grpc->error.message));
	return 0;
}

