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


#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#include <grpc.h>
//#include <account.h>
#include <ipc.h>
typedef struct{
	int fd;
	struct sockaddr_in server;
//	struct sockaddr_in from;
}UserDefInfo;

int send_test(struct _grpc_t *grpc, void *buffer, int len)
{
	UserDefInfo *user = (UserDefInfo *)grpc->userdef;
	return sendto(user->fd, buffer, len, 0, (struct sockaddr*)&user->server,(socklen_t)sizeof(user->server));
}

int recv_test(struct _grpc_t *grpc, void *buffer, int len, int *timeoutms)
{
	UserDefInfo *user = (UserDefInfo *)grpc->userdef;
	int addrlen = sizeof(user->server);
	int ret=recvfrom(user->fd, buffer, len, 0, (struct sockaddr*)&user->server,(socklen_t*)&addrlen);
	return ret;
}

void *__create_fd(char *ip)
{
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in addrto;
    bzero(&addrto, sizeof(struct sockaddr_in));
    addrto.sin_family = AF_INET;
    addrto.sin_addr.s_addr = inet_addr(ip);
    addrto.sin_port = htons(6000);


    UserDefInfo *user = malloc(sizeof(UserDefInfo));
    user->fd = fd;
    user->server = addrto;

	return user;
}

int main1(int argc, char *argv[])
{
	char *data =  "{\"method\":\"account_get_users\",\"list\":[]}";
	cJSON *json = cJSON_Parse(data);
	char *temp;
	cJSON *param = cJSON_CreateObject();
	cJSON_AddItemToObject(json, "param", param);
	temp = cJSON_Print(json);
	if (temp)
	{
		printf("format json: %s\n", temp);
		free(temp);
	}

	temp = cJSON_PrintUnformatted(json);
	if (temp)
	{
		printf("unformat json: %s\n", temp);
		free(temp);
	}

	return 0;
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

	strcpy(user.name, "abc");
	strcpy(user.passwd, "123");
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
