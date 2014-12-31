// This file is generated auto. Do not modify it anytime.
#ifndef _vds_H_
#define _vds_H_

#include "grpc.h"


#ifdef __cplusplus
extern "C" {
#endif

extern grpcMethod_t vds_methodList[];

//--- account_get_users definition ----

typedef struct{
	int idle;
} PARAM_REQ_vds_account_get_users;

typedef struct{
	int users_cnt;
	struct{
		char *name; //username
		char *level; //admin,operator,user,anonymous,extended
		char *description; //This is Adiministrator
	} *users;
} PARAM_RESP_vds_account_get_users;
int SERVER_vds_account_get_users(grpc_t *grpc);
int USERDEF_vds_account_get_users(grpc_t *grpc, PARAM_REQ_vds_account_get_users *req, PARAM_RESP_vds_account_get_users *resp);
int CLIENT_REQ_vds_account_get_users(grpc_t *grpc, PARAM_REQ_vds_account_get_users *req);
int CLIENT_RESP_vds_account_get_users(grpc_t *grpc, PARAM_RESP_vds_account_get_users *resp);
int CLIENT_vds_account_get_users(grpc_t *grpc, PARAM_REQ_vds_account_get_users *req, PARAM_RESP_vds_account_get_users *resp);
int USERDEF_RESP_vds_account_get_users(grpc_t *grpc);

//--- account_add_user definition ----

typedef struct{
	char *name; //username
	char *passwd; //123456
	char *level; //admin,operator,user,anonymous,extended
	char *description; //This is Adiministrator
} PARAM_REQ_vds_account_add_user;

typedef struct{
	int idle;
} PARAM_RESP_vds_account_add_user;
int SERVER_vds_account_add_user(grpc_t *grpc);
int USERDEF_vds_account_add_user(grpc_t *grpc, PARAM_REQ_vds_account_add_user *req, PARAM_RESP_vds_account_add_user *resp);
int CLIENT_REQ_vds_account_add_user(grpc_t *grpc, PARAM_REQ_vds_account_add_user *req);
int CLIENT_RESP_vds_account_add_user(grpc_t *grpc, PARAM_RESP_vds_account_add_user *resp);
int CLIENT_vds_account_add_user(grpc_t *grpc, PARAM_REQ_vds_account_add_user *req, PARAM_RESP_vds_account_add_user *resp);
int USERDEF_RESP_vds_account_add_user(grpc_t *grpc);

//--- account_del_user definition ----

typedef struct{
	char *name; //username
} PARAM_REQ_vds_account_del_user;

typedef struct{
	int idle;
} PARAM_RESP_vds_account_del_user;
int SERVER_vds_account_del_user(grpc_t *grpc);
int USERDEF_vds_account_del_user(grpc_t *grpc, PARAM_REQ_vds_account_del_user *req, PARAM_RESP_vds_account_del_user *resp);
int CLIENT_REQ_vds_account_del_user(grpc_t *grpc, PARAM_REQ_vds_account_del_user *req);
int CLIENT_RESP_vds_account_del_user(grpc_t *grpc, PARAM_RESP_vds_account_del_user *resp);
int CLIENT_vds_account_del_user(grpc_t *grpc, PARAM_REQ_vds_account_del_user *req, PARAM_RESP_vds_account_del_user *resp);
int USERDEF_RESP_vds_account_del_user(grpc_t *grpc);

//--- account_modify_user definition ----

typedef struct{
	char *name; //username
	char *passwd; //123456
	char *level; //admin,operator,user,anonymous,extended
	char *description; //This is Adiministrator
} PARAM_REQ_vds_account_modify_user;

typedef struct{
	int idle;
} PARAM_RESP_vds_account_modify_user;
int SERVER_vds_account_modify_user(grpc_t *grpc);
int USERDEF_vds_account_modify_user(grpc_t *grpc, PARAM_REQ_vds_account_modify_user *req, PARAM_RESP_vds_account_modify_user *resp);
int CLIENT_REQ_vds_account_modify_user(grpc_t *grpc, PARAM_REQ_vds_account_modify_user *req);
int CLIENT_RESP_vds_account_modify_user(grpc_t *grpc, PARAM_RESP_vds_account_modify_user *resp);
int CLIENT_vds_account_modify_user(grpc_t *grpc, PARAM_REQ_vds_account_modify_user *req, PARAM_RESP_vds_account_modify_user *resp);
int USERDEF_RESP_vds_account_modify_user(grpc_t *grpc);

//--- connection_get_list definition ----

typedef struct{
	char *conType; //all,jovision,rtsp,gb28181,psia,other
} PARAM_REQ_vds_connection_get_list;

typedef struct{
	int connectionList_cnt;
	struct{
		char *conType; //jovision
		int key;
		char *addr; //192.168.7.160
		char *user; //admin
	} *connectionList;
} PARAM_RESP_vds_connection_get_list;
int SERVER_vds_connection_get_list(grpc_t *grpc);
int USERDEF_vds_connection_get_list(grpc_t *grpc, PARAM_REQ_vds_connection_get_list *req, PARAM_RESP_vds_connection_get_list *resp);
int CLIENT_REQ_vds_connection_get_list(grpc_t *grpc, PARAM_REQ_vds_connection_get_list *req);
int CLIENT_RESP_vds_connection_get_list(grpc_t *grpc, PARAM_RESP_vds_connection_get_list *resp);
int CLIENT_vds_connection_get_list(grpc_t *grpc, PARAM_REQ_vds_connection_get_list *req, PARAM_RESP_vds_connection_get_list *resp);
int USERDEF_RESP_vds_connection_get_list(grpc_t *grpc);

//--- connection_breakoff definition ----

typedef struct{
	int connectionList_cnt;
	struct{
		char *conType; //jovision
		int key;
	} *connectionList;
} PARAM_REQ_vds_connection_breakoff;

typedef struct{
	int idle;
} PARAM_RESP_vds_connection_breakoff;
int SERVER_vds_connection_breakoff(grpc_t *grpc);
int USERDEF_vds_connection_breakoff(grpc_t *grpc, PARAM_REQ_vds_connection_breakoff *req, PARAM_RESP_vds_connection_breakoff *resp);
int CLIENT_REQ_vds_connection_breakoff(grpc_t *grpc, PARAM_REQ_vds_connection_breakoff *req);
int CLIENT_RESP_vds_connection_breakoff(grpc_t *grpc, PARAM_RESP_vds_connection_breakoff *resp);
int CLIENT_vds_connection_breakoff(grpc_t *grpc, PARAM_REQ_vds_connection_breakoff *req, PARAM_RESP_vds_connection_breakoff *resp);
int USERDEF_RESP_vds_connection_breakoff(grpc_t *grpc);

//--- dev_get_hwinfo definition ----

typedef struct{
	int idle;
} PARAM_REQ_vds_dev_get_hwinfo;

typedef struct{
	char *type; //IPC
	char *hardware; //V1.0
	char *sn; //112233
	char *firmware; //V1.0
	char *manufacture; //JOVISION
	char *model; //JVS-N71-HD
	GBOOL bPtzSupport;
	GBOOL bWifiSupport;
	int channelCnt;
	int streamCnt;
	char *ystID; //A402153844
} PARAM_RESP_vds_dev_get_hwinfo;
int SERVER_vds_dev_get_hwinfo(grpc_t *grpc);
int USERDEF_vds_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vds_dev_get_hwinfo *req, PARAM_RESP_vds_dev_get_hwinfo *resp);
int CLIENT_REQ_vds_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vds_dev_get_hwinfo *req);
int CLIENT_RESP_vds_dev_get_hwinfo(grpc_t *grpc, PARAM_RESP_vds_dev_get_hwinfo *resp);
int CLIENT_vds_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vds_dev_get_hwinfo *req, PARAM_RESP_vds_dev_get_hwinfo *resp);
int USERDEF_RESP_vds_dev_get_hwinfo(grpc_t *grpc);

