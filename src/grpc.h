/*
 * grpc.h
 *
 *  Created on: 2014年10月9日
 *      Author: LiuFengxiang
 *		 Email: lfx@jovision.com
 */

#ifndef GRPC_H_
#define GRPC_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <memory.h>

#include "cJSON.h"


#ifdef __cplusplus
extern "C" {
#endif


#define GRPC_ERR_PARSE_ERROR			-32700	//Parse error	Invalid JSON was received by the server.
												//An error occurred on the server while parsing the JSON text.
#define GRPC_ERR_INVALID_REQUEST		-32600	//Invalid Request	The JSON sent is not a valid Request object.
#define GRPC_ERR_METHOD_NOT_FOUND		-32601	//Method not found	The method does not exist / is not available.
#define GRPC_ERR_INVALID_PARAMS			-32602	//Invalid params	Invalid method parameter(s).
#define GRPC_ERR_INTERNAL_ERROR			-32603	//Internal error	Internal JSON-RPC error.
#define GRPC_ERR_NO_POWER				-32604	//Need Power to Access Function
#define GRPC_ERR_PASSWD_ERR				-32605	//No User or Error Passwd

#define GRPC_ERR_METHOD_NOT_IMPLEMENTED	-32001	//Method not implemented
#define GRPC_ERR_UNKNOWN				-32002	//Unknown error
#define GRPC_ERR_DEVICE_BUSY			-32003	//Device busy
#define GRPC_ERR_FUNC_NOT_SUPPORT		-32004	//Function not support
#define GRPC_ERR_NO_FREE_RESOURCE		-32005	//No free resource
#define GRPC_ERR_NO_FREE_MEMORY			-32006	//No free memory
#define GRPC_ERR_OPERATION_REFUSED		-32007	//Operation refused
#define GRPC_ERR_ALREADY_OPENED			-32008	//Resource already opened
#define GRPC_ERR_ALREADY_CLOSED			-32009	//Resource already closed
#define GRPC_ERR_TIMEOUT				-32010	//Timeout
#define GRPC_ERR_RESOURCE_EXIST			-32011	//Resource already exist


#define GRPC_ERR_SERVER_ERROR_START	-32000
#define GRPC_ERR_SERVER_ERROR_END	-32099	//Server error	Reserved for implementation-defined server-errors.


typedef enum{
	DEBUG_LEVEL_ERRORS,
	DEBUG_LEVEL_DEBUG,
	DEBUG_LEVEL_DEBUG_MORE,
	DEBUG_LEVEL_ALL,
}DebugLevel_e;

typedef enum
{
	GRPC_USER_LEVEL_Administrator,
	GRPC_USER_LEVEL_Operator,
	GRPC_USER_LEVEL_User,
	GRPC_USER_LEVEL_Anonymous,
	GRPC_USER_LEVEL_Extended,
	GRPC_USER_LEVEL_MAX
}GRPCUserLevel_e;

#ifndef GBOOL
#define GBOOL int
#define GTRUE 1
#define GFALSE 0
#endif

#define GRPC_DEBUG_LEVEL DEBUG_LEVEL_DEBUG_MORE

#define __FUNCTION_DBG__(level) \
	do{ \
		if (GRPC_DEBUG_LEVEL >= level) \
			printf("FUNCTION %s =>%4d: called\n", __FUNCTION__, __LINE__); \
	} while(0)

#define __GENERATE_FUNC_DEBUG__() __FUNCTION_DBG__(DEBUG_LEVEL_ALL)

#define __NULL_FUNC_DBG__() \
	do{ \
		if (GRPC_DEBUG_LEVEL >= DEBUG_LEVEL_DEBUG) \
			printf("NOT_FINISHED %s:%s =>%4d: called\n", __FILE__, __FUNCTION__, __LINE__); \
	} while(0)

#define __NULL_FUNC_DBG__FINISHED__() \
	do{ \
		if (GRPC_DEBUG_LEVEL >= DEBUG_LEVEL_DEBUG) \
			printf("FINISHED %s:%s =>%4d: called\n", __FILE__, __FUNCTION__, __LINE__); \
	} while(0)



struct _grpc_t;

/**
 *@brief 网络发送、接收的接口
 */
typedef struct{
	int (*send)(struct _grpc_t *grpc, void *buffer, int len);
	/**
	 *@param sumTimeoutms 累计超时时间。用在客户端。用于：当收到的数据，与期望的数据不符时，重复接收所花费的总时间。协助recv函数处理超时.
	 *	在Server端时，其值为Null。
	 *	其单位为毫秒
	 */
	int (*recv)(struct _grpc_t *grpc, void *buffer, int len, int *sumTimeoutms);
}grpcNetFunc_t;

/**
 *@brief Json转化成的函数的接口
 */
typedef struct{
	const char *name;
	int (*client_method_ptr)(struct _grpc_t *grpc);
	int (*server_method_ptr)(struct _grpc_t *grpc);
	GRPCUserLevel_e level; ///< 访问权限
}grpcMethod_t;

/**
 *@brief 初始化
 */
typedef struct{
	void *userdef;	// 网络通讯所须句柄。用户可以自定义。它会赋值给grpc.userfd
	grpcNetFunc_t fptr_net;  //网络通讯必要的接口
	grpcMethod_t *methodList;
}grpcInitParam_t;

typedef struct{
	char name[32];
	char passwd[32];
	GRPCUserLevel_e level;
}grpcUser_t;

#define PRIVATE
#define PUBLIC

typedef struct _grpc_t{
	PUBLIC void *userdef;// such as connect fd

	PRIVATE int sentcnt; //内部发送接收的一个计数。用于确认回复的版本是否匹配
	PRIVATE cJSON *root;

	PUBLIC struct{
		int errcode;
		char message[256];
	}error;

//private
	PRIVATE char buffer[128*1024];
	PRIVATE grpcNetFunc_t fptr_net;
	PRIVATE grpcMethod_t *methodList;
	PRIVATE void *memlist; //malloc list
	PRIVATE grpcUser_t userClient; //用于登陆，client.level无效
	PRIVATE grpcUser_t userServer[32];//server用于验证
	PRIVATE int userCnt; //server端用于验证的用户数
    int timeout_milliseconds; // 用于recv时的等待超时, 负数为永远等待; 0为立即返回; 正数为等待若干秒
}grpc_t;

/**
 *@brief 创建grpc，所有工作的开始
 */
grpc_t *grpc_new(void);

/**
 *@brief 删除grpc，所有工作的结束
 */
int grpc_delete(grpc_t *grpc);

/**
 *@brief 必要的初始化
 *
 *@param initParam 初始化参数
 */
int grpc_init(grpc_t *grpc, grpcInitParam_t *initParam);

/**
 *@brief 清空Server端验证信息
 */
int grpc_s_account_clear(grpc_t *grpc);

/**
 *@brief 增加Server端验证信息
 */
int grpc_s_account_add(grpc_t *grpc, const grpcUser_t *user);

/**
 *@brief 设置Client端登陆信息
 */
int grpc_c_account_set(grpc_t *grpc, const grpcUser_t *user);

/**
 *@brief 服务端用，等待数据的到来，调用适用的函数，并最终发送数据
 */
int grpc_s_serve(grpc_t *grpc);

/**
 *@brief 服务端用，无须等待数据，直接处理到来的数据
 */
int grpc_s_serve_direct(grpc_t *grpc, const char *data);

/**
 *@brief 服务端用，无须等待数据，直接处理到来的数据，同时，数据不发送，不删除，保存在grpc->root中
 */
int grpc_s_serve_without_send(grpc_t *grpc, const char *data);
/**
 *@brief 客户端用，由外部直接送数据进来
 */
int grpc_c_resp_direct(grpc_t *grpc, const char *resp);

/**
 *@brief 对于服务端，#grpc_serve之后，清理信息。或者对于客户端，调用REQ之后，清理内存。可重复调用
 */
int grpc_end(grpc_t *grpc);

/**
 *@brief 用于客户端，将#grpc_t::root 变成字符串发送出去
 */
int grpc_c_send(grpc_t *grpc);

/**
 *@brief 用于客户端，接收数据，并将收到的信息，变成#grpc_t::root
 */
int grpc_c_recv(grpc_t *grpc);

int grpc_c_recv_timeout(grpc_t *grpc, int timeout_milliseconds);

/**
 *@brief 申请内存，由#grpc_end负责释放
 */
void *grpc_malloc(grpc_t *grpc, int size);

/**
 *@brief 申请内存，复制字符串，由#grpc_end负责释放
 */
char *grpc_strdup(grpc_t *grpc, const char *str);

/**
 *@brief 编写错误信息
 */
int grpc_s_set_error(grpc_t *grpc, int errcode, const char *message);


#ifdef __cplusplus
}
#endif

#endif /* GRPC_H_ */
