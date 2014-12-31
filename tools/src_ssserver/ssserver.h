// This file is generated auto. Do not modify it anytime.
#ifndef _ssserver_H_
#define _ssserver_H_

#include "grpc.h"


#ifdef __cplusplus
extern "C" {
#endif

extern grpcMethod_t ssserver_methodList[];

//--- account_get_users definition ----

typedef struct{
	int idle;
} PARAM_REQ_ssserver_account_get_users;

typedef struct{
	int users_cnt;
	struct{
		char *name; //username
		char *level; //admin,operator,user,anonymous,extended
		char *description; //This is Adiministrator
	} *users;
} PARAM_RESP_ssserver_account_get_users;
int SERVER_ssserver_account_get_users(grpc_t *grpc);
int USERDEF_ssserver_account_get_users(grpc_t *grpc, PARAM_REQ_ssserver_account_get_users *req, PARAM_RESP_ssserver_account_get_users *resp);
int CLIENT_REQ_ssserver_account_get_users(grpc_t *grpc, PARAM_REQ_ssserver_account_get_users *req);
int CLIENT_RESP_ssserver_account_get_users(grpc_t *grpc, PARAM_RESP_ssserver_account_get_users *resp);
int CLIENT_ssserver_account_get_users(grpc_t *grpc, PARAM_REQ_ssserver_account_get_users *req, PARAM_RESP_ssserver_account_get_users *resp);
int USERDEF_RESP_ssserver_account_get_users(grpc_t *grpc);

//--- account_add_user definition ----

typedef struct{
	char *name; //username
	char *passwd; //123456
	char *level; //admin,operator,user,anonymous,extended
	char *description; //This is Adiministrator
} PARAM_REQ_ssserver_account_add_user;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_account_add_user;
int SERVER_ssserver_account_add_user(grpc_t *grpc);
int USERDEF_ssserver_account_add_user(grpc_t *grpc, PARAM_REQ_ssserver_account_add_user *req, PARAM_RESP_ssserver_account_add_user *resp);
int CLIENT_REQ_ssserver_account_add_user(grpc_t *grpc, PARAM_REQ_ssserver_account_add_user *req);
int CLIENT_RESP_ssserver_account_add_user(grpc_t *grpc, PARAM_RESP_ssserver_account_add_user *resp);
int CLIENT_ssserver_account_add_user(grpc_t *grpc, PARAM_REQ_ssserver_account_add_user *req, PARAM_RESP_ssserver_account_add_user *resp);
int USERDEF_RESP_ssserver_account_add_user(grpc_t *grpc);

//--- account_del_user definition ----

typedef struct{
	char *name; //username
} PARAM_REQ_ssserver_account_del_user;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_account_del_user;
int SERVER_ssserver_account_del_user(grpc_t *grpc);
int USERDEF_ssserver_account_del_user(grpc_t *grpc, PARAM_REQ_ssserver_account_del_user *req, PARAM_RESP_ssserver_account_del_user *resp);
int CLIENT_REQ_ssserver_account_del_user(grpc_t *grpc, PARAM_REQ_ssserver_account_del_user *req);
int CLIENT_RESP_ssserver_account_del_user(grpc_t *grpc, PARAM_RESP_ssserver_account_del_user *resp);
int CLIENT_ssserver_account_del_user(grpc_t *grpc, PARAM_REQ_ssserver_account_del_user *req, PARAM_RESP_ssserver_account_del_user *resp);
int USERDEF_RESP_ssserver_account_del_user(grpc_t *grpc);

//--- account_modify_user definition ----

typedef struct{
	char *name; //username
	char *passwd; //123456
	char *level; //admin,operator,user,anonymous,extended
	char *description; //This is Adiministrator
} PARAM_REQ_ssserver_account_modify_user;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_account_modify_user;
int SERVER_ssserver_account_modify_user(grpc_t *grpc);
int USERDEF_ssserver_account_modify_user(grpc_t *grpc, PARAM_REQ_ssserver_account_modify_user *req, PARAM_RESP_ssserver_account_modify_user *resp);
int CLIENT_REQ_ssserver_account_modify_user(grpc_t *grpc, PARAM_REQ_ssserver_account_modify_user *req);
int CLIENT_RESP_ssserver_account_modify_user(grpc_t *grpc, PARAM_RESP_ssserver_account_modify_user *resp);
int CLIENT_ssserver_account_modify_user(grpc_t *grpc, PARAM_REQ_ssserver_account_modify_user *req, PARAM_RESP_ssserver_account_modify_user *resp);
int USERDEF_RESP_ssserver_account_modify_user(grpc_t *grpc);

//--- channel_get definition ----

typedef struct{
	int idle;
} PARAM_REQ_ssserver_channel_get;

typedef struct{
	int channels_cnt;
	struct{
		char *type; //IPC/DVR/NVR
		char *sid; //A361/N65465413
		char *protocol; //cloudsee/rtsp/onvif
		GBOOL bMainStream;
		GBOOL bSubStream;
		char *mainstream; //rtsp://127.0.0.1/live0.264
		char *substream; //rtsp://127.0.0.1/live1.264
		char *ip; //127.0.0.1
		char *port; //9101
		int channelcnt;
		int channelid;
		char *name; //admin
		char *passwd; //123456
		char *streamserverip; //127.0.0.1
		int streamserverport;
	} *channels;
} PARAM_RESP_ssserver_channel_get;
int SERVER_ssserver_channel_get(grpc_t *grpc);
int USERDEF_ssserver_channel_get(grpc_t *grpc, PARAM_REQ_ssserver_channel_get *req, PARAM_RESP_ssserver_channel_get *resp);
int CLIENT_REQ_ssserver_channel_get(grpc_t *grpc, PARAM_REQ_ssserver_channel_get *req);
int CLIENT_RESP_ssserver_channel_get(grpc_t *grpc, PARAM_RESP_ssserver_channel_get *resp);
int CLIENT_ssserver_channel_get(grpc_t *grpc, PARAM_REQ_ssserver_channel_get *req, PARAM_RESP_ssserver_channel_get *resp);
int USERDEF_RESP_ssserver_channel_get(grpc_t *grpc);

//--- channel_add definition ----

typedef struct{
	int channels_cnt;
	struct{
		char *type; //IPC/DVR/NVR
		char *sid; //A361/N65465413
		char *protocol; //cloudsee/rtsp/onvif
		GBOOL bMainStream;
		GBOOL bSubStream;
		char *mainstream; //rtsp://127.0.0.1/live0.264
		char *substream; //rtsp://127.0.0.1/live1.264
		char *ip; //127.0.0.1
		char *port; //9101
		int channelcnt;
		int channelid;
		char *name; //admin
		char *passwd; //123456
		char *streamserverip; //127.0.0.1
		int streamserverport;
	} *channels;
} PARAM_REQ_ssserver_channel_add;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_channel_add;
int SERVER_ssserver_channel_add(grpc_t *grpc);
int USERDEF_ssserver_channel_add(grpc_t *grpc, PARAM_REQ_ssserver_channel_add *req, PARAM_RESP_ssserver_channel_add *resp);
int CLIENT_REQ_ssserver_channel_add(grpc_t *grpc, PARAM_REQ_ssserver_channel_add *req);
int CLIENT_RESP_ssserver_channel_add(grpc_t *grpc, PARAM_RESP_ssserver_channel_add *resp);
int CLIENT_ssserver_channel_add(grpc_t *grpc, PARAM_REQ_ssserver_channel_add *req, PARAM_RESP_ssserver_channel_add *resp);
int USERDEF_RESP_ssserver_channel_add(grpc_t *grpc);

//--- channel_remove definition ----

typedef struct{
	char *type; //IPC/DVR/NVR
	char *sid; //A361/N65465413
	char *protocol; //cloudsee/rtsp/onvif
} PARAM_REQ_ssserver_channel_remove;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_channel_remove;
int SERVER_ssserver_channel_remove(grpc_t *grpc);
int USERDEF_ssserver_channel_remove(grpc_t *grpc, PARAM_REQ_ssserver_channel_remove *req, PARAM_RESP_ssserver_channel_remove *resp);
int CLIENT_REQ_ssserver_channel_remove(grpc_t *grpc, PARAM_REQ_ssserver_channel_remove *req);
int CLIENT_RESP_ssserver_channel_remove(grpc_t *grpc, PARAM_RESP_ssserver_channel_remove *resp);
int CLIENT_ssserver_channel_remove(grpc_t *grpc, PARAM_REQ_ssserver_channel_remove *req, PARAM_RESP_ssserver_channel_remove *resp);
int USERDEF_RESP_ssserver_channel_remove(grpc_t *grpc);

//--- channel_modify definition ----

typedef struct{
	char *type; //IPC/DVR/NVR
	char *sid; //A361/N65465413
	char *protocol; //cloudsee/rtsp/onvif
	GBOOL bMainStream;
	GBOOL bSubStream;
	char *mainstream; //rtsp://127.0.0.1/live0.264
	char *substream; //rtsp://127.0.0.1/live1.264
	char *ip; //127.0.0.1
	char *port; //9101
	int channelcnt;
	int channelid;
	char *name; //admin
	char *passwd; //123456
	char *streamserverip; //127.0.0.1
	int streamserverport;
} PARAM_REQ_ssserver_channel_modify;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_channel_modify;
int SERVER_ssserver_channel_modify(grpc_t *grpc);
int USERDEF_ssserver_channel_modify(grpc_t *grpc, PARAM_REQ_ssserver_channel_modify *req, PARAM_RESP_ssserver_channel_modify *resp);
int CLIENT_REQ_ssserver_channel_modify(grpc_t *grpc, PARAM_REQ_ssserver_channel_modify *req);
int CLIENT_RESP_ssserver_channel_modify(grpc_t *grpc, PARAM_RESP_ssserver_channel_modify *resp);
int CLIENT_ssserver_channel_modify(grpc_t *grpc, PARAM_REQ_ssserver_channel_modify *req, PARAM_RESP_ssserver_channel_modify *resp);
int USERDEF_RESP_ssserver_channel_modify(grpc_t *grpc);

//--- broadcast_discovery definition ----

typedef struct{
	int idle;
} PARAM_REQ_ssserver_broadcast_discovery;

typedef struct{
	char *type; //IPC/DVR/NVR
	char *sid; //A361/N65465413
	char *ip; //127.0.0.1
	char *port; //9101
	int channelcnt;
} PARAM_RESP_ssserver_broadcast_discovery;
int SERVER_ssserver_broadcast_discovery(grpc_t *grpc);
int USERDEF_ssserver_broadcast_discovery(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_discovery *req, PARAM_RESP_ssserver_broadcast_discovery *resp);
int CLIENT_REQ_ssserver_broadcast_discovery(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_discovery *req);
int CLIENT_RESP_ssserver_broadcast_discovery(grpc_t *grpc, PARAM_RESP_ssserver_broadcast_discovery *resp);
int CLIENT_ssserver_broadcast_discovery(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_discovery *req, PARAM_RESP_ssserver_broadcast_discovery *resp);
int USERDEF_RESP_ssserver_broadcast_discovery(grpc_t *grpc);

//--- broadcast_get_inet definition ----
/*
The value of quality ranges from 0 to 100.
*/

typedef struct{
	int idle;
} PARAM_REQ_ssserver_broadcast_get_inet;

typedef struct{
	char *iface; //eth,ppp,wifi
	struct{
		char *name; //eth0
		GBOOL bDHCP;
		char *addr; //192.168.7.160
		char *mask; //255.255.255.0
		char *gateway; //192.168.7.1
		char *mac; //E0:62:90:33:58:C7
		char *dns; //202.102.128.68
	} eth;
	struct{
		char *name; //adsl
		char *username; //qlc
		char *passwd; //123456
	} ppp;
	struct{
		char *name; //hehe
		int quality;
		int keystat;
		char *iestat; //wpa,wpa2,wep,plain
		GBOOL bDHCP;
		char *addr; //192.168.7.160
		char *mask; //255.255.255.0
		char *gateway; //192.168.7.1
		char *mac; //E0:62:90:33:58:C7
		char *dns; //202.102.128.68
	} wifi;
} PARAM_RESP_ssserver_broadcast_get_inet;
int SERVER_ssserver_broadcast_get_inet(grpc_t *grpc);
int USERDEF_ssserver_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_get_inet *req, PARAM_RESP_ssserver_broadcast_get_inet *resp);
int CLIENT_REQ_ssserver_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_get_inet *req);
int CLIENT_RESP_ssserver_broadcast_get_inet(grpc_t *grpc, PARAM_RESP_ssserver_broadcast_get_inet *resp);
int CLIENT_ssserver_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_get_inet *req, PARAM_RESP_ssserver_broadcast_get_inet *resp);
int USERDEF_RESP_ssserver_broadcast_get_inet(grpc_t *grpc);

