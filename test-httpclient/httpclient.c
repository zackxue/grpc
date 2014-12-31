/*
 * client.c
 *
 *  Created on: 2014Äê10ÔÂ10ÈÕ
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
#include <ipc.h>


#include <curl/curl.h>

static struct{
	grpc_t *grpc;
	char *url;
}sClientInfo;


#define CHECK_RET(express)\
		do{\
			int s32Ret = express;\
			if (0 != s32Ret)\
			{\
				printf("FUNC:%s,LINE:%d,failed! %x\n", __FUNCTION__, __LINE__, s32Ret);\
			}\
		}while(0)

static size_t http_write_default(char *data, size_t size, size_t nmemb, void *write_buf)
{
	size_t sizes = nmemb * size;
	printf("data===> \n%s\n",data);
	struct _grpc_t *grpc = (struct _grpc_t *)write_buf;
	char *p = strstr(data, "grpc:");
	if (!p)
	{
		printf("ERROR: Failed get grpc: in : %s\n", data);
		return sizes;
	}

	p += 5;

	grpc_c_resp_direct(grpc, p);

	return sizes;
}

int send_test(struct _grpc_t *grpc, void *buffer, int len)
{
	int code ;
	CURL *curl=NULL;
	char *url = sClientInfo.url;

	curl=curl_easy_init();
	if(curl == NULL)
	{
		fprintf(stdout,"Failed to curl_easy_init\n");
		return -1;
	}
	char *tosend = malloc(len+12);
	strcpy(tosend, "grpc:");
	memcpy(tosend+5, buffer, len);


	CHECK_RET(curl_easy_setopt(curl, CURLOPT_URL, url));
	CHECK_RET(curl_easy_setopt(curl, CURLOPT_POST, 1));
	CHECK_RET(curl_easy_setopt(curl, CURLOPT_VERBOSE, 1));
	CHECK_RET(curl_easy_setopt(curl, CURLOPT_TIMEOUT, 5));
	CHECK_RET(curl_easy_setopt(curl,CURLOPT_POSTFIELDS,tosend));
	CHECK_RET(curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0));
	CHECK_RET(curl_easy_setopt(curl,CURLOPT_COOKIESESSION,1L));
	CHECK_RET(curl_easy_setopt(curl,CURLOPT_COOKIEFILE,"/dev/null"));

	CHECK_RET(curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, http_write_default));
	CHECK_RET(curl_easy_setopt(curl,CURLOPT_WRITEDATA,grpc));

	fprintf(stdout,"======http=====1==\n");
	code = curl_easy_perform(curl);
	if (code != CURLE_OK)
	{
		fprintf(stdout, "Failed to curl_easy_perform,%d\n",code);
	}
	fprintf(stdout,"======http=====2==\n");
	curl_easy_cleanup(curl);
	fprintf(stdout,"======http=====3==\n");
	free(tosend);
	if (code == CURLE_OK)
		return len;
	else
		return -1;
}

int recv_test(struct _grpc_t *grpc, void *buffer, int len, int *timeoutms)
{
	printf("not needed\n");
	return 0;
}

int main(int argc, char *argv[])
{
	int ret;

	grpcInitParam_t initParam;
	char *url;
	if (argc == 1)
	{
		printf("%s http://192.168.xx.xx/abc\ndefault: http://127.0.0.1", argv[0]);
		url = "http://127.0.0.1/cgi-bin/transfer_8127";
	}
	else
		url = argv[1];
	sClientInfo.url = url;
	memset(&initParam, 0, sizeof(initParam));
	initParam.fptr_net.recv = recv_test;
	initParam.fptr_net.send = send_test;
	initParam.methodList = ipc_methodList;
//	initParam.fptr_net.recv
	grpc_t *grpc = grpc_new();
	sClientInfo.grpc = grpc;
	grpc_init(grpc, &initParam);

	grpcUser_t user = {"admin","12345",};
	grpc_c_account_set(grpc, &user);

	while (1)//account_get_users
	{
		PARAM_REQ_ipc_account_get_users users;
		CLIENT_REQ_ipc_account_get_users(grpc, &users);
		grpc_end(grpc);
		usleep(100*1000);
		getchar();
		continue;
		break;
	}
	while(1)
	{
		usleep(1000);
	}
	return 0;
}