//--- dev_get_info definition ----

typedef struct{
	int idle;
} PARAM_REQ_vds_dev_get_info;

typedef struct{
	GBOOL bDiscoverable;
	char *hostname; //HD IPC
	char *name; //HD IPC
	char *rebootDay; //never,everyday,everysunday,everymonday,everytuesday,everywednesday,everythursday,everyfriday,everysaturday
	int rebootHour;
} PARAM_RESP_vds_dev_get_info;
int SERVER_vds_dev_get_info(grpc_t *grpc);
int USERDEF_vds_dev_get_info(grpc_t *grpc, PARAM_REQ_vds_dev_get_info *req, PARAM_RESP_vds_dev_get_info *resp);
int CLIENT_REQ_vds_dev_get_info(grpc_t *grpc, PARAM_REQ_vds_dev_get_info *req);
int CLIENT_RESP_vds_dev_get_info(grpc_t *grpc, PARAM_RESP_vds_dev_get_info *resp);
int CLIENT_vds_dev_get_info(grpc_t *grpc, PARAM_REQ_vds_dev_get_info *req, PARAM_RESP_vds_dev_get_info *resp);
int USERDEF_RESP_vds_dev_get_info(grpc_t *grpc);

//--- dev_set_info definition ----

typedef struct{
	GBOOL bDiscoverable;
	char *hostname; //HD IPC
	char *name; //HD IPC
	char *rebootDay; //never,everyday,everysunday,everymonday,everytuesday,everywednesday,everythursday,everyfriday,everysaturday
	int rebootHour;
} PARAM_REQ_vds_dev_set_info;

