// This file is generated auto. Do not modify it anytime.
#ifndef _ipc_H_
#define _ipc_H_

#include "grpc.h"


#ifdef __cplusplus
extern "C" {
#endif

extern grpcMethod_t ipc_methodList[];

//--- account_get_users definition ----

typedef struct{
	int idle;
} PARAM_REQ_ipc_account_get_users;

typedef struct{
	int users_cnt;
	struct{
		char *name; //username
		char *level; //admin,operator,user,anonymous,extended
		char *description; //This is Adiministrator
	} *users;
} PARAM_RESP_ipc_account_get_users;
int SERVER_ipc_account_get_users(grpc_t *grpc);
int USERDEF_ipc_account_get_users(grpc_t *grpc, PARAM_REQ_ipc_account_get_users *req, PARAM_RESP_ipc_account_get_users *resp);
int CLIENT_REQ_ipc_account_get_users(grpc_t *grpc, PARAM_REQ_ipc_account_get_users *req);
int CLIENT_RESP_ipc_account_get_users(grpc_t *grpc, PARAM_RESP_ipc_account_get_users *resp);
int CLIENT_ipc_account_get_users(grpc_t *grpc, PARAM_REQ_ipc_account_get_users *req, PARAM_RESP_ipc_account_get_users *resp);
int USERDEF_RESP_ipc_account_get_users(grpc_t *grpc);

//--- account_add_user definition ----

typedef struct{
	char *name; //username
	char *passwd; //123456
	char *level; //admin,operator,user,anonymous,extended
	char *description; //This is Adiministrator
} PARAM_REQ_ipc_account_add_user;

typedef struct{
	int idle;
} PARAM_RESP_ipc_account_add_user;
int SERVER_ipc_account_add_user(grpc_t *grpc);
int USERDEF_ipc_account_add_user(grpc_t *grpc, PARAM_REQ_ipc_account_add_user *req, PARAM_RESP_ipc_account_add_user *resp);
int CLIENT_REQ_ipc_account_add_user(grpc_t *grpc, PARAM_REQ_ipc_account_add_user *req);
int CLIENT_RESP_ipc_account_add_user(grpc_t *grpc, PARAM_RESP_ipc_account_add_user *resp);
int CLIENT_ipc_account_add_user(grpc_t *grpc, PARAM_REQ_ipc_account_add_user *req, PARAM_RESP_ipc_account_add_user *resp);
int USERDEF_RESP_ipc_account_add_user(grpc_t *grpc);

//--- account_del_user definition ----

typedef struct{
	char *name; //username
} PARAM_REQ_ipc_account_del_user;

typedef struct{
	int idle;
} PARAM_RESP_ipc_account_del_user;
int SERVER_ipc_account_del_user(grpc_t *grpc);
int USERDEF_ipc_account_del_user(grpc_t *grpc, PARAM_REQ_ipc_account_del_user *req, PARAM_RESP_ipc_account_del_user *resp);
int CLIENT_REQ_ipc_account_del_user(grpc_t *grpc, PARAM_REQ_ipc_account_del_user *req);
int CLIENT_RESP_ipc_account_del_user(grpc_t *grpc, PARAM_RESP_ipc_account_del_user *resp);
int CLIENT_ipc_account_del_user(grpc_t *grpc, PARAM_REQ_ipc_account_del_user *req, PARAM_RESP_ipc_account_del_user *resp);
int USERDEF_RESP_ipc_account_del_user(grpc_t *grpc);

//--- account_modify_user definition ----

typedef struct{
	char *name; //username
	char *passwd; //123456
	char *level; //admin,operator,user,anonymous,extended
	char *description; //This is Adiministrator
} PARAM_REQ_ipc_account_modify_user;

typedef struct{
	int idle;
} PARAM_RESP_ipc_account_modify_user;
int SERVER_ipc_account_modify_user(grpc_t *grpc);
int USERDEF_ipc_account_modify_user(grpc_t *grpc, PARAM_REQ_ipc_account_modify_user *req, PARAM_RESP_ipc_account_modify_user *resp);
int CLIENT_REQ_ipc_account_modify_user(grpc_t *grpc, PARAM_REQ_ipc_account_modify_user *req);
int CLIENT_RESP_ipc_account_modify_user(grpc_t *grpc, PARAM_RESP_ipc_account_modify_user *resp);
int CLIENT_ipc_account_modify_user(grpc_t *grpc, PARAM_REQ_ipc_account_modify_user *req, PARAM_RESP_ipc_account_modify_user *resp);
int USERDEF_RESP_ipc_account_modify_user(grpc_t *grpc);

//--- alarmin_start definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_alarmin_start;

typedef struct{
	int idle;
} PARAM_RESP_ipc_alarmin_start;
int SERVER_ipc_alarmin_start(grpc_t *grpc);
int USERDEF_ipc_alarmin_start(grpc_t *grpc, PARAM_REQ_ipc_alarmin_start *req, PARAM_RESP_ipc_alarmin_start *resp);
int CLIENT_REQ_ipc_alarmin_start(grpc_t *grpc, PARAM_REQ_ipc_alarmin_start *req);
int CLIENT_RESP_ipc_alarmin_start(grpc_t *grpc, PARAM_RESP_ipc_alarmin_start *resp);
int CLIENT_ipc_alarmin_start(grpc_t *grpc, PARAM_REQ_ipc_alarmin_start *req, PARAM_RESP_ipc_alarmin_start *resp);
int USERDEF_RESP_ipc_alarmin_start(grpc_t *grpc);

//--- alarmin_stop definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_alarmin_stop;

typedef struct{
	int idle;
} PARAM_RESP_ipc_alarmin_stop;
int SERVER_ipc_alarmin_stop(grpc_t *grpc);
int USERDEF_ipc_alarmin_stop(grpc_t *grpc, PARAM_REQ_ipc_alarmin_stop *req, PARAM_RESP_ipc_alarmin_stop *resp);
int CLIENT_REQ_ipc_alarmin_stop(grpc_t *grpc, PARAM_REQ_ipc_alarmin_stop *req);
int CLIENT_RESP_ipc_alarmin_stop(grpc_t *grpc, PARAM_RESP_ipc_alarmin_stop *resp);
int CLIENT_ipc_alarmin_stop(grpc_t *grpc, PARAM_REQ_ipc_alarmin_stop *req, PARAM_RESP_ipc_alarmin_stop *resp);
int USERDEF_RESP_ipc_alarmin_stop(grpc_t *grpc);

//--- alarmin_get_param definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_alarmin_get_param;

typedef struct{
	GBOOL bEnable;
	GBOOL bNormallyClosed;
	GBOOL bEnableRecord;
	GBOOL bStarting;
	GBOOL bBuzzing;
	GBOOL bSendtoClient;
	GBOOL bSendEmail;
	int u8AlarmNum;
	int nDelay;
} PARAM_RESP_ipc_alarmin_get_param;
int SERVER_ipc_alarmin_get_param(grpc_t *grpc);
int USERDEF_ipc_alarmin_get_param(grpc_t *grpc, PARAM_REQ_ipc_alarmin_get_param *req, PARAM_RESP_ipc_alarmin_get_param *resp);
int CLIENT_REQ_ipc_alarmin_get_param(grpc_t *grpc, PARAM_REQ_ipc_alarmin_get_param *req);
int CLIENT_RESP_ipc_alarmin_get_param(grpc_t *grpc, PARAM_RESP_ipc_alarmin_get_param *resp);
int CLIENT_ipc_alarmin_get_param(grpc_t *grpc, PARAM_REQ_ipc_alarmin_get_param *req, PARAM_RESP_ipc_alarmin_get_param *resp);
int USERDEF_RESP_ipc_alarmin_get_param(grpc_t *grpc);

//--- alarmin_set_param definition ----

typedef struct{
	int channelid;
	GBOOL bEnable;
	GBOOL bNormallyClosed;
	GBOOL bEnableRecord;
	GBOOL bStarting;
	GBOOL bBuzzing;
	GBOOL bSendtoClient;
	GBOOL bSendEmail;
	int u8AlarmNum;
	int nDelay;
} PARAM_REQ_ipc_alarmin_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_alarmin_set_param;
int SERVER_ipc_alarmin_set_param(grpc_t *grpc);
int USERDEF_ipc_alarmin_set_param(grpc_t *grpc, PARAM_REQ_ipc_alarmin_set_param *req, PARAM_RESP_ipc_alarmin_set_param *resp);
int CLIENT_REQ_ipc_alarmin_set_param(grpc_t *grpc, PARAM_REQ_ipc_alarmin_set_param *req);
int CLIENT_RESP_ipc_alarmin_set_param(grpc_t *grpc, PARAM_RESP_ipc_alarmin_set_param *resp);
int CLIENT_ipc_alarmin_set_param(grpc_t *grpc, PARAM_REQ_ipc_alarmin_set_param *req, PARAM_RESP_ipc_alarmin_set_param *resp);
int USERDEF_RESP_ipc_alarmin_set_param(grpc_t *grpc);

//--- alarmin_b_onduty definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_alarmin_b_onduty;

typedef struct{
	GBOOL bOnduty;
} PARAM_RESP_ipc_alarmin_b_onduty;
int SERVER_ipc_alarmin_b_onduty(grpc_t *grpc);
int USERDEF_ipc_alarmin_b_onduty(grpc_t *grpc, PARAM_REQ_ipc_alarmin_b_onduty *req, PARAM_RESP_ipc_alarmin_b_onduty *resp);
int CLIENT_REQ_ipc_alarmin_b_onduty(grpc_t *grpc, PARAM_REQ_ipc_alarmin_b_onduty *req);
int CLIENT_RESP_ipc_alarmin_b_onduty(grpc_t *grpc, PARAM_RESP_ipc_alarmin_b_onduty *resp);
int CLIENT_ipc_alarmin_b_onduty(grpc_t *grpc, PARAM_REQ_ipc_alarmin_b_onduty *req, PARAM_RESP_ipc_alarmin_b_onduty *resp);
int USERDEF_RESP_ipc_alarmin_b_onduty(grpc_t *grpc);

//--- alarmin_b_alarming definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_alarmin_b_alarming;

typedef struct{
	GBOOL bAlarming;
} PARAM_RESP_ipc_alarmin_b_alarming;
int SERVER_ipc_alarmin_b_alarming(grpc_t *grpc);
int USERDEF_ipc_alarmin_b_alarming(grpc_t *grpc, PARAM_REQ_ipc_alarmin_b_alarming *req, PARAM_RESP_ipc_alarmin_b_alarming *resp);
int CLIENT_REQ_ipc_alarmin_b_alarming(grpc_t *grpc, PARAM_REQ_ipc_alarmin_b_alarming *req);
int CLIENT_RESP_ipc_alarmin_b_alarming(grpc_t *grpc, PARAM_RESP_ipc_alarmin_b_alarming *resp);
int CLIENT_ipc_alarmin_b_alarming(grpc_t *grpc, PARAM_REQ_ipc_alarmin_b_alarming *req, PARAM_RESP_ipc_alarmin_b_alarming *resp);
int USERDEF_RESP_ipc_alarmin_b_alarming(grpc_t *grpc);

//--- alarm_get_param definition ----

typedef struct{
	int idle;
} PARAM_REQ_ipc_alarm_get_param;

typedef struct{
	int delay;
	int port;
	char *sender; //lfx@jovision.com
	char *server; //lfx@jovision.com
	char *username; //lfx
	char *passwd; //123456
	int receiver_cnt;
	char **receiver; //qlc@jovision.com
} PARAM_RESP_ipc_alarm_get_param;
int SERVER_ipc_alarm_get_param(grpc_t *grpc);
int USERDEF_ipc_alarm_get_param(grpc_t *grpc, PARAM_REQ_ipc_alarm_get_param *req, PARAM_RESP_ipc_alarm_get_param *resp);
int CLIENT_REQ_ipc_alarm_get_param(grpc_t *grpc, PARAM_REQ_ipc_alarm_get_param *req);
int CLIENT_RESP_ipc_alarm_get_param(grpc_t *grpc, PARAM_RESP_ipc_alarm_get_param *resp);
int CLIENT_ipc_alarm_get_param(grpc_t *grpc, PARAM_REQ_ipc_alarm_get_param *req, PARAM_RESP_ipc_alarm_get_param *resp);
int USERDEF_RESP_ipc_alarm_get_param(grpc_t *grpc);

//--- alarm_set_param definition ----

typedef struct{
	int delay;
	int port;
	char *sender; //lfx@jovision.com
	char *server; //lfx@jovision.com
	char *username; //lfx
	char *passwd; //123456
	int receiver_cnt;
	char **receiver; //qlc@jovision.com
} PARAM_REQ_ipc_alarm_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_alarm_set_param;
int SERVER_ipc_alarm_set_param(grpc_t *grpc);
int USERDEF_ipc_alarm_set_param(grpc_t *grpc, PARAM_REQ_ipc_alarm_set_param *req, PARAM_RESP_ipc_alarm_set_param *resp);
int CLIENT_REQ_ipc_alarm_set_param(grpc_t *grpc, PARAM_REQ_ipc_alarm_set_param *req);
int CLIENT_RESP_ipc_alarm_set_param(grpc_t *grpc, PARAM_RESP_ipc_alarm_set_param *resp);
int CLIENT_ipc_alarm_set_param(grpc_t *grpc, PARAM_REQ_ipc_alarm_set_param *req, PARAM_RESP_ipc_alarm_set_param *resp);
int USERDEF_RESP_ipc_alarm_set_param(grpc_t *grpc);

//--- ai_get_param definition ----
/*
sampleRate : 8000,11025,16000,22050,24000,32000,44100,48000;
bitWidth : 8,16,32
*/

typedef struct{
	int channelid;
} PARAM_REQ_ipc_ai_get_param;

typedef struct{
	int sampleRate;
	int bitWidth;
	char *encType; //pcm,g711a,g711u,g726_16k,g726_24k,g726_32k,g726_40k,aac,adpcm
} PARAM_RESP_ipc_ai_get_param;
int SERVER_ipc_ai_get_param(grpc_t *grpc);
int USERDEF_ipc_ai_get_param(grpc_t *grpc, PARAM_REQ_ipc_ai_get_param *req, PARAM_RESP_ipc_ai_get_param *resp);
int CLIENT_REQ_ipc_ai_get_param(grpc_t *grpc, PARAM_REQ_ipc_ai_get_param *req);
int CLIENT_RESP_ipc_ai_get_param(grpc_t *grpc, PARAM_RESP_ipc_ai_get_param *resp);
int CLIENT_ipc_ai_get_param(grpc_t *grpc, PARAM_REQ_ipc_ai_get_param *req, PARAM_RESP_ipc_ai_get_param *resp);
int USERDEF_RESP_ipc_ai_get_param(grpc_t *grpc);

//--- ai_set_param definition ----
/*
sampleRate : 8000,11025,16000,22050,24000,32000,44100,48000;
bitWidth : 8,16,32
*/

typedef struct{
	int channelid;
	struct{
		int sampleRate;
		int bitWidth;
		char *encType; //pcm,g711a,g711u,g726_16k,g726_24k,g726_32k,g726_40k,aac,adpcm
	} audioAttr;
} PARAM_REQ_ipc_ai_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ai_set_param;
int SERVER_ipc_ai_set_param(grpc_t *grpc);
int USERDEF_ipc_ai_set_param(grpc_t *grpc, PARAM_REQ_ipc_ai_set_param *req, PARAM_RESP_ipc_ai_set_param *resp);
int CLIENT_REQ_ipc_ai_set_param(grpc_t *grpc, PARAM_REQ_ipc_ai_set_param *req);
int CLIENT_RESP_ipc_ai_set_param(grpc_t *grpc, PARAM_RESP_ipc_ai_set_param *resp);
int CLIENT_ipc_ai_set_param(grpc_t *grpc, PARAM_REQ_ipc_ai_set_param *req, PARAM_RESP_ipc_ai_set_param *resp);
int USERDEF_RESP_ipc_ai_set_param(grpc_t *grpc);

//--- ao_get_param definition ----
/*
sampleRate : 8000,11025,16000,22050,24000,32000,44100,48000;
bitWidth : 8,16,32
*/

typedef struct{
	int channelid;
} PARAM_REQ_ipc_ao_get_param;

typedef struct{
	int sampleRate;
	int bitWidth;
	char *encType; //pcm,g711a,g711u,g726_16k,g726_24k,g726_32k,g726_40k,aac,adpcm
} PARAM_RESP_ipc_ao_get_param;
int SERVER_ipc_ao_get_param(grpc_t *grpc);
int USERDEF_ipc_ao_get_param(grpc_t *grpc, PARAM_REQ_ipc_ao_get_param *req, PARAM_RESP_ipc_ao_get_param *resp);
int CLIENT_REQ_ipc_ao_get_param(grpc_t *grpc, PARAM_REQ_ipc_ao_get_param *req);
int CLIENT_RESP_ipc_ao_get_param(grpc_t *grpc, PARAM_RESP_ipc_ao_get_param *resp);
int CLIENT_ipc_ao_get_param(grpc_t *grpc, PARAM_REQ_ipc_ao_get_param *req, PARAM_RESP_ipc_ao_get_param *resp);
int USERDEF_RESP_ipc_ao_get_param(grpc_t *grpc);

//--- ao_set_param definition ----
/*
sampleRate : 8000,11025,16000,22050,24000,32000,44100,48000;
bitWidth : 8,16,32
*/

typedef struct{
	int channelid;
	struct{
		int sampleRate;
		int bitWidth;
		char *encType; //pcm,g711a,g711u,g726_16k,g726_24k,g726_32k,g726_40k,aac,adpcm
	} audioAttr;
} PARAM_REQ_ipc_ao_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ao_set_param;
int SERVER_ipc_ao_set_param(grpc_t *grpc);
int USERDEF_ipc_ao_set_param(grpc_t *grpc, PARAM_REQ_ipc_ao_set_param *req, PARAM_RESP_ipc_ao_set_param *resp);
int CLIENT_REQ_ipc_ao_set_param(grpc_t *grpc, PARAM_REQ_ipc_ao_set_param *req);
int CLIENT_RESP_ipc_ao_set_param(grpc_t *grpc, PARAM_RESP_ipc_ao_set_param *resp);
int CLIENT_ipc_ao_set_param(grpc_t *grpc, PARAM_REQ_ipc_ao_set_param *req, PARAM_RESP_ipc_ao_set_param *resp);
int USERDEF_RESP_ipc_ao_set_param(grpc_t *grpc);

//--- connection_get_list definition ----

typedef struct{
	char *conType; //all,jovision,rtsp,gb28181,psia,other
} PARAM_REQ_ipc_connection_get_list;

typedef struct{
	int connectionList_cnt;
	struct{
		char *conType; //jovision
		int key;
		char *addr; //192.168.7.160
		char *user; //admin
	} *connectionList;
} PARAM_RESP_ipc_connection_get_list;
int SERVER_ipc_connection_get_list(grpc_t *grpc);
int USERDEF_ipc_connection_get_list(grpc_t *grpc, PARAM_REQ_ipc_connection_get_list *req, PARAM_RESP_ipc_connection_get_list *resp);
int CLIENT_REQ_ipc_connection_get_list(grpc_t *grpc, PARAM_REQ_ipc_connection_get_list *req);
int CLIENT_RESP_ipc_connection_get_list(grpc_t *grpc, PARAM_RESP_ipc_connection_get_list *resp);
int CLIENT_ipc_connection_get_list(grpc_t *grpc, PARAM_REQ_ipc_connection_get_list *req, PARAM_RESP_ipc_connection_get_list *resp);
int USERDEF_RESP_ipc_connection_get_list(grpc_t *grpc);

//--- connection_breakoff definition ----

typedef struct{
	int connectionList_cnt;
	struct{
		char *conType; //jovision
		int key;
	} *connectionList;
} PARAM_REQ_ipc_connection_breakoff;

typedef struct{
	int idle;
} PARAM_RESP_ipc_connection_breakoff;
int SERVER_ipc_connection_breakoff(grpc_t *grpc);
int USERDEF_ipc_connection_breakoff(grpc_t *grpc, PARAM_REQ_ipc_connection_breakoff *req, PARAM_RESP_ipc_connection_breakoff *resp);
int CLIENT_REQ_ipc_connection_breakoff(grpc_t *grpc, PARAM_REQ_ipc_connection_breakoff *req);
int CLIENT_RESP_ipc_connection_breakoff(grpc_t *grpc, PARAM_RESP_ipc_connection_breakoff *resp);
int CLIENT_ipc_connection_breakoff(grpc_t *grpc, PARAM_REQ_ipc_connection_breakoff *req, PARAM_RESP_ipc_connection_breakoff *resp);
int USERDEF_RESP_ipc_connection_breakoff(grpc_t *grpc);

//--- dev_get_hwinfo definition ----

typedef struct{
	int idle;
} PARAM_REQ_ipc_dev_get_hwinfo;

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
} PARAM_RESP_ipc_dev_get_hwinfo;
int SERVER_ipc_dev_get_hwinfo(grpc_t *grpc);
int USERDEF_ipc_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_ipc_dev_get_hwinfo *req, PARAM_RESP_ipc_dev_get_hwinfo *resp);
int CLIENT_REQ_ipc_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_ipc_dev_get_hwinfo *req);
int CLIENT_RESP_ipc_dev_get_hwinfo(grpc_t *grpc, PARAM_RESP_ipc_dev_get_hwinfo *resp);
int CLIENT_ipc_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_ipc_dev_get_hwinfo *req, PARAM_RESP_ipc_dev_get_hwinfo *resp);
int USERDEF_RESP_ipc_dev_get_hwinfo(grpc_t *grpc);