//--- broadcast_eth_set definition ----

typedef struct{
	char *name; //eth0
	GBOOL bDHCP;
	char *addr; //192.168.7.160
	char *mask; //255.255.255.0
	char *gateway; //192.168.7.1
	char *dns; //202.102.128.68
} PARAM_REQ_ssserver_broadcast_eth_set;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_broadcast_eth_set;
int SERVER_ssserver_broadcast_eth_set(grpc_t *grpc);
int USERDEF_ssserver_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_eth_set *req, PARAM_RESP_ssserver_broadcast_eth_set *resp);
int CLIENT_REQ_ssserver_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_eth_set *req);
int CLIENT_RESP_ssserver_broadcast_eth_set(grpc_t *grpc, PARAM_RESP_ssserver_broadcast_eth_set *resp);
int CLIENT_ssserver_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_eth_set *req, PARAM_RESP_ssserver_broadcast_eth_set *resp);
int USERDEF_RESP_ssserver_broadcast_eth_set(grpc_t *grpc);

//--- broadcast_ppp_set definition ----

typedef struct{
	char *name; //adsl
	char *username; //qlc
	char *passwd; //123456
} PARAM_REQ_ssserver_broadcast_ppp_set;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_broadcast_ppp_set;
int SERVER_ssserver_broadcast_ppp_set(grpc_t *grpc);
int USERDEF_ssserver_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_ppp_set *req, PARAM_RESP_ssserver_broadcast_ppp_set *resp);
int CLIENT_REQ_ssserver_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_ppp_set *req);
int CLIENT_RESP_ssserver_broadcast_ppp_set(grpc_t *grpc, PARAM_RESP_ssserver_broadcast_ppp_set *resp);
int CLIENT_ssserver_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_ppp_set *req, PARAM_RESP_ssserver_broadcast_ppp_set *resp);
int USERDEF_RESP_ssserver_broadcast_ppp_set(grpc_t *grpc);