typedef struct{
	int idle;
} PARAM_RESP_vds_dev_set_info;
int SERVER_vds_dev_set_info(grpc_t *grpc);
int USERDEF_vds_dev_set_info(grpc_t *grpc, PARAM_REQ_vds_dev_set_info *req, PARAM_RESP_vds_dev_set_info *resp);
int CLIENT_REQ_vds_dev_set_info(grpc_t *grpc, PARAM_REQ_vds_dev_set_info *req);
int CLIENT_RESP_vds_dev_set_info(grpc_t *grpc, PARAM_RESP_vds_dev_set_info *resp);
int CLIENT_vds_dev_set_info(grpc_t *grpc, PARAM_REQ_vds_dev_set_info *req, PARAM_RESP_vds_dev_set_info *resp);
int USERDEF_RESP_vds_dev_set_info(grpc_t *grpc);

//--- dev_stime definition ----
/*
Param tmsec means the seconds elapsed since 1970.
*/

typedef struct{
	int tmsec;
	char *tz; //8.5
} PARAM_REQ_vds_dev_stime;

typedef struct{
	int idle;
} PARAM_RESP_vds_dev_stime;
int SERVER_vds_dev_stime(grpc_t *grpc);
int USERDEF_vds_dev_stime(grpc_t *grpc, PARAM_REQ_vds_dev_stime *req, PARAM_RESP_vds_dev_stime *resp);
int CLIENT_REQ_vds_dev_stime(grpc_t *grpc, PARAM_REQ_vds_dev_stime *req);
int CLIENT_RESP_vds_dev_stime(grpc_t *grpc, PARAM_RESP_vds_dev_stime *resp);
int CLIENT_vds_dev_stime(grpc_t *grpc, PARAM_REQ_vds_dev_stime *req, PARAM_RESP_vds_dev_stime *resp);
int USERDEF_RESP_vds_dev_stime(grpc_t *grpc);

//--- dev_gtime definition ----
/*
Param tmsec means the seconds elapsed since 1970.
*/

typedef struct{
	int idle;
} PARAM_REQ_vds_dev_gtime;

typedef struct{
	int tmsec;
	char *tz; //8.5
} PARAM_RESP_vds_dev_gtime;
int SERVER_vds_dev_gtime(grpc_t *grpc);
int USERDEF_vds_dev_gtime(grpc_t *grpc, PARAM_REQ_vds_dev_gtime *req, PARAM_RESP_vds_dev_gtime *resp);
int CLIENT_REQ_vds_dev_gtime(grpc_t *grpc, PARAM_REQ_vds_dev_gtime *req);
int CLIENT_RESP_vds_dev_gtime(grpc_t *grpc, PARAM_RESP_vds_dev_gtime *resp);
int CLIENT_vds_dev_gtime(grpc_t *grpc, PARAM_REQ_vds_dev_gtime *req, PARAM_RESP_vds_dev_gtime *resp);
int USERDEF_RESP_vds_dev_gtime(grpc_t *grpc);

//--- dev_ntp_set definition ----

typedef struct{
	GBOOL bEnableNtp;
	int sntpInterval;
	int servers_cnt;
	char **servers; //ntp.fudan.edu.cn
} PARAM_REQ_vds_dev_ntp_set;