//--- dev_get_info definition ----

typedef struct{
	int idle;
} PARAM_REQ_ipc_dev_get_info;

typedef struct{
	GBOOL bDiscoverable;
	char *hostname; //HD IPC
	char *name; //HD IPC
	char *rebootDay; //never,everyday,everysunday,everymonday,everytuesday,everywednesday,everythursday,everyfriday,everysaturday
	int rebootHour;
} PARAM_RESP_ipc_dev_get_info;
int SERVER_ipc_dev_get_info(grpc_t *grpc);
int USERDEF_ipc_dev_get_info(grpc_t *grpc, PARAM_REQ_ipc_dev_get_info *req, PARAM_RESP_ipc_dev_get_info *resp);
int CLIENT_REQ_ipc_dev_get_info(grpc_t *grpc, PARAM_REQ_ipc_dev_get_info *req);
int CLIENT_RESP_ipc_dev_get_info(grpc_t *grpc, PARAM_RESP_ipc_dev_get_info *resp);
int CLIENT_ipc_dev_get_info(grpc_t *grpc, PARAM_REQ_ipc_dev_get_info *req, PARAM_RESP_ipc_dev_get_info *resp);
int USERDEF_RESP_ipc_dev_get_info(grpc_t *grpc);

//--- dev_set_info definition ----