//--- broadcast_wifi_connect definition ----

typedef struct{
	char *name; //hehe
	char *passwd; //hehe12345
} PARAM_REQ_ssserver_broadcast_wifi_connect;

typedef struct{
	int idle;
} PARAM_RESP_ssserver_broadcast_wifi_connect;
int SERVER_ssserver_broadcast_wifi_connect(grpc_t *grpc);
int USERDEF_ssserver_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_wifi_connect *req, PARAM_RESP_ssserver_broadcast_wifi_connect *resp);
int CLIENT_REQ_ssserver_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_wifi_connect *req);
int CLIENT_RESP_ssserver_broadcast_wifi_connect(grpc_t *grpc, PARAM_RESP_ssserver_broadcast_wifi_connect *resp);
int CLIENT_ssserver_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_wifi_connect *req, PARAM_RESP_ssserver_broadcast_wifi_connect *resp);
int USERDEF_RESP_ssserver_broadcast_wifi_connect(grpc_t *grpc);

//--- broadcast_wifi_list_ap definition ----
/*
The value of quality ranges from 0 to 100.
*/

typedef struct{
	GBOOL bResearch;
} PARAM_REQ_ssserver_broadcast_wifi_list_ap;

typedef struct{
	int apList_cnt;
	struct{
		char *name; //hehe
		char *passwd; //hehe12345
		int quality;
		int keystat;
		char *iestat; //wpa,wpa2,wep,plain
	} *apList;
} PARAM_RESP_ssserver_broadcast_wifi_list_ap;
int SERVER_ssserver_broadcast_wifi_list_ap(grpc_t *grpc);
int USERDEF_ssserver_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_wifi_list_ap *req, PARAM_RESP_ssserver_broadcast_wifi_list_ap *resp);
int CLIENT_REQ_ssserver_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_wifi_list_ap *req);
int CLIENT_RESP_ssserver_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_RESP_ssserver_broadcast_wifi_list_ap *resp);
int CLIENT_ssserver_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_wifi_list_ap *req, PARAM_RESP_ssserver_broadcast_wifi_list_ap *resp);
int USERDEF_RESP_ssserver_broadcast_wifi_list_ap(grpc_t *grpc);