typedef struct{
	int idle;
} PARAM_RESP_vds_dev_ntp_set;
int SERVER_vds_dev_ntp_set(grpc_t *grpc);
int USERDEF_vds_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_set *req, PARAM_RESP_vds_dev_ntp_set *resp);
int CLIENT_REQ_vds_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_set *req);
int CLIENT_RESP_vds_dev_ntp_set(grpc_t *grpc, PARAM_RESP_vds_dev_ntp_set *resp);
int CLIENT_vds_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_set *req, PARAM_RESP_vds_dev_ntp_set *resp);
int USERDEF_RESP_vds_dev_ntp_set(grpc_t *grpc);

//--- dev_ntp_get definition ----

typedef struct{
	int idle;
} PARAM_REQ_vds_dev_ntp_get;

typedef struct{
	GBOOL bEnableNtp;
	int sntpInterval;
	int servers_cnt;
	char **servers; //ntp.fudan.edu.cn
} PARAM_RESP_vds_dev_ntp_get;
int SERVER_vds_dev_ntp_get(grpc_t *grpc);
int USERDEF_vds_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_get *req, PARAM_RESP_vds_dev_ntp_get *resp);
int CLIENT_REQ_vds_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_get *req);
int CLIENT_RESP_vds_dev_ntp_get(grpc_t *grpc, PARAM_RESP_vds_dev_ntp_get *resp);
int CLIENT_vds_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_get *req, PARAM_RESP_vds_dev_ntp_get *resp);
int USERDEF_RESP_vds_dev_ntp_get(grpc_t *grpc);

//--- dev_reboot definition ----

typedef struct{
	int delaymSec;
} PARAM_REQ_vds_dev_reboot;

typedef struct{
	int idle;
} PARAM_RESP_vds_dev_reboot;
int SERVER_vds_dev_reboot(grpc_t *grpc);
int USERDEF_vds_dev_reboot(grpc_t *grpc, PARAM_REQ_vds_dev_reboot *req, PARAM_RESP_vds_dev_reboot *resp);
int CLIENT_REQ_vds_dev_reboot(grpc_t *grpc, PARAM_REQ_vds_dev_reboot *req);
int CLIENT_RESP_vds_dev_reboot(grpc_t *grpc, PARAM_RESP_vds_dev_reboot *resp);
int CLIENT_vds_dev_reboot(grpc_t *grpc, PARAM_REQ_vds_dev_reboot *req, PARAM_RESP_vds_dev_reboot *resp);
int USERDEF_RESP_vds_dev_reboot(grpc_t *grpc);

//--- dev_factory_default definition ----

typedef struct{
	GBOOL bHard;
} PARAM_REQ_vds_dev_factory_default;

typedef struct{
	int idle;
} PARAM_RESP_vds_dev_factory_default;
int SERVER_vds_dev_factory_default(grpc_t *grpc);
int USERDEF_vds_dev_factory_default(grpc_t *grpc, PARAM_REQ_vds_dev_factory_default *req, PARAM_RESP_vds_dev_factory_default *resp);
int CLIENT_REQ_vds_dev_factory_default(grpc_t *grpc, PARAM_REQ_vds_dev_factory_default *req);
int CLIENT_RESP_vds_dev_factory_default(grpc_t *grpc, PARAM_RESP_vds_dev_factory_default *resp);
int CLIENT_vds_dev_factory_default(grpc_t *grpc, PARAM_REQ_vds_dev_factory_default *req, PARAM_RESP_vds_dev_factory_default *resp);
int USERDEF_RESP_vds_dev_factory_default(grpc_t *grpc);

//--- ifconfig_get_inet definition ----
/*
The value of quality ranges from 0 to 100.
*/

typedef struct{
	int idle;
} PARAM_REQ_vds_ifconfig_get_inet;

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
} PARAM_RESP_vds_ifconfig_get_inet;
int SERVER_vds_ifconfig_get_inet(grpc_t *grpc);
int USERDEF_vds_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vds_ifconfig_get_inet *req, PARAM_RESP_vds_ifconfig_get_inet *resp);
int CLIENT_REQ_vds_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vds_ifconfig_get_inet *req);
int CLIENT_RESP_vds_ifconfig_get_inet(grpc_t *grpc, PARAM_RESP_vds_ifconfig_get_inet *resp);
int CLIENT_vds_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vds_ifconfig_get_inet *req, PARAM_RESP_vds_ifconfig_get_inet *resp);
int USERDEF_RESP_vds_ifconfig_get_inet(grpc_t *grpc);