typedef struct{
	GBOOL bDiscoverable;
	char *hostname; //HD IPC
	char *name; //HD IPC
	char *rebootDay; //never,everyday,everysunday,everymonday,everytuesday,everywednesday,everythursday,everyfriday,everysaturday
	int rebootHour;
} PARAM_REQ_ipc_dev_set_info;

typedef struct{
	int idle;
} PARAM_RESP_ipc_dev_set_info;
int SERVER_ipc_dev_set_info(grpc_t *grpc);
int USERDEF_ipc_dev_set_info(grpc_t *grpc, PARAM_REQ_ipc_dev_set_info *req, PARAM_RESP_ipc_dev_set_info *resp);
int CLIENT_REQ_ipc_dev_set_info(grpc_t *grpc, PARAM_REQ_ipc_dev_set_info *req);
int CLIENT_RESP_ipc_dev_set_info(grpc_t *grpc, PARAM_RESP_ipc_dev_set_info *resp);
int CLIENT_ipc_dev_set_info(grpc_t *grpc, PARAM_REQ_ipc_dev_set_info *req, PARAM_RESP_ipc_dev_set_info *resp);
int USERDEF_RESP_ipc_dev_set_info(grpc_t *grpc);

//--- dev_stime definition ----
/*
Param tmsec means the seconds elapsed since 1970.
*/

typedef struct{
	int tmsec;
	char *tz; //8.5
} PARAM_REQ_ipc_dev_stime;

typedef struct{
	int idle;
} PARAM_RESP_ipc_dev_stime;
int SERVER_ipc_dev_stime(grpc_t *grpc);
int USERDEF_ipc_dev_stime(grpc_t *grpc, PARAM_REQ_ipc_dev_stime *req, PARAM_RESP_ipc_dev_stime *resp);
int CLIENT_REQ_ipc_dev_stime(grpc_t *grpc, PARAM_REQ_ipc_dev_stime *req);
int CLIENT_RESP_ipc_dev_stime(grpc_t *grpc, PARAM_RESP_ipc_dev_stime *resp);
int CLIENT_ipc_dev_stime(grpc_t *grpc, PARAM_REQ_ipc_dev_stime *req, PARAM_RESP_ipc_dev_stime *resp);
int USERDEF_RESP_ipc_dev_stime(grpc_t *grpc);

//--- dev_gtime definition ----
/*
Param tmsec means the seconds elapsed since 1970.
*/

typedef struct{
	int idle;
} PARAM_REQ_ipc_dev_gtime;

typedef struct{
	int tmsec;
	char *tz; //8.5
} PARAM_RESP_ipc_dev_gtime;
int SERVER_ipc_dev_gtime(grpc_t *grpc);
int USERDEF_ipc_dev_gtime(grpc_t *grpc, PARAM_REQ_ipc_dev_gtime *req, PARAM_RESP_ipc_dev_gtime *resp);
int CLIENT_REQ_ipc_dev_gtime(grpc_t *grpc, PARAM_REQ_ipc_dev_gtime *req);
int CLIENT_RESP_ipc_dev_gtime(grpc_t *grpc, PARAM_RESP_ipc_dev_gtime *resp);
int CLIENT_ipc_dev_gtime(grpc_t *grpc, PARAM_REQ_ipc_dev_gtime *req, PARAM_RESP_ipc_dev_gtime *resp);
int USERDEF_RESP_ipc_dev_gtime(grpc_t *grpc);

//--- dev_ntp_set definition ----

typedef struct{
	GBOOL bEnableNtp;
	int sntpInterval;
	int servers_cnt;
	char **servers; //ntp.fudan.edu.cn
} PARAM_REQ_ipc_dev_ntp_set;

typedef struct{
	int idle;
} PARAM_RESP_ipc_dev_ntp_set;
int SERVER_ipc_dev_ntp_set(grpc_t *grpc);
int USERDEF_ipc_dev_ntp_set(grpc_t *grpc, PARAM_REQ_ipc_dev_ntp_set *req, PARAM_RESP_ipc_dev_ntp_set *resp);
int CLIENT_REQ_ipc_dev_ntp_set(grpc_t *grpc, PARAM_REQ_ipc_dev_ntp_set *req);
int CLIENT_RESP_ipc_dev_ntp_set(grpc_t *grpc, PARAM_RESP_ipc_dev_ntp_set *resp);
int CLIENT_ipc_dev_ntp_set(grpc_t *grpc, PARAM_REQ_ipc_dev_ntp_set *req, PARAM_RESP_ipc_dev_ntp_set *resp);
int USERDEF_RESP_ipc_dev_ntp_set(grpc_t *grpc);

//--- dev_ntp_get definition ----

typedef struct{
	int idle;
} PARAM_REQ_ipc_dev_ntp_get;

typedef struct{
	GBOOL bEnableNtp;
	int sntpInterval;
	int servers_cnt;
	char **servers; //ntp.fudan.edu.cn
} PARAM_RESP_ipc_dev_ntp_get;
int SERVER_ipc_dev_ntp_get(grpc_t *grpc);
int USERDEF_ipc_dev_ntp_get(grpc_t *grpc, PARAM_REQ_ipc_dev_ntp_get *req, PARAM_RESP_ipc_dev_ntp_get *resp);
int CLIENT_REQ_ipc_dev_ntp_get(grpc_t *grpc, PARAM_REQ_ipc_dev_ntp_get *req);
int CLIENT_RESP_ipc_dev_ntp_get(grpc_t *grpc, PARAM_RESP_ipc_dev_ntp_get *resp);
int CLIENT_ipc_dev_ntp_get(grpc_t *grpc, PARAM_REQ_ipc_dev_ntp_get *req, PARAM_RESP_ipc_dev_ntp_get *resp);
int USERDEF_RESP_ipc_dev_ntp_get(grpc_t *grpc);

//--- dev_reboot definition ----

typedef struct{
	int delaymSec;
} PARAM_REQ_ipc_dev_reboot;

typedef struct{
	int idle;
} PARAM_RESP_ipc_dev_reboot;
int SERVER_ipc_dev_reboot(grpc_t *grpc);
int USERDEF_ipc_dev_reboot(grpc_t *grpc, PARAM_REQ_ipc_dev_reboot *req, PARAM_RESP_ipc_dev_reboot *resp);
int CLIENT_REQ_ipc_dev_reboot(grpc_t *grpc, PARAM_REQ_ipc_dev_reboot *req);
int CLIENT_RESP_ipc_dev_reboot(grpc_t *grpc, PARAM_RESP_ipc_dev_reboot *resp);
int CLIENT_ipc_dev_reboot(grpc_t *grpc, PARAM_REQ_ipc_dev_reboot *req, PARAM_RESP_ipc_dev_reboot *resp);
int USERDEF_RESP_ipc_dev_reboot(grpc_t *grpc);

//--- dev_factory_default definition ----

typedef struct{
	GBOOL bHard;
} PARAM_REQ_ipc_dev_factory_default;

typedef struct{
	int idle;
} PARAM_RESP_ipc_dev_factory_default;
int SERVER_ipc_dev_factory_default(grpc_t *grpc);
int USERDEF_ipc_dev_factory_default(grpc_t *grpc, PARAM_REQ_ipc_dev_factory_default *req, PARAM_RESP_ipc_dev_factory_default *resp);
int CLIENT_REQ_ipc_dev_factory_default(grpc_t *grpc, PARAM_REQ_ipc_dev_factory_default *req);
int CLIENT_RESP_ipc_dev_factory_default(grpc_t *grpc, PARAM_RESP_ipc_dev_factory_default *resp);
int CLIENT_ipc_dev_factory_default(grpc_t *grpc, PARAM_REQ_ipc_dev_factory_default *req, PARAM_RESP_ipc_dev_factory_default *resp);
int USERDEF_RESP_ipc_dev_factory_default(grpc_t *grpc);