//--- storage_get_info definition ----

typedef struct{
	int idle;
} PARAM_REQ_ssserver_storage_get_info;

typedef struct{
	int disks_cnt;
	struct{
		char *disk_str; //sdb
		int capacity;
		char *status; //Initialized,Uninitialized
	} *disks;
} PARAM_RESP_ssserver_storage_get_info;
int SERVER_ssserver_storage_get_info(grpc_t *grpc);
int USERDEF_ssserver_storage_get_info(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_info *req, PARAM_RESP_ssserver_storage_get_info *resp);
int CLIENT_REQ_ssserver_storage_get_info(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_info *req);
int CLIENT_RESP_ssserver_storage_get_info(grpc_t *grpc, PARAM_RESP_ssserver_storage_get_info *resp);
int CLIENT_ssserver_storage_get_info(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_info *req, PARAM_RESP_ssserver_storage_get_info *resp);
int USERDEF_RESP_ssserver_storage_get_info(grpc_t *grpc);

//--- storage_start_intial_disk definition ----

typedef struct{
	char *disk_str; //sdb
} PARAM_REQ_ssserver_storage_start_intial_disk;

typedef struct{
	char *disk_str; //sdb
	char *start_initial; //yes or no
} PARAM_RESP_ssserver_storage_start_intial_disk;
int SERVER_ssserver_storage_start_intial_disk(grpc_t *grpc);
int USERDEF_ssserver_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_ssserver_storage_start_intial_disk *req, PARAM_RESP_ssserver_storage_start_intial_disk *resp);
int CLIENT_REQ_ssserver_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_ssserver_storage_start_intial_disk *req);
int CLIENT_RESP_ssserver_storage_start_intial_disk(grpc_t *grpc, PARAM_RESP_ssserver_storage_start_intial_disk *resp);
int CLIENT_ssserver_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_ssserver_storage_start_intial_disk *req, PARAM_RESP_ssserver_storage_start_intial_disk *resp);
int USERDEF_RESP_ssserver_storage_start_intial_disk(grpc_t *grpc);