//--- ifconfig_eth_set definition ----

typedef struct{
	char *name; //eth0
	GBOOL bDHCP;
	char *addr; //192.168.7.160
	char *mask; //255.255.255.0
	char *gateway; //192.168.7.1
	char *dns; //202.102.128.68
} PARAM_REQ_vds_ifconfig_eth_set;

typedef struct{
	int idle;
} PARAM_RESP_vds_ifconfig_eth_set;
int SERVER_vds_ifconfig_eth_set(grpc_t *grpc);
int USERDEF_vds_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_eth_set *req, PARAM_RESP_vds_ifconfig_eth_set *resp);
int CLIENT_REQ_vds_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_eth_set *req);
int CLIENT_RESP_vds_ifconfig_eth_set(grpc_t *grpc, PARAM_RESP_vds_ifconfig_eth_set *resp);
int CLIENT_vds_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_eth_set *req, PARAM_RESP_vds_ifconfig_eth_set *resp);
int USERDEF_RESP_vds_ifconfig_eth_set(grpc_t *grpc);

//--- ifconfig_ppp_set definition ----

typedef struct{
	char *name; //adsl
	char *username; //qlc
	char *passwd; //123456
} PARAM_REQ_vds_ifconfig_ppp_set;

typedef struct{
	int idle;
} PARAM_RESP_vds_ifconfig_ppp_set;
int SERVER_vds_ifconfig_ppp_set(grpc_t *grpc);
int USERDEF_vds_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_ppp_set *req, PARAM_RESP_vds_ifconfig_ppp_set *resp);
int CLIENT_REQ_vds_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_ppp_set *req);
int CLIENT_RESP_vds_ifconfig_ppp_set(grpc_t *grpc, PARAM_RESP_vds_ifconfig_ppp_set *resp);
int CLIENT_vds_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_ppp_set *req, PARAM_RESP_vds_ifconfig_ppp_set *resp);
int USERDEF_RESP_vds_ifconfig_ppp_set(grpc_t *grpc);

//--- ifconfig_wifi_connect definition ----

typedef struct{
	char *name; //hehe
	char *passwd; //hehe12345
} PARAM_REQ_vds_ifconfig_wifi_connect;

typedef struct{
	int idle;
} PARAM_RESP_vds_ifconfig_wifi_connect;
int SERVER_vds_ifconfig_wifi_connect(grpc_t *grpc);
int USERDEF_vds_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_connect *req, PARAM_RESP_vds_ifconfig_wifi_connect *resp);
int CLIENT_REQ_vds_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_connect *req);
int CLIENT_RESP_vds_ifconfig_wifi_connect(grpc_t *grpc, PARAM_RESP_vds_ifconfig_wifi_connect *resp);
int CLIENT_vds_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_connect *req, PARAM_RESP_vds_ifconfig_wifi_connect *resp);
int USERDEF_RESP_vds_ifconfig_wifi_connect(grpc_t *grpc);

//--- ifconfig_wifi_list_ap definition ----
/*
The value of quality ranges from 0 to 100.
*/

typedef struct{
	GBOOL bResearch;
} PARAM_REQ_vds_ifconfig_wifi_list_ap;

typedef struct{
	int apList_cnt;
	struct{
		char *name; //hehe
		char *passwd; //hehe12345
		int quality;
		int keystat;
		char *iestat; //wpa,wpa2,wep,plain
	} *apList;
} PARAM_RESP_vds_ifconfig_wifi_list_ap;
int SERVER_vds_ifconfig_wifi_list_ap(grpc_t *grpc);
int USERDEF_vds_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_list_ap *req, PARAM_RESP_vds_ifconfig_wifi_list_ap *resp);
int CLIENT_REQ_vds_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_list_ap *req);
int CLIENT_RESP_vds_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_RESP_vds_ifconfig_wifi_list_ap *resp);
int CLIENT_vds_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_list_ap *req, PARAM_RESP_vds_ifconfig_wifi_list_ap *resp);
int USERDEF_RESP_vds_ifconfig_wifi_list_ap(grpc_t *grpc);