//--- ifconfig_get_inet definition ----
/*
The value of quality ranges from 0 to 100.
*/

typedef struct{
	int idle;
} PARAM_REQ_ipc_ifconfig_get_inet;

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
} PARAM_RESP_ipc_ifconfig_get_inet;
int SERVER_ipc_ifconfig_get_inet(grpc_t *grpc);
int USERDEF_ipc_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_get_inet *req, PARAM_RESP_ipc_ifconfig_get_inet *resp);
int CLIENT_REQ_ipc_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_get_inet *req);
int CLIENT_RESP_ipc_ifconfig_get_inet(grpc_t *grpc, PARAM_RESP_ipc_ifconfig_get_inet *resp);
int CLIENT_ipc_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_get_inet *req, PARAM_RESP_ipc_ifconfig_get_inet *resp);
int USERDEF_RESP_ipc_ifconfig_get_inet(grpc_t *grpc);

//--- ifconfig_eth_set definition ----

typedef struct{
	char *name; //eth0
	GBOOL bDHCP;
	char *addr; //192.168.7.160
	char *mask; //255.255.255.0
	char *gateway; //192.168.7.1
	char *dns; //202.102.128.68
} PARAM_REQ_ipc_ifconfig_eth_set;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ifconfig_eth_set;
int SERVER_ipc_ifconfig_eth_set(grpc_t *grpc);
int USERDEF_ipc_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_eth_set *req, PARAM_RESP_ipc_ifconfig_eth_set *resp);
int CLIENT_REQ_ipc_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_eth_set *req);
int CLIENT_RESP_ipc_ifconfig_eth_set(grpc_t *grpc, PARAM_RESP_ipc_ifconfig_eth_set *resp);
int CLIENT_ipc_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_eth_set *req, PARAM_RESP_ipc_ifconfig_eth_set *resp);
int USERDEF_RESP_ipc_ifconfig_eth_set(grpc_t *grpc);

//--- ifconfig_ppp_set definition ----

typedef struct{
	char *name; //adsl
	char *username; //qlc
	char *passwd; //123456
} PARAM_REQ_ipc_ifconfig_ppp_set;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ifconfig_ppp_set;
int SERVER_ipc_ifconfig_ppp_set(grpc_t *grpc);
int USERDEF_ipc_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_ppp_set *req, PARAM_RESP_ipc_ifconfig_ppp_set *resp);
int CLIENT_REQ_ipc_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_ppp_set *req);
int CLIENT_RESP_ipc_ifconfig_ppp_set(grpc_t *grpc, PARAM_RESP_ipc_ifconfig_ppp_set *resp);
int CLIENT_ipc_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_ppp_set *req, PARAM_RESP_ipc_ifconfig_ppp_set *resp);
int USERDEF_RESP_ipc_ifconfig_ppp_set(grpc_t *grpc);

//--- ifconfig_wifi_connect definition ----

typedef struct{
	char *name; //hehe
	char *passwd; //hehe12345
} PARAM_REQ_ipc_ifconfig_wifi_connect;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ifconfig_wifi_connect;
int SERVER_ipc_ifconfig_wifi_connect(grpc_t *grpc);
int USERDEF_ipc_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_wifi_connect *req, PARAM_RESP_ipc_ifconfig_wifi_connect *resp);
int CLIENT_REQ_ipc_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_wifi_connect *req);
int CLIENT_RESP_ipc_ifconfig_wifi_connect(grpc_t *grpc, PARAM_RESP_ipc_ifconfig_wifi_connect *resp);
int CLIENT_ipc_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_wifi_connect *req, PARAM_RESP_ipc_ifconfig_wifi_connect *resp);
int USERDEF_RESP_ipc_ifconfig_wifi_connect(grpc_t *grpc);

//--- ifconfig_wifi_list_ap definition ----
/*
The value of quality ranges from 0 to 100.
*/

typedef struct{
	GBOOL bResearch;
} PARAM_REQ_ipc_ifconfig_wifi_list_ap;

typedef struct{
	int apList_cnt;
	struct{
		char *name; //hehe
		char *passwd; //hehe12345
		int quality;
		int keystat;
		char *iestat; //wpa,wpa2,wep,plain
	} *apList;
} PARAM_RESP_ipc_ifconfig_wifi_list_ap;
int SERVER_ipc_ifconfig_wifi_list_ap(grpc_t *grpc);
int USERDEF_ipc_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_wifi_list_ap *req, PARAM_RESP_ipc_ifconfig_wifi_list_ap *resp);
int CLIENT_REQ_ipc_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_wifi_list_ap *req);
int CLIENT_RESP_ipc_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_RESP_ipc_ifconfig_wifi_list_ap *resp);
int CLIENT_ipc_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_ipc_ifconfig_wifi_list_ap *req, PARAM_RESP_ipc_ifconfig_wifi_list_ap *resp);
int USERDEF_RESP_ipc_ifconfig_wifi_list_ap(grpc_t *grpc);

//--- image_get_param definition ----
/*
The value of contrast, brightness, saturation and sharpen ranges from 0 to 255.
*/

typedef struct{
	int idle;
} PARAM_REQ_ipc_image_get_param;

typedef struct{
	int contrast;
	int brightness;
	int saturation;
	int sharpen;
	int exposureMax;
	int exposureMin;
	char *scene; //indoor,outdoor,default,soft
	char *daynightMode; //auto,alwaysDay,alwaysNight,timer
	struct{
		int hour;
		int minute;
	} dayStart;
	struct{
		int hour;
		int minute;
	} dayEnd;
	GBOOL bEnableAWB;
	GBOOL bEnableMI;
	GBOOL bEnableST;
	GBOOL bEnableNoC;
	GBOOL bEnableWDynamic;
	GBOOL bAutoLowFrameEn;
	GBOOL bNightOptimization;
} PARAM_RESP_ipc_image_get_param;
int SERVER_ipc_image_get_param(grpc_t *grpc);
int USERDEF_ipc_image_get_param(grpc_t *grpc, PARAM_REQ_ipc_image_get_param *req, PARAM_RESP_ipc_image_get_param *resp);
int CLIENT_REQ_ipc_image_get_param(grpc_t *grpc, PARAM_REQ_ipc_image_get_param *req);
int CLIENT_RESP_ipc_image_get_param(grpc_t *grpc, PARAM_RESP_ipc_image_get_param *resp);
int CLIENT_ipc_image_get_param(grpc_t *grpc, PARAM_REQ_ipc_image_get_param *req, PARAM_RESP_ipc_image_get_param *resp);
int USERDEF_RESP_ipc_image_get_param(grpc_t *grpc);

//--- image_set_param definition ----
/*
The value of contrast, brightness, saturation and sharpen ranges from 0 to 255.
*/

typedef struct{
	int contrast;
	int brightness;
	int saturation;
	int sharpen;
	int exposureMax;
	int exposureMin;
	char *scene; //indoor,outdoor,default,soft
	char *daynightMode; //auto,alwaysDay,alwaysNight,timer
	struct{
		int hour;
		int minute;
	} dayStart;
	struct{
		int hour;
		int minute;
	} dayEnd;
	GBOOL bEnableAWB;
	GBOOL bEnableMI;
	GBOOL bEnableST;
	GBOOL bEnableNoC;
	GBOOL bEnableWDynamic;
	GBOOL bAutoLowFrameEn;
	GBOOL bNightOptimization;
} PARAM_REQ_ipc_image_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_image_set_param;
int SERVER_ipc_image_set_param(grpc_t *grpc);
int USERDEF_ipc_image_set_param(grpc_t *grpc, PARAM_REQ_ipc_image_set_param *req, PARAM_RESP_ipc_image_set_param *resp);
int CLIENT_REQ_ipc_image_set_param(grpc_t *grpc, PARAM_REQ_ipc_image_set_param *req);
int CLIENT_RESP_ipc_image_set_param(grpc_t *grpc, PARAM_RESP_ipc_image_set_param *resp);
int CLIENT_ipc_image_set_param(grpc_t *grpc, PARAM_REQ_ipc_image_set_param *req, PARAM_RESP_ipc_image_set_param *resp);
int USERDEF_RESP_ipc_image_set_param(grpc_t *grpc);

//--- log_get definition ----
/*
type: enum{SYSTEM,CONFIG,DATA_MANGE,ALARM,RECORD,USER,FILE_OPER,ALL}.
nSub: affiliated log counts
*/

typedef struct{
	char *date; //2014-11-18
	char *type; //SYSTEM
} PARAM_REQ_ipc_log_get;

typedef struct{
	int log_items_cnt;
	struct{
		char *time; //2014-11-18 08:43:57
		char *strlog; //the happened events
		GBOOL bNetuser;
		GBOOL bmain;
		int nSub;
		char *type; //SYSTEM
		char *username; //system
	} *log_items;
} PARAM_RESP_ipc_log_get;
int SERVER_ipc_log_get(grpc_t *grpc);
int USERDEF_ipc_log_get(grpc_t *grpc, PARAM_REQ_ipc_log_get *req, PARAM_RESP_ipc_log_get *resp);
int CLIENT_REQ_ipc_log_get(grpc_t *grpc, PARAM_REQ_ipc_log_get *req);
int CLIENT_RESP_ipc_log_get(grpc_t *grpc, PARAM_RESP_ipc_log_get *resp);
int CLIENT_ipc_log_get(grpc_t *grpc, PARAM_REQ_ipc_log_get *req, PARAM_RESP_ipc_log_get *resp);
int USERDEF_RESP_ipc_log_get(grpc_t *grpc);

//--- log_clear definition ----
/*
type: enum{SYSTEM,CONFIG,DATA_MANGE,ALARM,RECORD,USER,FILE_OPER,ALL}.
*/

typedef struct{
	int idle;
} PARAM_REQ_ipc_log_clear;