//--- storage_get_disk_initial_rate definition ----

typedef struct{
	char *disk_str; //sdb
} PARAM_REQ_ssserver_storage_get_disk_initial_rate;

typedef struct{
	char *disk_str; //sdb
	int rate;
} PARAM_RESP_ssserver_storage_get_disk_initial_rate;
int SERVER_ssserver_storage_get_disk_initial_rate(grpc_t *grpc);
int USERDEF_ssserver_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_disk_initial_rate *req, PARAM_RESP_ssserver_storage_get_disk_initial_rate *resp);
int CLIENT_REQ_ssserver_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_disk_initial_rate *req);
int CLIENT_RESP_ssserver_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_RESP_ssserver_storage_get_disk_initial_rate *resp);
int CLIENT_ssserver_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_disk_initial_rate *req, PARAM_RESP_ssserver_storage_get_disk_initial_rate *resp);
int USERDEF_RESP_ssserver_storage_get_disk_initial_rate(grpc_t *grpc);

//--- storage_get_record_fragments definition ----

typedef struct{
	char *sid; //A361/N65465413
	int start_year;
	int start_month;
	int start_day;
	int start_hour;
	int start_minute;
	int start_second;
	int end_year;
	int end_month;
	int end_day;
	int end_hour;
	int end_minute;
	int end_second;
} PARAM_REQ_ssserver_storage_get_record_fragments;