//--- screen_get_ability definition ----
/*
Get screen ability.The max number of elements in nModeList array and freeSpace array is 16.
*/

typedef struct{
	int screen;
} PARAM_REQ_vds_screen_get_ability;

typedef struct{
	int nMaxChn;
	int nModeList_cnt;
	int *nModeList;
} PARAM_RESP_vds_screen_get_ability;
int SERVER_vds_screen_get_ability(grpc_t *grpc);
int USERDEF_vds_screen_get_ability(grpc_t *grpc, PARAM_REQ_vds_screen_get_ability *req, PARAM_RESP_vds_screen_get_ability *resp);
int CLIENT_REQ_vds_screen_get_ability(grpc_t *grpc, PARAM_REQ_vds_screen_get_ability *req);
int CLIENT_RESP_vds_screen_get_ability(grpc_t *grpc, PARAM_RESP_vds_screen_get_ability *resp);
int CLIENT_vds_screen_get_ability(grpc_t *grpc, PARAM_REQ_vds_screen_get_ability *req, PARAM_RESP_vds_screen_get_ability *resp);
int USERDEF_RESP_vds_screen_get_ability(grpc_t *grpc);

//--- screen_get_display definition ----
/*
Get screen display mode.
*/

typedef struct{
	int screen;
} PARAM_REQ_vds_screen_get_display;

typedef struct{
	int nViewMode;
	int nViewWindow;
	int nSelected;
	int nStartPos;
} PARAM_RESP_vds_screen_get_display;
int SERVER_vds_screen_get_display(grpc_t *grpc);
int USERDEF_vds_screen_get_display(grpc_t *grpc, PARAM_REQ_vds_screen_get_display *req, PARAM_RESP_vds_screen_get_display *resp);
int CLIENT_REQ_vds_screen_get_display(grpc_t *grpc, PARAM_REQ_vds_screen_get_display *req);
int CLIENT_RESP_vds_screen_get_display(grpc_t *grpc, PARAM_RESP_vds_screen_get_display *resp);
int CLIENT_vds_screen_get_display(grpc_t *grpc, PARAM_REQ_vds_screen_get_display *req, PARAM_RESP_vds_screen_get_display *resp);
int USERDEF_RESP_vds_screen_get_display(grpc_t *grpc);

//--- screen_set_display definition ----
/*
Set screen display mode.
*/

typedef struct{
	int screen;
	int nViewMode;
	int nViewWindow;
	int nSelected;
	int nStartPos;
} PARAM_REQ_vds_screen_set_display;

typedef struct{
	int idle;
} PARAM_RESP_vds_screen_set_display;
int SERVER_vds_screen_set_display(grpc_t *grpc);
int USERDEF_vds_screen_set_display(grpc_t *grpc, PARAM_REQ_vds_screen_set_display *req, PARAM_RESP_vds_screen_set_display *resp);
int CLIENT_REQ_vds_screen_set_display(grpc_t *grpc, PARAM_REQ_vds_screen_set_display *req);
int CLIENT_RESP_vds_screen_set_display(grpc_t *grpc, PARAM_RESP_vds_screen_set_display *resp);
int CLIENT_vds_screen_set_display(grpc_t *grpc, PARAM_REQ_vds_screen_set_display *req, PARAM_RESP_vds_screen_set_display *resp);
int USERDEF_RESP_vds_screen_set_display(grpc_t *grpc);

//--- screen_get_tour definition ----
/*
Get tour info.
*/

typedef struct{
	int screen;
} PARAM_REQ_vds_screen_get_tour;

typedef struct{
	GBOOL bTour;
	int secInterval;
} PARAM_RESP_vds_screen_get_tour;
int SERVER_vds_screen_get_tour(grpc_t *grpc);
int USERDEF_vds_screen_get_tour(grpc_t *grpc, PARAM_REQ_vds_screen_get_tour *req, PARAM_RESP_vds_screen_get_tour *resp);
int CLIENT_REQ_vds_screen_get_tour(grpc_t *grpc, PARAM_REQ_vds_screen_get_tour *req);
int CLIENT_RESP_vds_screen_get_tour(grpc_t *grpc, PARAM_RESP_vds_screen_get_tour *resp);
int CLIENT_vds_screen_get_tour(grpc_t *grpc, PARAM_REQ_vds_screen_get_tour *req, PARAM_RESP_vds_screen_get_tour *resp);
int USERDEF_RESP_vds_screen_get_tour(grpc_t *grpc);