typedef struct{
	int idle;
} PARAM_RESP_ipc_log_clear;
int SERVER_ipc_log_clear(grpc_t *grpc);
int USERDEF_ipc_log_clear(grpc_t *grpc, PARAM_REQ_ipc_log_clear *req, PARAM_RESP_ipc_log_clear *resp);
int CLIENT_REQ_ipc_log_clear(grpc_t *grpc, PARAM_REQ_ipc_log_clear *req);
int CLIENT_RESP_ipc_log_clear(grpc_t *grpc, PARAM_RESP_ipc_log_clear *resp);
int CLIENT_ipc_log_clear(grpc_t *grpc, PARAM_REQ_ipc_log_clear *req, PARAM_RESP_ipc_log_clear *resp);
int USERDEF_RESP_ipc_log_clear(grpc_t *grpc);

//--- mdetect_set_param definition ----
/*
The max number of rects is 4, 0 means full screen motion detect.
Param nSensitivity ranges from 0 to 255.
Param x,y,w,h is measured in pixels.
*/

typedef struct{
	int channelid;
	struct{
		GBOOL bEnable;
		GBOOL bEnableRecord;
		int sensitivity;
		int delay;
		GBOOL bOutClient;
		GBOOL bOutEmail;
		int rects_cnt;
		struct{
			int x;
			int y;
			int w;
			int h;
		} *rects;
	} md;
} PARAM_REQ_ipc_mdetect_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_mdetect_set_param;
int SERVER_ipc_mdetect_set_param(grpc_t *grpc);
int USERDEF_ipc_mdetect_set_param(grpc_t *grpc, PARAM_REQ_ipc_mdetect_set_param *req, PARAM_RESP_ipc_mdetect_set_param *resp);
int CLIENT_REQ_ipc_mdetect_set_param(grpc_t *grpc, PARAM_REQ_ipc_mdetect_set_param *req);
int CLIENT_RESP_ipc_mdetect_set_param(grpc_t *grpc, PARAM_RESP_ipc_mdetect_set_param *resp);
int CLIENT_ipc_mdetect_set_param(grpc_t *grpc, PARAM_REQ_ipc_mdetect_set_param *req, PARAM_RESP_ipc_mdetect_set_param *resp);
int USERDEF_RESP_ipc_mdetect_set_param(grpc_t *grpc);

//--- mdetect_get_param definition ----
/*
The max number of rects is 4, 0 means full screen motion detect.
Param nSensitivity ranges from 0 to 255.
Param x,y,w,h is measured in pixels.
*/

typedef struct{
	int channelid;
} PARAM_REQ_ipc_mdetect_get_param;

typedef struct{
	GBOOL bEnable;
	GBOOL bEnableRecord;
	int sensitivity;
	int delay;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	int rects_cnt;
	struct{
		int x;
		int y;
		int w;
		int h;
	} *rects;
} PARAM_RESP_ipc_mdetect_get_param;
int SERVER_ipc_mdetect_get_param(grpc_t *grpc);
int USERDEF_ipc_mdetect_get_param(grpc_t *grpc, PARAM_REQ_ipc_mdetect_get_param *req, PARAM_RESP_ipc_mdetect_get_param *resp);
int CLIENT_REQ_ipc_mdetect_get_param(grpc_t *grpc, PARAM_REQ_ipc_mdetect_get_param *req);
int CLIENT_RESP_ipc_mdetect_get_param(grpc_t *grpc, PARAM_RESP_ipc_mdetect_get_param *resp);
int CLIENT_ipc_mdetect_get_param(grpc_t *grpc, PARAM_REQ_ipc_mdetect_get_param *req, PARAM_RESP_ipc_mdetect_get_param *resp);
int USERDEF_RESP_ipc_mdetect_get_param(grpc_t *grpc);

//--- mdetect_balarming definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_mdetect_balarming;

typedef struct{
	GBOOL bMdetectAlarming;
} PARAM_RESP_ipc_mdetect_balarming;
int SERVER_ipc_mdetect_balarming(grpc_t *grpc);
int USERDEF_ipc_mdetect_balarming(grpc_t *grpc, PARAM_REQ_ipc_mdetect_balarming *req, PARAM_RESP_ipc_mdetect_balarming *resp);
int CLIENT_REQ_ipc_mdetect_balarming(grpc_t *grpc, PARAM_REQ_ipc_mdetect_balarming *req);
int CLIENT_RESP_ipc_mdetect_balarming(grpc_t *grpc, PARAM_RESP_ipc_mdetect_balarming *resp);
int CLIENT_ipc_mdetect_balarming(grpc_t *grpc, PARAM_REQ_ipc_mdetect_balarming *req, PARAM_RESP_ipc_mdetect_balarming *resp);
int USERDEF_RESP_ipc_mdetect_balarming(grpc_t *grpc);

//--- chnosd_get_param definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_chnosd_get_param;

typedef struct{
	GBOOL bShowOSD;
	char *timeFormat; //YYYY-MM-DD hh:mm:ss
	char *position; //left_top,left_bottom,right_top,right_bottom
	char *timePos; //left_top,left_bottom,right_top,right_bottom
	char *channelName; //HD IPC
	GBOOL bOsdInvColEn;
	GBOOL bLargeOSD;
} PARAM_RESP_ipc_chnosd_get_param;
int SERVER_ipc_chnosd_get_param(grpc_t *grpc);
int USERDEF_ipc_chnosd_get_param(grpc_t *grpc, PARAM_REQ_ipc_chnosd_get_param *req, PARAM_RESP_ipc_chnosd_get_param *resp);
int CLIENT_REQ_ipc_chnosd_get_param(grpc_t *grpc, PARAM_REQ_ipc_chnosd_get_param *req);
int CLIENT_RESP_ipc_chnosd_get_param(grpc_t *grpc, PARAM_RESP_ipc_chnosd_get_param *resp);
int CLIENT_ipc_chnosd_get_param(grpc_t *grpc, PARAM_REQ_ipc_chnosd_get_param *req, PARAM_RESP_ipc_chnosd_get_param *resp);
int USERDEF_RESP_ipc_chnosd_get_param(grpc_t *grpc);

//--- chnosd_set_param definition ----

typedef struct{
	int channelid;
	struct{
		GBOOL bShowOSD;
		char *timeFormat; //YYYY-MM-DD hh:mm:ss
		char *position; //left_top,left_bottom,right_top,right_bottom
		char *timePos; //left_top,left_bottom,right_top,right_bottom
		char *channelName; //HD IPC
		GBOOL bOsdInvColEn;
		GBOOL bLargeOSD;
	} attr;
} PARAM_REQ_ipc_chnosd_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_chnosd_set_param;
int SERVER_ipc_chnosd_set_param(grpc_t *grpc);
int USERDEF_ipc_chnosd_set_param(grpc_t *grpc, PARAM_REQ_ipc_chnosd_set_param *req, PARAM_RESP_ipc_chnosd_set_param *resp);
int CLIENT_REQ_ipc_chnosd_set_param(grpc_t *grpc, PARAM_REQ_ipc_chnosd_set_param *req);
int CLIENT_RESP_ipc_chnosd_set_param(grpc_t *grpc, PARAM_RESP_ipc_chnosd_set_param *resp);
int CLIENT_ipc_chnosd_set_param(grpc_t *grpc, PARAM_REQ_ipc_chnosd_set_param *req, PARAM_RESP_ipc_chnosd_set_param *resp);
int USERDEF_RESP_ipc_chnosd_set_param(grpc_t *grpc);

//--- privacy_get_param definition ----
/*
The max number of rects is 4.
Param x,y,w,h is measured in pixels.
*/

typedef struct{
	int channelid;
} PARAM_REQ_ipc_privacy_get_param;

typedef struct{
	GBOOL bEnable;
	int rects_cnt;
	struct{
		int x;
		int y;
		int w;
		int h;
	} *rects;
} PARAM_RESP_ipc_privacy_get_param;
int SERVER_ipc_privacy_get_param(grpc_t *grpc);
int USERDEF_ipc_privacy_get_param(grpc_t *grpc, PARAM_REQ_ipc_privacy_get_param *req, PARAM_RESP_ipc_privacy_get_param *resp);
int CLIENT_REQ_ipc_privacy_get_param(grpc_t *grpc, PARAM_REQ_ipc_privacy_get_param *req);
int CLIENT_RESP_ipc_privacy_get_param(grpc_t *grpc, PARAM_RESP_ipc_privacy_get_param *resp);
int CLIENT_ipc_privacy_get_param(grpc_t *grpc, PARAM_REQ_ipc_privacy_get_param *req, PARAM_RESP_ipc_privacy_get_param *resp);
int USERDEF_RESP_ipc_privacy_get_param(grpc_t *grpc);

//--- privacy_set_param definition ----
/*
The max number of rects is 4.
Param x,y,w,h is measured in pixels.
*/

typedef struct{
	int channelid;
	struct{
		GBOOL bEnable;
		int rects_cnt;
		struct{
			int x;
			int y;
			int w;
			int h;
		} *rects;
	} region;
} PARAM_REQ_ipc_privacy_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_privacy_set_param;
int SERVER_ipc_privacy_set_param(grpc_t *grpc);
int USERDEF_ipc_privacy_set_param(grpc_t *grpc, PARAM_REQ_ipc_privacy_set_param *req, PARAM_RESP_ipc_privacy_set_param *resp);
int CLIENT_REQ_ipc_privacy_set_param(grpc_t *grpc, PARAM_REQ_ipc_privacy_set_param *req);
int CLIENT_RESP_ipc_privacy_set_param(grpc_t *grpc, PARAM_RESP_ipc_privacy_set_param *resp);
int CLIENT_ipc_privacy_set_param(grpc_t *grpc, PARAM_REQ_ipc_privacy_set_param *req, PARAM_RESP_ipc_privacy_set_param *resp);
int USERDEF_RESP_ipc_privacy_set_param(grpc_t *grpc);

//--- ptz_move_start definition ----
/*
ptz speed ranges from -254 to 254;
 > 0, pan left or tilt up or zoom in, otherwise the opposite direction.
*/