typedef struct{
	int fragments_cnt;
	struct{
		char *sid; //A361/N65465413
		int start_year;
		int start_month;
		int start_day;
		int start_hour;
		int start_minute;
		int start_second;
		int end_year;
		int end_month;
		int end_day;
		int end_hour;
		int end_minute;
		int end_second;
	} *fragments;
} PARAM_RESP_ssserver_storage_get_record_fragments;
int SERVER_ssserver_storage_get_record_fragments(grpc_t *grpc);
int USERDEF_ssserver_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_record_fragments *req, PARAM_RESP_ssserver_storage_get_record_fragments *resp);
int CLIENT_REQ_ssserver_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_record_fragments *req);
int CLIENT_RESP_ssserver_storage_get_record_fragments(grpc_t *grpc, PARAM_RESP_ssserver_storage_get_record_fragments *resp);
int CLIENT_ssserver_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_record_fragments *req, PARAM_RESP_ssserver_storage_get_record_fragments *resp);
int USERDEF_RESP_ssserver_storage_get_record_fragments(grpc_t *grpc);

//--- stream_get_service definition ----

typedef struct{
	char *type; //IPC/DVR/NVR
	char *sid; //A361/N65465413
	char *protocol; //cloudsee/rtsp/onvif
	GBOOL bMainStream;
	GBOOL bSubStream;
	char *mainstream; //rtsp://127.0.0.1/live0.264
	char *substream; //rtsp://127.0.0.1/live1.264
	char *ip; //127.0.0.1
	char *port; //9101
	int channelcnt;
	int channelid;
} PARAM_REQ_ssserver_stream_get_service;

typedef struct{
	char *sid; //A361/N65465413
	char *protocol; //cloudsee/rtsp/onvif
	char *url; //rtsp://127.0.0.1/live0.264
	char *ip; //127.0.0.1
	char *port; //9101
	int channelid;
} PARAM_RESP_ssserver_stream_get_service;
int SERVER_ssserver_stream_get_service(grpc_t *grpc);
int USERDEF_ssserver_stream_get_service(grpc_t *grpc, PARAM_REQ_ssserver_stream_get_service *req, PARAM_RESP_ssserver_stream_get_service *resp);
int CLIENT_REQ_ssserver_stream_get_service(grpc_t *grpc, PARAM_REQ_ssserver_stream_get_service *req);
int CLIENT_RESP_ssserver_stream_get_service(grpc_t *grpc, PARAM_RESP_ssserver_stream_get_service *resp);
int CLIENT_ssserver_stream_get_service(grpc_t *grpc, PARAM_REQ_ssserver_stream_get_service *req, PARAM_RESP_ssserver_stream_get_service *resp);
int USERDEF_RESP_ssserver_stream_get_service(grpc_t *grpc);
#ifdef __cplusplus
}
#endif
#endif