//--- screen_set_tour definition ----
/*
Set tour
*/

typedef struct{
	int screen;
	struct{
		int bTour;
		int secInterval;
	} stTour;
} PARAM_REQ_vds_screen_set_tour;

typedef struct{
	int idle;
} PARAM_RESP_vds_screen_set_tour;
int SERVER_vds_screen_set_tour(grpc_t *grpc);
int USERDEF_vds_screen_set_tour(grpc_t *grpc, PARAM_REQ_vds_screen_set_tour *req, PARAM_RESP_vds_screen_set_tour *resp);
int CLIENT_REQ_vds_screen_set_tour(grpc_t *grpc, PARAM_REQ_vds_screen_set_tour *req);
int CLIENT_RESP_vds_screen_set_tour(grpc_t *grpc, PARAM_RESP_vds_screen_set_tour *resp);
int CLIENT_vds_screen_set_tour(grpc_t *grpc, PARAM_REQ_vds_screen_set_tour *req, PARAM_RESP_vds_screen_set_tour *resp);
int USERDEF_RESP_vds_screen_set_tour(grpc_t *grpc);

//--- screen_get_screen definition ----
/*
Get screen info.
*/

typedef struct{
	int idle;
} PARAM_REQ_vds_screen_get_screen;

typedef struct{
	int nBright;
	int nContrast;
	int nSaturation;
	struct{
		int nW;
		int nH;
	} stResolution;
	int stList_cnt;
	struct{
		int nW;
		int nH;
	} *stList;
} PARAM_RESP_vds_screen_get_screen;
int SERVER_vds_screen_get_screen(grpc_t *grpc);
int USERDEF_vds_screen_get_screen(grpc_t *grpc, PARAM_REQ_vds_screen_get_screen *req, PARAM_RESP_vds_screen_get_screen *resp);
int CLIENT_REQ_vds_screen_get_screen(grpc_t *grpc, PARAM_REQ_vds_screen_get_screen *req);
int CLIENT_RESP_vds_screen_get_screen(grpc_t *grpc, PARAM_RESP_vds_screen_get_screen *resp);
int CLIENT_vds_screen_get_screen(grpc_t *grpc, PARAM_REQ_vds_screen_get_screen *req, PARAM_RESP_vds_screen_get_screen *resp);
int USERDEF_RESP_vds_screen_get_screen(grpc_t *grpc);

//--- screen_set_screen definition ----
/*
Set screen info.
*/

typedef struct{
	int nBright;
	int nContrast;
	int nSaturation;
	struct{
		int nW;
		int nH;
	} stResolution;
} PARAM_REQ_vds_screen_set_screen;

typedef struct{
	int idle;
} PARAM_RESP_vds_screen_set_screen;
int SERVER_vds_screen_set_screen(grpc_t *grpc);
int USERDEF_vds_screen_set_screen(grpc_t *grpc, PARAM_REQ_vds_screen_set_screen *req, PARAM_RESP_vds_screen_set_screen *resp);
int CLIENT_REQ_vds_screen_set_screen(grpc_t *grpc, PARAM_REQ_vds_screen_set_screen *req);
int CLIENT_RESP_vds_screen_set_screen(grpc_t *grpc, PARAM_RESP_vds_screen_set_screen *resp);
int CLIENT_vds_screen_set_screen(grpc_t *grpc, PARAM_REQ_vds_screen_set_screen *req, PARAM_RESP_vds_screen_set_screen *resp);
int USERDEF_RESP_vds_screen_set_screen(grpc_t *grpc);

//--- vsource_add_vs definition ----
/*
Add a video source to screen.
*/

typedef struct{
	int screen;
	int nCh;
	struct{
		char *acGroup; //A
		int nYSTNO;
		char *acDevIP; //192.168.6.223
		int nPort;
		int nChannel;
		char *acID; //abc
		char *acPW; //123
		char *nIpcType; //IPC_TYPE_JV, IPC_TYPE_ONVIF,IPC_TYPE_JIEGAO,IPC_TYPE_HIK,IPC_TYPE_DAHUA,IPC_TYPE_JULONG,IPC_TYPE_NVSTCP
		char *acServiceAddr; //
	} stVs;
} PARAM_REQ_vds_vsource_add_vs;