typedef struct{
	int channelid;
	int panLeft;
	int tiltUp;
	int zoomIn;
} PARAM_REQ_ipc_ptz_move_start;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_move_start;
int SERVER_ipc_ptz_move_start(grpc_t *grpc);
int USERDEF_ipc_ptz_move_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_move_start *req, PARAM_RESP_ipc_ptz_move_start *resp);
int CLIENT_REQ_ipc_ptz_move_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_move_start *req);
int CLIENT_RESP_ipc_ptz_move_start(grpc_t *grpc, PARAM_RESP_ipc_ptz_move_start *resp);
int CLIENT_ipc_ptz_move_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_move_start *req, PARAM_RESP_ipc_ptz_move_start *resp);
int USERDEF_RESP_ipc_ptz_move_start(grpc_t *grpc);

//--- ptz_move_stop definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_ptz_move_stop;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_move_stop;
int SERVER_ipc_ptz_move_stop(grpc_t *grpc);
int USERDEF_ipc_ptz_move_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_move_stop *req, PARAM_RESP_ipc_ptz_move_stop *resp);
int CLIENT_REQ_ipc_ptz_move_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_move_stop *req);
int CLIENT_RESP_ipc_ptz_move_stop(grpc_t *grpc, PARAM_RESP_ipc_ptz_move_stop *resp);
int CLIENT_ipc_ptz_move_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_move_stop *req, PARAM_RESP_ipc_ptz_move_stop *resp);
int USERDEF_RESP_ipc_ptz_move_stop(grpc_t *grpc);

//--- ptz_fi_start definition ----
/*
fi speed ranges from -254 to 254;
 > 0, focus far or iris open, otherwise the opposite direction.
*/

typedef struct{
	int channelid;
	int focusFar;
	int irisOpen;
} PARAM_REQ_ipc_ptz_fi_start;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_fi_start;
int SERVER_ipc_ptz_fi_start(grpc_t *grpc);
int USERDEF_ipc_ptz_fi_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_fi_start *req, PARAM_RESP_ipc_ptz_fi_start *resp);
int CLIENT_REQ_ipc_ptz_fi_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_fi_start *req);
int CLIENT_RESP_ipc_ptz_fi_start(grpc_t *grpc, PARAM_RESP_ipc_ptz_fi_start *resp);
int CLIENT_ipc_ptz_fi_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_fi_start *req, PARAM_RESP_ipc_ptz_fi_start *resp);
int USERDEF_RESP_ipc_ptz_fi_start(grpc_t *grpc);

//--- ptz_fi_stop definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_ptz_fi_stop;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_fi_stop;
int SERVER_ipc_ptz_fi_stop(grpc_t *grpc);
int USERDEF_ipc_ptz_fi_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_fi_stop *req, PARAM_RESP_ipc_ptz_fi_stop *resp);
int CLIENT_REQ_ipc_ptz_fi_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_fi_stop *req);
int CLIENT_RESP_ipc_ptz_fi_stop(grpc_t *grpc, PARAM_RESP_ipc_ptz_fi_stop *resp);
int CLIENT_ipc_ptz_fi_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_fi_stop *req, PARAM_RESP_ipc_ptz_fi_stop *resp);
int USERDEF_RESP_ipc_ptz_fi_stop(grpc_t *grpc);

//--- ptz_preset_set definition ----
/*
errcode : 
 0 : success;
 -1 : illegal preset number;
 -2 : preset already exists;
 -3 : no enough preset number.
*/

typedef struct{
	int channelid;
	int presetno;
	char *name; //preset1
} PARAM_REQ_ipc_ptz_preset_set;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_preset_set;
int SERVER_ipc_ptz_preset_set(grpc_t *grpc);
int USERDEF_ipc_ptz_preset_set(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_set *req, PARAM_RESP_ipc_ptz_preset_set *resp);
int CLIENT_REQ_ipc_ptz_preset_set(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_set *req);
int CLIENT_RESP_ipc_ptz_preset_set(grpc_t *grpc, PARAM_RESP_ipc_ptz_preset_set *resp);
int CLIENT_ipc_ptz_preset_set(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_set *req, PARAM_RESP_ipc_ptz_preset_set *resp);
int USERDEF_RESP_ipc_ptz_preset_set(grpc_t *grpc);

//--- ptz_preset_locate definition ----

typedef struct{
	int channelid;
	int presetno;
} PARAM_REQ_ipc_ptz_preset_locate;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_preset_locate;
int SERVER_ipc_ptz_preset_locate(grpc_t *grpc);
int USERDEF_ipc_ptz_preset_locate(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_locate *req, PARAM_RESP_ipc_ptz_preset_locate *resp);
int CLIENT_REQ_ipc_ptz_preset_locate(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_locate *req);
int CLIENT_RESP_ipc_ptz_preset_locate(grpc_t *grpc, PARAM_RESP_ipc_ptz_preset_locate *resp);
int CLIENT_ipc_ptz_preset_locate(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_locate *req, PARAM_RESP_ipc_ptz_preset_locate *resp);
int USERDEF_RESP_ipc_ptz_preset_locate(grpc_t *grpc);

//--- ptz_preset_delete definition ----

typedef struct{
	int channelid;
	int presetno;
} PARAM_REQ_ipc_ptz_preset_delete;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_preset_delete;
int SERVER_ipc_ptz_preset_delete(grpc_t *grpc);
int USERDEF_ipc_ptz_preset_delete(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_delete *req, PARAM_RESP_ipc_ptz_preset_delete *resp);
int CLIENT_REQ_ipc_ptz_preset_delete(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_delete *req);
int CLIENT_RESP_ipc_ptz_preset_delete(grpc_t *grpc, PARAM_RESP_ipc_ptz_preset_delete *resp);
int CLIENT_ipc_ptz_preset_delete(grpc_t *grpc, PARAM_REQ_ipc_ptz_preset_delete *req, PARAM_RESP_ipc_ptz_preset_delete *resp);
int USERDEF_RESP_ipc_ptz_preset_delete(grpc_t *grpc);

//--- ptz_presets_get definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_ptz_presets_get;

typedef struct{
	int presetsList_cnt;
	struct{
		int presetno;
		char *name; //preset1
	} *presetsList;
} PARAM_RESP_ipc_ptz_presets_get;
int SERVER_ipc_ptz_presets_get(grpc_t *grpc);
int USERDEF_ipc_ptz_presets_get(grpc_t *grpc, PARAM_REQ_ipc_ptz_presets_get *req, PARAM_RESP_ipc_ptz_presets_get *resp);
int CLIENT_REQ_ipc_ptz_presets_get(grpc_t *grpc, PARAM_REQ_ipc_ptz_presets_get *req);
int CLIENT_RESP_ipc_ptz_presets_get(grpc_t *grpc, PARAM_RESP_ipc_ptz_presets_get *resp);
int CLIENT_ipc_ptz_presets_get(grpc_t *grpc, PARAM_REQ_ipc_ptz_presets_get *req, PARAM_RESP_ipc_ptz_presets_get *resp);
int USERDEF_RESP_ipc_ptz_presets_get(grpc_t *grpc);

//--- ptz_patrol_create definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_ptz_patrol_create;

