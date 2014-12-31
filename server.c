/*
 * server.c
 *
 *  Created on: 2014Äê10ÔÂ10ÈÕ
 *      Author: LiuFengxiang
 *		 Email: lfx@jovision.com
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#include <grpc.h>
#include <ipc.h>
static int running = 0;

#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <netdb.h>
#include <netinet/in.h>

typedef struct{
	int fd;
	struct sockaddr_in addr;
	struct sockaddr_in from;
}UserDefInfo;

int send_test(struct _grpc_t *grpc, void *buffer, int len)
{
	UserDefInfo *user = (UserDefInfo *)grpc->userdef;
	return sendto(user->fd, buffer, len, 0, (struct sockaddr*)&user->from,(socklen_t)sizeof(user->from));
}

int recv_test(struct _grpc_t *grpc, void *buffer, int len, int *timeout)
{
	UserDefInfo *user = (UserDefInfo *)grpc->userdef;
	int addrlen = sizeof(user->from);
	int ret=recvfrom(user->fd, buffer, len, 0, (struct sockaddr*)&user->from,(socklen_t*)&addrlen);
	return ret;
}

void *__create_fd()
{
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in addrto;
    bzero(&addrto, sizeof(struct sockaddr_in));
    addrto.sin_family = AF_INET;
    addrto.sin_addr.s_addr = htonl(INADDR_ANY);
    addrto.sin_port = htons(6000);


    if(bind(fd,(struct sockaddr *)&(addrto), sizeof(struct sockaddr_in)) == -1)
    {
    	perror("bind failed: %s\n");
        return NULL;
    }
    UserDefInfo *user = malloc(sizeof(UserDefInfo));
    user->fd = fd;
    user->addr = addrto;

	return user;
}

int main(int argc, char *argv[])
{
	grpcInitParam_t initParam;
	initParam.userdef = __create_fd();
	initParam.fptr_net.recv = recv_test;
	initParam.fptr_net.send = send_test;
	initParam.methodList = ipc_methodList;

//	initParam.fptr_net.recv
	grpc_t *grpc = grpc_new();
	grpc_init(grpc, &initParam);
	grpc_s_account_clear(grpc);
	grpcUser_t user[] =
	{
			{
				"admin","123456",
				GRPC_USER_LEVEL_Administrator
			},
			{
				"abc","123",
				GRPC_USER_LEVEL_Administrator
			},
			//GRPC_USER_LEVEL_Administrator
	};
	grpc_s_account_add(grpc, &user[0]);
	grpc_s_account_add(grpc, &user[1]);

	while(1)
	{
		printf("serving...\n");
		grpc_s_serve(grpc);
		grpc_end(grpc);
	}
	return 0;
}