typedef struct{
	int idle;
} PARAM_RESP_vds_vsource_add_vs;
int SERVER_vds_vsource_add_vs(grpc_t *grpc);
int USERDEF_vds_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_add_vs *req, PARAM_RESP_vds_vsource_add_vs *resp);
int CLIENT_REQ_vds_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_add_vs *req);
int CLIENT_RESP_vds_vsource_add_vs(grpc_t *grpc, PARAM_RESP_vds_vsource_add_vs *resp);
int CLIENT_vds_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_add_vs *req, PARAM_RESP_vds_vsource_add_vs *resp);
int USERDEF_RESP_vds_vsource_add_vs(grpc_t *grpc);

//--- vsource_delete_vs definition ----
/*
Delete a video source.
*/

typedef struct{
	int screen;
	int nCh;
} PARAM_REQ_vds_vsource_delete_vs;

typedef struct{
	int idle;
} PARAM_RESP_vds_vsource_delete_vs;
int SERVER_vds_vsource_delete_vs(grpc_t *grpc);
int USERDEF_vds_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_delete_vs *req, PARAM_RESP_vds_vsource_delete_vs *resp);
int CLIENT_REQ_vds_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_delete_vs *req);
int CLIENT_RESP_vds_vsource_delete_vs(grpc_t *grpc, PARAM_RESP_vds_vsource_delete_vs *resp);
int CLIENT_vds_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_delete_vs *req, PARAM_RESP_vds_vsource_delete_vs *resp);
int USERDEF_RESP_vds_vsource_delete_vs(grpc_t *grpc);

//--- vsource_modify_vs definition ----
/*
Modify video source.
*/

typedef struct{
	int screen;
	int nCh;
	struct{
		char *acGroup; //A
		int nYSTNO;
		char *acDevIP; //192.168.6.223
		int nPort;
		int nChannel;
		char *acID; //abc
		char *acPW; //123
		char *nIpcType; //IPC_TYPE_JV,IPC_TYPE_ONVIF,IPC_TYPE_JIEGAO,IPC_TYPE_HIK,IPC_TYPE_DAHUA,IPC_TYPE_JULONG,IPC_TYPE_NVSTCP
		char *acServiceAddr; //
	} stVs;
} PARAM_REQ_vds_vsource_modify_vs;

typedef struct{
	int idle;
} PARAM_RESP_vds_vsource_modify_vs;
int SERVER_vds_vsource_modify_vs(grpc_t *grpc);
int USERDEF_vds_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_modify_vs *req, PARAM_RESP_vds_vsource_modify_vs *resp);
int CLIENT_REQ_vds_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_modify_vs *req);
int CLIENT_RESP_vds_vsource_modify_vs(grpc_t *grpc, PARAM_RESP_vds_vsource_modify_vs *resp);
int CLIENT_vds_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_modify_vs *req, PARAM_RESP_vds_vsource_modify_vs *resp);
int USERDEF_RESP_vds_vsource_modify_vs(grpc_t *grpc);

//--- vsource_get_chn_status definition ----
/*
Get channle status.
*/

typedef struct{
	int screen;
	int nCh;
} PARAM_REQ_vds_vsource_get_chn_status;

typedef struct{
	int screen;
	int nCh;
	char *status; //no video,disconnect,connecting,connected,password error,connect timeout,server stop,connect break,decoder failed,decoder over range,over link count,IP conflict
} PARAM_RESP_vds_vsource_get_chn_status;
int SERVER_vds_vsource_get_chn_status(grpc_t *grpc);
int USERDEF_vds_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vds_vsource_get_chn_status *req, PARAM_RESP_vds_vsource_get_chn_status *resp);
int CLIENT_REQ_vds_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vds_vsource_get_chn_status *req);
int CLIENT_RESP_vds_vsource_get_chn_status(grpc_t *grpc, PARAM_RESP_vds_vsource_get_chn_status *resp);
int CLIENT_vds_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vds_vsource_get_chn_status *req, PARAM_RESP_vds_vsource_get_chn_status *resp);
int USERDEF_RESP_vds_vsource_get_chn_status(grpc_t *grpc);
#ifdef __cplusplus
}
#endif
#endif