typedef struct{
	int index;
} PARAM_RESP_ipc_ptz_patrol_create;
int SERVER_ipc_ptz_patrol_create(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_create(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_create *req, PARAM_RESP_ipc_ptz_patrol_create *resp);
int CLIENT_REQ_ipc_ptz_patrol_create(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_create *req);
int CLIENT_RESP_ipc_ptz_patrol_create(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_create *resp);
int CLIENT_ipc_ptz_patrol_create(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_create *req, PARAM_RESP_ipc_ptz_patrol_create *resp);
int USERDEF_RESP_ipc_ptz_patrol_create(grpc_t *grpc);

//--- ptz_patrol_delete definition ----

typedef struct{
	int channelid;
	int index;
} PARAM_REQ_ipc_ptz_patrol_delete;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_patrol_delete;
int SERVER_ipc_ptz_patrol_delete(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_delete(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_delete *req, PARAM_RESP_ipc_ptz_patrol_delete *resp);
int CLIENT_REQ_ipc_ptz_patrol_delete(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_delete *req);
int CLIENT_RESP_ipc_ptz_patrol_delete(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_delete *resp);
int CLIENT_ipc_ptz_patrol_delete(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_delete *req, PARAM_RESP_ipc_ptz_patrol_delete *resp);
int USERDEF_RESP_ipc_ptz_patrol_delete(grpc_t *grpc);

//--- ptz_patrols_get definition ----

typedef struct{
	int channelid;
} PARAM_REQ_ipc_ptz_patrols_get;

typedef struct{
	int patrolsList_cnt;
	struct{
		int patrolid;
	} *patrolsList;
} PARAM_RESP_ipc_ptz_patrols_get;
int SERVER_ipc_ptz_patrols_get(grpc_t *grpc);
int USERDEF_ipc_ptz_patrols_get(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrols_get *req, PARAM_RESP_ipc_ptz_patrols_get *resp);
int CLIENT_REQ_ipc_ptz_patrols_get(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrols_get *req);
int CLIENT_RESP_ipc_ptz_patrols_get(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrols_get *resp);
int CLIENT_ipc_ptz_patrols_get(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrols_get *req, PARAM_RESP_ipc_ptz_patrols_get *resp);
int USERDEF_RESP_ipc_ptz_patrols_get(grpc_t *grpc);

//--- ptz_patrol_get_nodes definition ----

typedef struct{
	int channelid;
	int patrolid;
} PARAM_REQ_ipc_ptz_patrol_get_nodes;

typedef struct{
	int patrolNodesList_cnt;
	struct{
		struct{
			int presetno;
			char *name; //preset1
		} preset;
		int staySeconds;
	} *patrolNodesList;
} PARAM_RESP_ipc_ptz_patrol_get_nodes;
int SERVER_ipc_ptz_patrol_get_nodes(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_get_nodes(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_get_nodes *req, PARAM_RESP_ipc_ptz_patrol_get_nodes *resp);
int CLIENT_REQ_ipc_ptz_patrol_get_nodes(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_get_nodes *req);
int CLIENT_RESP_ipc_ptz_patrol_get_nodes(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_get_nodes *resp);
int CLIENT_ipc_ptz_patrol_get_nodes(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_get_nodes *req, PARAM_RESP_ipc_ptz_patrol_get_nodes *resp);
int USERDEF_RESP_ipc_ptz_patrol_get_nodes(grpc_t *grpc);

//--- ptz_patrol_add_node definition ----

typedef struct{
	int channelid;
	int patrolid;
	int presetno;
	int staySeconds;
} PARAM_REQ_ipc_ptz_patrol_add_node;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_patrol_add_node;
int SERVER_ipc_ptz_patrol_add_node(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_add_node(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_add_node *req, PARAM_RESP_ipc_ptz_patrol_add_node *resp);
int CLIENT_REQ_ipc_ptz_patrol_add_node(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_add_node *req);
int CLIENT_RESP_ipc_ptz_patrol_add_node(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_add_node *resp);
int CLIENT_ipc_ptz_patrol_add_node(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_add_node *req, PARAM_RESP_ipc_ptz_patrol_add_node *resp);
int USERDEF_RESP_ipc_ptz_patrol_add_node(grpc_t *grpc);

//--- ptz_patrol_del_node definition ----
/*
presetindex: the index of this node in patrol, start from 0. if -1, delete all the nodes in patrol.
*/

typedef struct{
	int channelid;
	int patrolid;
	int presetindex;
} PARAM_REQ_ipc_ptz_patrol_del_node;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_patrol_del_node;
int SERVER_ipc_ptz_patrol_del_node(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_del_node(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_del_node *req, PARAM_RESP_ipc_ptz_patrol_del_node *resp);
int CLIENT_REQ_ipc_ptz_patrol_del_node(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_del_node *req);
int CLIENT_RESP_ipc_ptz_patrol_del_node(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_del_node *resp);
int CLIENT_ipc_ptz_patrol_del_node(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_del_node *req, PARAM_RESP_ipc_ptz_patrol_del_node *resp);
int USERDEF_RESP_ipc_ptz_patrol_del_node(grpc_t *grpc);

//--- ptz_patrol_set_speed definition ----
/*
Speed ranges from 0 to 254.
*/

typedef struct{
	int channelid;
	int patrolid;
	int speed;
} PARAM_REQ_ipc_ptz_patrol_set_speed;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_patrol_set_speed;
int SERVER_ipc_ptz_patrol_set_speed(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_set_speed(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_set_speed *req, PARAM_RESP_ipc_ptz_patrol_set_speed *resp);
int CLIENT_REQ_ipc_ptz_patrol_set_speed(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_set_speed *req);
int CLIENT_RESP_ipc_ptz_patrol_set_speed(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_set_speed *resp);
int CLIENT_ipc_ptz_patrol_set_speed(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_set_speed *req, PARAM_RESP_ipc_ptz_patrol_set_speed *resp);
int USERDEF_RESP_ipc_ptz_patrol_set_speed(grpc_t *grpc);

//--- ptz_patrol_set_stay_seconds definition ----

typedef struct{
	int channelid;
	int patrolid;
	int staySeconds;
} PARAM_REQ_ipc_ptz_patrol_set_stay_seconds;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_patrol_set_stay_seconds;
int SERVER_ipc_ptz_patrol_set_stay_seconds(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_set_stay_seconds(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_set_stay_seconds *req, PARAM_RESP_ipc_ptz_patrol_set_stay_seconds *resp);
int CLIENT_REQ_ipc_ptz_patrol_set_stay_seconds(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_set_stay_seconds *req);
int CLIENT_RESP_ipc_ptz_patrol_set_stay_seconds(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_set_stay_seconds *resp);
int CLIENT_ipc_ptz_patrol_set_stay_seconds(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_set_stay_seconds *req, PARAM_RESP_ipc_ptz_patrol_set_stay_seconds *resp);
int USERDEF_RESP_ipc_ptz_patrol_set_stay_seconds(grpc_t *grpc);

//--- ptz_patrol_locate definition ----

typedef struct{
	int channelid;
	int patrolid;
} PARAM_REQ_ipc_ptz_patrol_locate;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_patrol_locate;
int SERVER_ipc_ptz_patrol_locate(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_locate(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_locate *req, PARAM_RESP_ipc_ptz_patrol_locate *resp);
int CLIENT_REQ_ipc_ptz_patrol_locate(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_locate *req);
int CLIENT_RESP_ipc_ptz_patrol_locate(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_locate *resp);
int CLIENT_ipc_ptz_patrol_locate(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_locate *req, PARAM_RESP_ipc_ptz_patrol_locate *resp);
int USERDEF_RESP_ipc_ptz_patrol_locate(grpc_t *grpc);

//--- ptz_patrol_stop definition ----

typedef struct{
	int channelid;
	int patrolid;
} PARAM_REQ_ipc_ptz_patrol_stop;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_patrol_stop;
int SERVER_ipc_ptz_patrol_stop(grpc_t *grpc);
int USERDEF_ipc_ptz_patrol_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_stop *req, PARAM_RESP_ipc_ptz_patrol_stop *resp);
int CLIENT_REQ_ipc_ptz_patrol_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_stop *req);
int CLIENT_RESP_ipc_ptz_patrol_stop(grpc_t *grpc, PARAM_RESP_ipc_ptz_patrol_stop *resp);
int CLIENT_ipc_ptz_patrol_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_patrol_stop *req, PARAM_RESP_ipc_ptz_patrol_stop *resp);
int USERDEF_RESP_ipc_ptz_patrol_stop(grpc_t *grpc);

//--- ptz_scan_set_left definition ----

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_ipc_ptz_scan_set_left;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_scan_set_left;
int SERVER_ipc_ptz_scan_set_left(grpc_t *grpc);
int USERDEF_ipc_ptz_scan_set_left(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_left *req, PARAM_RESP_ipc_ptz_scan_set_left *resp);
int CLIENT_REQ_ipc_ptz_scan_set_left(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_left *req);
int CLIENT_RESP_ipc_ptz_scan_set_left(grpc_t *grpc, PARAM_RESP_ipc_ptz_scan_set_left *resp);
int CLIENT_ipc_ptz_scan_set_left(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_left *req, PARAM_RESP_ipc_ptz_scan_set_left *resp);
int USERDEF_RESP_ipc_ptz_scan_set_left(grpc_t *grpc);

//--- ptz_scan_set_right definition ----

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_ipc_ptz_scan_set_right;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_scan_set_right;
int SERVER_ipc_ptz_scan_set_right(grpc_t *grpc);
int USERDEF_ipc_ptz_scan_set_right(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_right *req, PARAM_RESP_ipc_ptz_scan_set_right *resp);
int CLIENT_REQ_ipc_ptz_scan_set_right(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_right *req);
int CLIENT_RESP_ipc_ptz_scan_set_right(grpc_t *grpc, PARAM_RESP_ipc_ptz_scan_set_right *resp);
int CLIENT_ipc_ptz_scan_set_right(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_right *req, PARAM_RESP_ipc_ptz_scan_set_right *resp);
int USERDEF_RESP_ipc_ptz_scan_set_right(grpc_t *grpc);

//--- ptz_scan_start definition ----

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_ipc_ptz_scan_start;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_scan_start;
int SERVER_ipc_ptz_scan_start(grpc_t *grpc);
int USERDEF_ipc_ptz_scan_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_start *req, PARAM_RESP_ipc_ptz_scan_start *resp);
int CLIENT_REQ_ipc_ptz_scan_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_start *req);
int CLIENT_RESP_ipc_ptz_scan_start(grpc_t *grpc, PARAM_RESP_ipc_ptz_scan_start *resp);
int CLIENT_ipc_ptz_scan_start(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_start *req, PARAM_RESP_ipc_ptz_scan_start *resp);
int USERDEF_RESP_ipc_ptz_scan_start(grpc_t *grpc);

//--- ptz_scan_stop definition ----

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_ipc_ptz_scan_stop;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_scan_stop;
int SERVER_ipc_ptz_scan_stop(grpc_t *grpc);
int USERDEF_ipc_ptz_scan_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_stop *req, PARAM_RESP_ipc_ptz_scan_stop *resp);
int CLIENT_REQ_ipc_ptz_scan_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_stop *req);
int CLIENT_RESP_ipc_ptz_scan_stop(grpc_t *grpc, PARAM_RESP_ipc_ptz_scan_stop *resp);
int CLIENT_ipc_ptz_scan_stop(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_stop *req, PARAM_RESP_ipc_ptz_scan_stop *resp);
int USERDEF_RESP_ipc_ptz_scan_stop(grpc_t *grpc);

//--- ptz_scan_set_speed definition ----
/*
Speed ranges from 0 to 254.
*/

typedef struct{
	int channelid;
	int groupid;
	int speed;
} PARAM_REQ_ipc_ptz_scan_set_speed;

typedef struct{
	int idle;
} PARAM_RESP_ipc_ptz_scan_set_speed;
int SERVER_ipc_ptz_scan_set_speed(grpc_t *grpc);
int USERDEF_ipc_ptz_scan_set_speed(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_speed *req, PARAM_RESP_ipc_ptz_scan_set_speed *resp);
int CLIENT_REQ_ipc_ptz_scan_set_speed(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_speed *req);
int CLIENT_RESP_ipc_ptz_scan_set_speed(grpc_t *grpc, PARAM_RESP_ipc_ptz_scan_set_speed *resp);
int CLIENT_ipc_ptz_scan_set_speed(grpc_t *grpc, PARAM_REQ_ipc_ptz_scan_set_speed *req, PARAM_RESP_ipc_ptz_scan_set_speed *resp);
int USERDEF_RESP_ipc_ptz_scan_set_speed(grpc_t *grpc);

//--- record_get definition ----
/*
enum{ALL,Mon,Tues,Wed,Thur,Fri,Sat,Sun}
*/

typedef struct{
	int channelid;
} PARAM_REQ_ipc_record_get;

typedef struct{
	int record_params_cnt;
	struct{
		GBOOL brecording;
		GBOOL normal_record;
		GBOOL time_record;
		int date_cnt;
		struct{
			char *week; //Mon
			int time_cnt;
			struct{
				int begin_hour;
				int begin_min;
				int end_hour;
				int end_min;
			} *time;
		} *date;
	} *record_params;
} PARAM_RESP_ipc_record_get;
int SERVER_ipc_record_get(grpc_t *grpc);
int USERDEF_ipc_record_get(grpc_t *grpc, PARAM_REQ_ipc_record_get *req, PARAM_RESP_ipc_record_get *resp);
int CLIENT_REQ_ipc_record_get(grpc_t *grpc, PARAM_REQ_ipc_record_get *req);
int CLIENT_RESP_ipc_record_get(grpc_t *grpc, PARAM_RESP_ipc_record_get *resp);
int CLIENT_ipc_record_get(grpc_t *grpc, PARAM_REQ_ipc_record_get *req, PARAM_RESP_ipc_record_get *resp);
int USERDEF_RESP_ipc_record_get(grpc_t *grpc);

//--- record_set definition ----
/*
enum{ALL,Mon,Tues,Wed,Thur,Fri,Sat,Sun}
*/

typedef struct{
	int record_params_cnt;
	struct{
		int channelid;
		GBOOL normal_record;
		GBOOL time_record;
		int date_cnt;
		struct{
			char *week; //Mon
			int time_cnt;
			struct{
				int begin_hour;
				int begin_min;
				int end_hour;
				int end_min;
			} *time;
		} *date;
	} *record_params;
} PARAM_REQ_ipc_record_set;

typedef struct{
	int idle;
} PARAM_RESP_ipc_record_set;
int SERVER_ipc_record_set(grpc_t *grpc);
int USERDEF_ipc_record_set(grpc_t *grpc, PARAM_REQ_ipc_record_set *req, PARAM_RESP_ipc_record_set *resp);
int CLIENT_REQ_ipc_record_set(grpc_t *grpc, PARAM_REQ_ipc_record_set *req);
int CLIENT_RESP_ipc_record_set(grpc_t *grpc, PARAM_RESP_ipc_record_set *resp);
int CLIENT_ipc_record_set(grpc_t *grpc, PARAM_REQ_ipc_record_set *req, PARAM_RESP_ipc_record_set *resp);
int USERDEF_RESP_ipc_record_set(grpc_t *grpc);

//--- storage_get_info definition ----

typedef struct{
	int idle;
} PARAM_REQ_ipc_storage_get_info;

typedef struct{
	int size;
	int cylinder;
	int partSize;
	int partition;
	int entryCount;
	int status;
	int curPart;
	GBOOL bNocard;
	GBOOL bMounted;
	int partSpace_cnt;
	int *partSpace;
	int freeSpace_cnt;
	int *freeSpace;
} PARAM_RESP_ipc_storage_get_info;
int SERVER_ipc_storage_get_info(grpc_t *grpc);
int USERDEF_ipc_storage_get_info(grpc_t *grpc, PARAM_REQ_ipc_storage_get_info *req, PARAM_RESP_ipc_storage_get_info *resp);
int CLIENT_REQ_ipc_storage_get_info(grpc_t *grpc, PARAM_REQ_ipc_storage_get_info *req);
int CLIENT_RESP_ipc_storage_get_info(grpc_t *grpc, PARAM_RESP_ipc_storage_get_info *resp);
int CLIENT_ipc_storage_get_info(grpc_t *grpc, PARAM_REQ_ipc_storage_get_info *req, PARAM_RESP_ipc_storage_get_info *resp);
int USERDEF_RESP_ipc_storage_get_info(grpc_t *grpc);

//--- storage_format definition ----

typedef struct{
	int diskNum;
} PARAM_REQ_ipc_storage_format;

typedef struct{
	int idle;
} PARAM_RESP_ipc_storage_format;
int SERVER_ipc_storage_format(grpc_t *grpc);
int USERDEF_ipc_storage_format(grpc_t *grpc, PARAM_REQ_ipc_storage_format *req, PARAM_RESP_ipc_storage_format *resp);
int CLIENT_REQ_ipc_storage_format(grpc_t *grpc, PARAM_REQ_ipc_storage_format *req);
int CLIENT_RESP_ipc_storage_format(grpc_t *grpc, PARAM_RESP_ipc_storage_format *resp);
int CLIENT_ipc_storage_format(grpc_t *grpc, PARAM_REQ_ipc_storage_format *req, PARAM_RESP_ipc_storage_format *resp);
int USERDEF_RESP_ipc_storage_format(grpc_t *grpc);

//--- stream_get_param definition ----

typedef struct{
	int channelid;
	int streamid;
} PARAM_REQ_ipc_stream_get_param;

typedef struct{
	int width;
	int height;
	int frameRate;
	int bitRate;
	int ngop_s;
	int quality;
	char *rcMode; //cbr,vbr,fixQP
} PARAM_RESP_ipc_stream_get_param;
int SERVER_ipc_stream_get_param(grpc_t *grpc);
int USERDEF_ipc_stream_get_param(grpc_t *grpc, PARAM_REQ_ipc_stream_get_param *req, PARAM_RESP_ipc_stream_get_param *resp);
int CLIENT_REQ_ipc_stream_get_param(grpc_t *grpc, PARAM_REQ_ipc_stream_get_param *req);
int CLIENT_RESP_ipc_stream_get_param(grpc_t *grpc, PARAM_RESP_ipc_stream_get_param *resp);
int CLIENT_ipc_stream_get_param(grpc_t *grpc, PARAM_REQ_ipc_stream_get_param *req, PARAM_RESP_ipc_stream_get_param *resp);
int USERDEF_RESP_ipc_stream_get_param(grpc_t *grpc);

//--- stream_get_params definition ----

typedef struct{
	int idle;
} PARAM_REQ_ipc_stream_get_params;

typedef struct{
	int streams_cnt;
	struct{
		int channelid;
		int streamid;
		int width;
		int height;
		int frameRate;
		int bitRate;
		int ngop_s;
		int quality;
		char *rcMode; //cbr,vbr,fixQP
	} *streams;
} PARAM_RESP_ipc_stream_get_params;
int SERVER_ipc_stream_get_params(grpc_t *grpc);
int USERDEF_ipc_stream_get_params(grpc_t *grpc, PARAM_REQ_ipc_stream_get_params *req, PARAM_RESP_ipc_stream_get_params *resp);
int CLIENT_REQ_ipc_stream_get_params(grpc_t *grpc, PARAM_REQ_ipc_stream_get_params *req);
int CLIENT_RESP_ipc_stream_get_params(grpc_t *grpc, PARAM_RESP_ipc_stream_get_params *resp);
int CLIENT_ipc_stream_get_params(grpc_t *grpc, PARAM_REQ_ipc_stream_get_params *req, PARAM_RESP_ipc_stream_get_params *resp);
int USERDEF_RESP_ipc_stream_get_params(grpc_t *grpc);

//--- stream_set_param definition ----

typedef struct{
	int channelid;
	int streamid;
	int width;
	int height;
	int frameRate;
	int bitRate;
	int ngop_s;
	int quality;
	char *rcMode; //cbr,vbr,fixQP
} PARAM_REQ_ipc_stream_set_param;

typedef struct{
	int idle;
} PARAM_RESP_ipc_stream_set_param;
int SERVER_ipc_stream_set_param(grpc_t *grpc);
int USERDEF_ipc_stream_set_param(grpc_t *grpc, PARAM_REQ_ipc_stream_set_param *req, PARAM_RESP_ipc_stream_set_param *resp);
int CLIENT_REQ_ipc_stream_set_param(grpc_t *grpc, PARAM_REQ_ipc_stream_set_param *req);
int CLIENT_RESP_ipc_stream_set_param(grpc_t *grpc, PARAM_RESP_ipc_stream_set_param *resp);
int CLIENT_ipc_stream_set_param(grpc_t *grpc, PARAM_REQ_ipc_stream_set_param *req, PARAM_RESP_ipc_stream_set_param *resp);
int USERDEF_RESP_ipc_stream_set_param(grpc_t *grpc);

//--- stream_get_ability definition ----

typedef struct{
	int channelid;
	int streamid;
} PARAM_REQ_ipc_stream_get_ability;

typedef struct{
	int resolutions_cnt;
	struct{
		int width;
		int height;
	} *resolutions;
	struct{
		int width;
		int height;
	} inputRes;
	int maxFramerate;
	int minFramerate;
	int maxQuality;
	int minQuality;
	int maxNGOP;
	int minNGOP;
	int maxKBitrate;
	int minKBitrate;
} PARAM_RESP_ipc_stream_get_ability;
int SERVER_ipc_stream_get_ability(grpc_t *grpc);
int USERDEF_ipc_stream_get_ability(grpc_t *grpc, PARAM_REQ_ipc_stream_get_ability *req, PARAM_RESP_ipc_stream_get_ability *resp);
int CLIENT_REQ_ipc_stream_get_ability(grpc_t *grpc, PARAM_REQ_ipc_stream_get_ability *req);
int CLIENT_RESP_ipc_stream_get_ability(grpc_t *grpc, PARAM_RESP_ipc_stream_get_ability *resp);
int CLIENT_ipc_stream_get_ability(grpc_t *grpc, PARAM_REQ_ipc_stream_get_ability *req, PARAM_RESP_ipc_stream_get_ability *resp);
int USERDEF_RESP_ipc_stream_get_ability(grpc_t *grpc);

//--- stream_snapshot definition ----

typedef struct{
	int channelid;
	int streamid;
	int width;
	int height;
} PARAM_REQ_ipc_stream_snapshot;

typedef struct{
	char *snapshot; //photos with base64code
} PARAM_RESP_ipc_stream_snapshot;
int SERVER_ipc_stream_snapshot(grpc_t *grpc);
int USERDEF_ipc_stream_snapshot(grpc_t *grpc, PARAM_REQ_ipc_stream_snapshot *req, PARAM_RESP_ipc_stream_snapshot *resp);
int CLIENT_REQ_ipc_stream_snapshot(grpc_t *grpc, PARAM_REQ_ipc_stream_snapshot *req);
int CLIENT_RESP_ipc_stream_snapshot(grpc_t *grpc, PARAM_RESP_ipc_stream_snapshot *resp);
int CLIENT_ipc_stream_snapshot(grpc_t *grpc, PARAM_REQ_ipc_stream_snapshot *req, PARAM_RESP_ipc_stream_snapshot *resp);
int USERDEF_RESP_ipc_stream_snapshot(grpc_t *grpc);
#ifdef __cplusplus
}
#endif
#endif
