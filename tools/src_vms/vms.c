// This file is generated auto. Do not modify it anytime.
#include "vms.h"

grpcMethod_t vms_methodList[] = {
		{"account_get_users"             , USERDEF_RESP_vms_account_get_users              , SERVER_vms_account_get_users                    , GRPC_USER_LEVEL_Administrator   },
		{"account_add_user"              , USERDEF_RESP_vms_account_add_user               , SERVER_vms_account_add_user                     , GRPC_USER_LEVEL_Administrator   },
		{"account_del_user"              , USERDEF_RESP_vms_account_del_user               , SERVER_vms_account_del_user                     , GRPC_USER_LEVEL_Administrator   },
		{"account_modify_user"           , USERDEF_RESP_vms_account_modify_user            , SERVER_vms_account_modify_user                  , GRPC_USER_LEVEL_Administrator   },
		{"alarmin_start"                 , USERDEF_RESP_vms_alarmin_start                  , SERVER_vms_alarmin_start                        , GRPC_USER_LEVEL_Administrator   },
		{"alarmin_stop"                  , USERDEF_RESP_vms_alarmin_stop                   , SERVER_vms_alarmin_stop                         , GRPC_USER_LEVEL_Administrator   },
		{"alarmin_get_param"             , USERDEF_RESP_vms_alarmin_get_param              , SERVER_vms_alarmin_get_param                    , GRPC_USER_LEVEL_Administrator   },
		{"alarmin_set_param"             , USERDEF_RESP_vms_alarmin_set_param              , SERVER_vms_alarmin_set_param                    , GRPC_USER_LEVEL_Administrator   },
		{"alarmin_b_onduty"              , USERDEF_RESP_vms_alarmin_b_onduty               , SERVER_vms_alarmin_b_onduty                     , GRPC_USER_LEVEL_Administrator   },
		{"alarmin_b_alarming"            , USERDEF_RESP_vms_alarmin_b_alarming             , SERVER_vms_alarmin_b_alarming                   , GRPC_USER_LEVEL_Administrator   },
		{"alarm_get_param"               , USERDEF_RESP_vms_alarm_get_param                , SERVER_vms_alarm_get_param                      , GRPC_USER_LEVEL_Administrator   },
		{"alarm_set_param"               , USERDEF_RESP_vms_alarm_set_param                , SERVER_vms_alarm_set_param                      , GRPC_USER_LEVEL_Administrator   },
		{"ai_get_param"                  , USERDEF_RESP_vms_ai_get_param                   , SERVER_vms_ai_get_param                         , GRPC_USER_LEVEL_Administrator   },
		{"ai_set_param"                  , USERDEF_RESP_vms_ai_set_param                   , SERVER_vms_ai_set_param                         , GRPC_USER_LEVEL_Administrator   },
		{"ao_get_param"                  , USERDEF_RESP_vms_ao_get_param                   , SERVER_vms_ao_get_param                         , GRPC_USER_LEVEL_Administrator   },
		{"ao_set_param"                  , USERDEF_RESP_vms_ao_set_param                   , SERVER_vms_ao_set_param                         , GRPC_USER_LEVEL_Administrator   },
		{"connection_get_list"           , USERDEF_RESP_vms_connection_get_list            , SERVER_vms_connection_get_list                  , GRPC_USER_LEVEL_Administrator   },
		{"connection_breakoff"           , USERDEF_RESP_vms_connection_breakoff            , SERVER_vms_connection_breakoff                  , GRPC_USER_LEVEL_Administrator   },
		{"dev_get_hwinfo"                , USERDEF_RESP_vms_dev_get_hwinfo                 , SERVER_vms_dev_get_hwinfo                       , GRPC_USER_LEVEL_Administrator   },
		{"dev_get_info"                  , USERDEF_RESP_vms_dev_get_info                   , SERVER_vms_dev_get_info                         , GRPC_USER_LEVEL_Administrator   },
		{"dev_set_info"                  , USERDEF_RESP_vms_dev_set_info                   , SERVER_vms_dev_set_info                         , GRPC_USER_LEVEL_Administrator   },
		{"dev_stime"                     , USERDEF_RESP_vms_dev_stime                      , SERVER_vms_dev_stime                            , GRPC_USER_LEVEL_Administrator   },
		{"dev_gtime"                     , USERDEF_RESP_vms_dev_gtime                      , SERVER_vms_dev_gtime                            , GRPC_USER_LEVEL_Administrator   },
		{"dev_ntp_set"                   , USERDEF_RESP_vms_dev_ntp_set                    , SERVER_vms_dev_ntp_set                          , GRPC_USER_LEVEL_Administrator   },
		{"dev_ntp_get"                   , USERDEF_RESP_vms_dev_ntp_get                    , SERVER_vms_dev_ntp_get                          , GRPC_USER_LEVEL_Administrator   },
		{"dev_reboot"                    , USERDEF_RESP_vms_dev_reboot                     , SERVER_vms_dev_reboot                           , GRPC_USER_LEVEL_Administrator   },
		{"dev_factory_default"           , USERDEF_RESP_vms_dev_factory_default            , SERVER_vms_dev_factory_default                  , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_get_inet"             , USERDEF_RESP_vms_ifconfig_get_inet              , SERVER_vms_ifconfig_get_inet                    , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_eth_set"              , USERDEF_RESP_vms_ifconfig_eth_set               , SERVER_vms_ifconfig_eth_set                     , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_ppp_set"              , USERDEF_RESP_vms_ifconfig_ppp_set               , SERVER_vms_ifconfig_ppp_set                     , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_wifi_connect"         , USERDEF_RESP_vms_ifconfig_wifi_connect          , SERVER_vms_ifconfig_wifi_connect                , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_wifi_list_ap"         , USERDEF_RESP_vms_ifconfig_wifi_list_ap          , SERVER_vms_ifconfig_wifi_list_ap                , GRPC_USER_LEVEL_Administrator   },
		{"image_get_param"               , USERDEF_RESP_vms_image_get_param                , SERVER_vms_image_get_param                      , GRPC_USER_LEVEL_Administrator   },
		{"image_set_param"               , USERDEF_RESP_vms_image_set_param                , SERVER_vms_image_set_param                      , GRPC_USER_LEVEL_Administrator   },
		{"log_get"                       , USERDEF_RESP_vms_log_get                        , SERVER_vms_log_get                              , GRPC_USER_LEVEL_Administrator   },
		{"log_clear"                     , USERDEF_RESP_vms_log_clear                      , SERVER_vms_log_clear                            , GRPC_USER_LEVEL_Administrator   },
		{"mdetect_set_param"             , USERDEF_RESP_vms_mdetect_set_param              , SERVER_vms_mdetect_set_param                    , GRPC_USER_LEVEL_Administrator   },
		{"mdetect_get_param"             , USERDEF_RESP_vms_mdetect_get_param              , SERVER_vms_mdetect_get_param                    , GRPC_USER_LEVEL_Administrator   },
		{"mdetect_balarming"             , USERDEF_RESP_vms_mdetect_balarming              , SERVER_vms_mdetect_balarming                    , GRPC_USER_LEVEL_Administrator   },
		{"chnosd_get_param"              , USERDEF_RESP_vms_chnosd_get_param               , SERVER_vms_chnosd_get_param                     , GRPC_USER_LEVEL_Administrator   },
		{"chnosd_set_param"              , USERDEF_RESP_vms_chnosd_set_param               , SERVER_vms_chnosd_set_param                     , GRPC_USER_LEVEL_Administrator   },
		{"privacy_get_param"             , USERDEF_RESP_vms_privacy_get_param              , SERVER_vms_privacy_get_param                    , GRPC_USER_LEVEL_Administrator   },
		{"privacy_set_param"             , USERDEF_RESP_vms_privacy_set_param              , SERVER_vms_privacy_set_param                    , GRPC_USER_LEVEL_Administrator   },
		{"ptz_move_start"                , USERDEF_RESP_vms_ptz_move_start                 , SERVER_vms_ptz_move_start                       , GRPC_USER_LEVEL_Administrator   },
		{"ptz_move_stop"                 , USERDEF_RESP_vms_ptz_move_stop                  , SERVER_vms_ptz_move_stop                        , GRPC_USER_LEVEL_Administrator   },
		{"ptz_fi_start"                  , USERDEF_RESP_vms_ptz_fi_start                   , SERVER_vms_ptz_fi_start                         , GRPC_USER_LEVEL_Administrator   },
		{"ptz_fi_stop"                   , USERDEF_RESP_vms_ptz_fi_stop                    , SERVER_vms_ptz_fi_stop                          , GRPC_USER_LEVEL_Administrator   },
		{"ptz_preset_set"                , USERDEF_RESP_vms_ptz_preset_set                 , SERVER_vms_ptz_preset_set                       , GRPC_USER_LEVEL_Administrator   },
		{"ptz_preset_locate"             , USERDEF_RESP_vms_ptz_preset_locate              , SERVER_vms_ptz_preset_locate                    , GRPC_USER_LEVEL_Administrator   },
		{"ptz_preset_delete"             , USERDEF_RESP_vms_ptz_preset_delete              , SERVER_vms_ptz_preset_delete                    , GRPC_USER_LEVEL_Administrator   },
		{"ptz_presets_get"               , USERDEF_RESP_vms_ptz_presets_get                , SERVER_vms_ptz_presets_get                      , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_create"             , USERDEF_RESP_vms_ptz_patrol_create              , SERVER_vms_ptz_patrol_create                    , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_delete"             , USERDEF_RESP_vms_ptz_patrol_delete              , SERVER_vms_ptz_patrol_delete                    , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrols_get"               , USERDEF_RESP_vms_ptz_patrols_get                , SERVER_vms_ptz_patrols_get                      , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_get_nodes"          , USERDEF_RESP_vms_ptz_patrol_get_nodes           , SERVER_vms_ptz_patrol_get_nodes                 , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_add_node"           , USERDEF_RESP_vms_ptz_patrol_add_node            , SERVER_vms_ptz_patrol_add_node                  , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_del_node"           , USERDEF_RESP_vms_ptz_patrol_del_node            , SERVER_vms_ptz_patrol_del_node                  , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_set_speed"          , USERDEF_RESP_vms_ptz_patrol_set_speed           , SERVER_vms_ptz_patrol_set_speed                 , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_set_stay_seconds"   , USERDEF_RESP_vms_ptz_patrol_set_stay_seconds    , SERVER_vms_ptz_patrol_set_stay_seconds          , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_locate"             , USERDEF_RESP_vms_ptz_patrol_locate              , SERVER_vms_ptz_patrol_locate                    , GRPC_USER_LEVEL_Administrator   },
		{"ptz_patrol_stop"               , USERDEF_RESP_vms_ptz_patrol_stop                , SERVER_vms_ptz_patrol_stop                      , GRPC_USER_LEVEL_Administrator   },
		{"ptz_scan_set_left"             , USERDEF_RESP_vms_ptz_scan_set_left              , SERVER_vms_ptz_scan_set_left                    , GRPC_USER_LEVEL_Administrator   },
		{"ptz_scan_set_right"            , USERDEF_RESP_vms_ptz_scan_set_right             , SERVER_vms_ptz_scan_set_right                   , GRPC_USER_LEVEL_Administrator   },
		{"ptz_scan_start"                , USERDEF_RESP_vms_ptz_scan_start                 , SERVER_vms_ptz_scan_start                       , GRPC_USER_LEVEL_Administrator   },
		{"ptz_scan_stop"                 , USERDEF_RESP_vms_ptz_scan_stop                  , SERVER_vms_ptz_scan_stop                        , GRPC_USER_LEVEL_Administrator   },
		{"ptz_scan_set_speed"            , USERDEF_RESP_vms_ptz_scan_set_speed             , SERVER_vms_ptz_scan_set_speed                   , GRPC_USER_LEVEL_Administrator   },
		{"record_get"                    , USERDEF_RESP_vms_record_get                     , SERVER_vms_record_get                           , GRPC_USER_LEVEL_Administrator   },
		{"record_set"                    , USERDEF_RESP_vms_record_set                     , SERVER_vms_record_set                           , GRPC_USER_LEVEL_Administrator   },
		{"storage_get_info"              , USERDEF_RESP_vms_storage_get_info               , SERVER_vms_storage_get_info                     , GRPC_USER_LEVEL_Administrator   },
		{"storage_format"                , USERDEF_RESP_vms_storage_format                 , SERVER_vms_storage_format                       , GRPC_USER_LEVEL_Administrator   },
		{"stream_get_param"              , USERDEF_RESP_vms_stream_get_param               , SERVER_vms_stream_get_param                     , GRPC_USER_LEVEL_Administrator   },
		{"stream_get_params"             , USERDEF_RESP_vms_stream_get_params              , SERVER_vms_stream_get_params                    , GRPC_USER_LEVEL_Administrator   },
		{"stream_set_param"              , USERDEF_RESP_vms_stream_set_param               , SERVER_vms_stream_set_param                     , GRPC_USER_LEVEL_Administrator   },
		{"stream_get_ability"            , USERDEF_RESP_vms_stream_get_ability             , SERVER_vms_stream_get_ability                   , GRPC_USER_LEVEL_Administrator   },
		{"stream_snapshot"               , USERDEF_RESP_vms_stream_snapshot                , SERVER_vms_stream_snapshot                      , GRPC_USER_LEVEL_Administrator   },
		{"screen_get_ability"            , USERDEF_RESP_vms_screen_get_ability             , SERVER_vms_screen_get_ability                   , GRPC_USER_LEVEL_Administrator   },
		{"screen_get_display"            , USERDEF_RESP_vms_screen_get_display             , SERVER_vms_screen_get_display                   , GRPC_USER_LEVEL_Administrator   },
		{"screen_set_display"            , USERDEF_RESP_vms_screen_set_display             , SERVER_vms_screen_set_display                   , GRPC_USER_LEVEL_Administrator   },
		{"screen_get_tour"               , USERDEF_RESP_vms_screen_get_tour                , SERVER_vms_screen_get_tour                      , GRPC_USER_LEVEL_Administrator   },
		{"screen_set_tour"               , USERDEF_RESP_vms_screen_set_tour                , SERVER_vms_screen_set_tour                      , GRPC_USER_LEVEL_Administrator   },
		{"screen_get_screen"             , USERDEF_RESP_vms_screen_get_screen              , SERVER_vms_screen_get_screen                    , GRPC_USER_LEVEL_Administrator   },
		{"screen_set_screen"             , USERDEF_RESP_vms_screen_set_screen              , SERVER_vms_screen_set_screen                    , GRPC_USER_LEVEL_Administrator   },
		{"vsource_add_vs"                , USERDEF_RESP_vms_vsource_add_vs                 , SERVER_vms_vsource_add_vs                       , GRPC_USER_LEVEL_Administrator   },
		{"vsource_delete_vs"             , USERDEF_RESP_vms_vsource_delete_vs              , SERVER_vms_vsource_delete_vs                    , GRPC_USER_LEVEL_Administrator   },
		{"vsource_modify_vs"             , USERDEF_RESP_vms_vsource_modify_vs              , SERVER_vms_vsource_modify_vs                    , GRPC_USER_LEVEL_Administrator   },
		{"vsource_get_chn_status"        , USERDEF_RESP_vms_vsource_get_chn_status         , SERVER_vms_vsource_get_chn_status               , GRPC_USER_LEVEL_Administrator   },
		{"channel_get"                   , USERDEF_RESP_vms_channel_get                    , SERVER_vms_channel_get                          , GRPC_USER_LEVEL_Administrator   },
		{"channel_add"                   , USERDEF_RESP_vms_channel_add                    , SERVER_vms_channel_add                          , GRPC_USER_LEVEL_Administrator   },
		{"channel_remove"                , USERDEF_RESP_vms_channel_remove                 , SERVER_vms_channel_remove                       , GRPC_USER_LEVEL_Administrator   },
		{"channel_modify"                , USERDEF_RESP_vms_channel_modify                 , SERVER_vms_channel_modify                       , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_discovery"           , USERDEF_RESP_vms_broadcast_discovery            , SERVER_vms_broadcast_discovery                  , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_get_inet"            , USERDEF_RESP_vms_broadcast_get_inet             , SERVER_vms_broadcast_get_inet                   , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_eth_set"             , USERDEF_RESP_vms_broadcast_eth_set              , SERVER_vms_broadcast_eth_set                    , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_ppp_set"             , USERDEF_RESP_vms_broadcast_ppp_set              , SERVER_vms_broadcast_ppp_set                    , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_wifi_connect"        , USERDEF_RESP_vms_broadcast_wifi_connect         , SERVER_vms_broadcast_wifi_connect               , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_wifi_list_ap"        , USERDEF_RESP_vms_broadcast_wifi_list_ap         , SERVER_vms_broadcast_wifi_list_ap               , GRPC_USER_LEVEL_Administrator   },
		{"storage_get_info"              , USERDEF_RESP_vms_storage_get_info               , SERVER_vms_storage_get_info                     , GRPC_USER_LEVEL_Administrator   },
		{"storage_start_intial_disk"     , USERDEF_RESP_vms_storage_start_intial_disk      , SERVER_vms_storage_start_intial_disk            , GRPC_USER_LEVEL_Administrator   },
		{"storage_get_disk_initial_rate" , USERDEF_RESP_vms_storage_get_disk_initial_rate  , SERVER_vms_storage_get_disk_initial_rate        , GRPC_USER_LEVEL_Administrator   },
		{"storage_get_record_fragments"  , USERDEF_RESP_vms_storage_get_record_fragments   , SERVER_vms_storage_get_record_fragments         , GRPC_USER_LEVEL_Administrator   },
		{"stream_get_service"            , USERDEF_RESP_vms_stream_get_service             , SERVER_vms_stream_get_service                   , GRPC_USER_LEVEL_Administrator   },
		{NULL, NULL, NULL}
};

int CLIENT_REQ_vms_account_get_users(grpc_t *grpc, PARAM_REQ_vms_account_get_users *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "account_get_users");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_account_get_users(grpc_t *grpc, PARAM_RESP_vms_account_get_users *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *users = cJSON_GetObjectItem(result, "users");
				if (users)
				{
					int i1;
					int cnt = cJSON_GetArraySize(users);
					(*resp).users_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).users = grpc_malloc(grpc, cnt * sizeof((*resp).users[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(users, i1);
								if (item)
								{
									(*resp).users[i1].name = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "name"));
									(*resp).users[i1].level = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "level"));
									(*resp).users[i1].description = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "description"));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_account_get_users(grpc_t *grpc, PARAM_REQ_vms_account_get_users *req, PARAM_RESP_vms_account_get_users *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_account_get_users(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_account_get_users(grpc, resp);
	}

	return ret;
}

int SERVER_vms_account_get_users(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_account_get_users req;
	PARAM_RESP_vms_account_get_users resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_account_get_users(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.users)
		{
			int i1;
			cJSON *users = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "users", users);
			for (i1=0;i1<resp.users_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(users, item);
				if (resp.users[i1].name)
				{
					cJSON_AddStringToObject(item, "name", resp.users[i1].name);
				}
				if (resp.users[i1].level)
				{
					cJSON_AddStringToObject(item, "level", resp.users[i1].level);
				}
				if (resp.users[i1].description)
				{
					cJSON_AddStringToObject(item, "description", resp.users[i1].description);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_account_add_user(grpc_t *grpc, PARAM_REQ_vms_account_add_user *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "account_add_user");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		if ((*req).passwd)
		{
			cJSON_AddStringToObject(param, "passwd", (*req).passwd);
		}
		if ((*req).level)
		{
			cJSON_AddStringToObject(param, "level", (*req).level);
		}
		if ((*req).description)
		{
			cJSON_AddStringToObject(param, "description", (*req).description);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_account_add_user(grpc_t *grpc, PARAM_RESP_vms_account_add_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_account_add_user(grpc_t *grpc, PARAM_REQ_vms_account_add_user *req, PARAM_RESP_vms_account_add_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_account_add_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_account_add_user(grpc, resp);
	}

	return ret;
}

int SERVER_vms_account_add_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_account_add_user req;
	PARAM_RESP_vms_account_add_user resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "passwd"));
			req.level = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "level"));
			req.description = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "description"));
		}
	}
	ret = USERDEF_vms_account_add_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_account_del_user(grpc_t *grpc, PARAM_REQ_vms_account_del_user *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "account_del_user");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_account_del_user(grpc_t *grpc, PARAM_RESP_vms_account_del_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_account_del_user(grpc_t *grpc, PARAM_REQ_vms_account_del_user *req, PARAM_RESP_vms_account_del_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_account_del_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_account_del_user(grpc, resp);
	}

	return ret;
}

int SERVER_vms_account_del_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_account_del_user req;
	PARAM_RESP_vms_account_del_user resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
		}
	}
	ret = USERDEF_vms_account_del_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_account_modify_user(grpc_t *grpc, PARAM_REQ_vms_account_modify_user *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "account_modify_user");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		if ((*req).passwd)
		{
			cJSON_AddStringToObject(param, "passwd", (*req).passwd);
		}
		if ((*req).level)
		{
			cJSON_AddStringToObject(param, "level", (*req).level);
		}
		if ((*req).description)
		{
			cJSON_AddStringToObject(param, "description", (*req).description);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_account_modify_user(grpc_t *grpc, PARAM_RESP_vms_account_modify_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_account_modify_user(grpc_t *grpc, PARAM_REQ_vms_account_modify_user *req, PARAM_RESP_vms_account_modify_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_account_modify_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_account_modify_user(grpc, resp);
	}

	return ret;
}

int SERVER_vms_account_modify_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_account_modify_user req;
	PARAM_RESP_vms_account_modify_user resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "passwd"));
			req.level = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "level"));
			req.description = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "description"));
		}
	}
	ret = USERDEF_vms_account_modify_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_alarmin_start(grpc_t *grpc, PARAM_REQ_vms_alarmin_start *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "alarmin_start");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_alarmin_start(grpc_t *grpc, PARAM_RESP_vms_alarmin_start *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_alarmin_start(grpc_t *grpc, PARAM_REQ_vms_alarmin_start *req, PARAM_RESP_vms_alarmin_start *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_alarmin_start(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_alarmin_start(grpc, resp);
	}

	return ret;
}

int SERVER_vms_alarmin_start(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_alarmin_start req;
	PARAM_RESP_vms_alarmin_start resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_alarmin_start(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_alarmin_stop(grpc_t *grpc, PARAM_REQ_vms_alarmin_stop *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "alarmin_stop");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_alarmin_stop(grpc_t *grpc, PARAM_RESP_vms_alarmin_stop *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_alarmin_stop(grpc_t *grpc, PARAM_REQ_vms_alarmin_stop *req, PARAM_RESP_vms_alarmin_stop *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_alarmin_stop(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_alarmin_stop(grpc, resp);
	}

	return ret;
}

int SERVER_vms_alarmin_stop(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_alarmin_stop req;
	PARAM_RESP_vms_alarmin_stop resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_alarmin_stop(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_alarmin_get_param(grpc_t *grpc, PARAM_REQ_vms_alarmin_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "alarmin_get_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_alarmin_get_param(grpc_t *grpc, PARAM_RESP_vms_alarmin_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bEnable = cJSON_GetObjectValueBool(result, "bEnable");
			(*resp).bNormallyClosed = cJSON_GetObjectValueBool(result, "bNormallyClosed");
			(*resp).bEnableRecord = cJSON_GetObjectValueBool(result, "bEnableRecord");
			(*resp).bStarting = cJSON_GetObjectValueBool(result, "bStarting");
			(*resp).bBuzzing = cJSON_GetObjectValueBool(result, "bBuzzing");
			(*resp).bSendtoClient = cJSON_GetObjectValueBool(result, "bSendtoClient");
			(*resp).bSendEmail = cJSON_GetObjectValueBool(result, "bSendEmail");
			(*resp).u8AlarmNum = cJSON_GetObjectValueInt(result, "u8AlarmNum");
			(*resp).nDelay = cJSON_GetObjectValueInt(result, "nDelay");
		}
	}
	return 0;
}

int CLIENT_vms_alarmin_get_param(grpc_t *grpc, PARAM_REQ_vms_alarmin_get_param *req, PARAM_RESP_vms_alarmin_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_alarmin_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_alarmin_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_alarmin_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_alarmin_get_param req;
	PARAM_RESP_vms_alarmin_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_alarmin_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bEnable", resp.bEnable);
		cJSON_AddBoolToObject(result, "bNormallyClosed", resp.bNormallyClosed);
		cJSON_AddBoolToObject(result, "bEnableRecord", resp.bEnableRecord);
		cJSON_AddBoolToObject(result, "bStarting", resp.bStarting);
		cJSON_AddBoolToObject(result, "bBuzzing", resp.bBuzzing);
		cJSON_AddBoolToObject(result, "bSendtoClient", resp.bSendtoClient);
		cJSON_AddBoolToObject(result, "bSendEmail", resp.bSendEmail);
		cJSON_AddNumberToObject(result, "u8AlarmNum", resp.u8AlarmNum);
		cJSON_AddNumberToObject(result, "nDelay", resp.nDelay);
	}
	return 0;
}
int CLIENT_REQ_vms_alarmin_set_param(grpc_t *grpc, PARAM_REQ_vms_alarmin_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "alarmin_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddBoolToObject(param, "bEnable", (*req).bEnable);
		cJSON_AddBoolToObject(param, "bNormallyClosed", (*req).bNormallyClosed);
		cJSON_AddBoolToObject(param, "bEnableRecord", (*req).bEnableRecord);
		cJSON_AddBoolToObject(param, "bStarting", (*req).bStarting);
		cJSON_AddBoolToObject(param, "bBuzzing", (*req).bBuzzing);
		cJSON_AddBoolToObject(param, "bSendtoClient", (*req).bSendtoClient);
		cJSON_AddBoolToObject(param, "bSendEmail", (*req).bSendEmail);
		cJSON_AddNumberToObject(param, "u8AlarmNum", (*req).u8AlarmNum);
		cJSON_AddNumberToObject(param, "nDelay", (*req).nDelay);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_alarmin_set_param(grpc_t *grpc, PARAM_RESP_vms_alarmin_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_alarmin_set_param(grpc_t *grpc, PARAM_REQ_vms_alarmin_set_param *req, PARAM_RESP_vms_alarmin_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_alarmin_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_alarmin_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_alarmin_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_alarmin_set_param req;
	PARAM_RESP_vms_alarmin_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.bEnable = cJSON_GetObjectValueBool(param, "bEnable");
			req.bNormallyClosed = cJSON_GetObjectValueBool(param, "bNormallyClosed");
			req.bEnableRecord = cJSON_GetObjectValueBool(param, "bEnableRecord");
			req.bStarting = cJSON_GetObjectValueBool(param, "bStarting");
			req.bBuzzing = cJSON_GetObjectValueBool(param, "bBuzzing");
			req.bSendtoClient = cJSON_GetObjectValueBool(param, "bSendtoClient");
			req.bSendEmail = cJSON_GetObjectValueBool(param, "bSendEmail");
			req.u8AlarmNum = cJSON_GetObjectValueInt(param, "u8AlarmNum");
			req.nDelay = cJSON_GetObjectValueInt(param, "nDelay");
		}
	}
	ret = USERDEF_vms_alarmin_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_alarmin_b_onduty(grpc_t *grpc, PARAM_REQ_vms_alarmin_b_onduty *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "alarmin_b_onduty");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_alarmin_b_onduty(grpc_t *grpc, PARAM_RESP_vms_alarmin_b_onduty *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bOnduty = cJSON_GetObjectValueBool(result, "bOnduty");
		}
	}
	return 0;
}

int CLIENT_vms_alarmin_b_onduty(grpc_t *grpc, PARAM_REQ_vms_alarmin_b_onduty *req, PARAM_RESP_vms_alarmin_b_onduty *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_alarmin_b_onduty(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_alarmin_b_onduty(grpc, resp);
	}

	return ret;
}

int SERVER_vms_alarmin_b_onduty(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_alarmin_b_onduty req;
	PARAM_RESP_vms_alarmin_b_onduty resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_alarmin_b_onduty(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bOnduty", resp.bOnduty);
	}
	return 0;
}
int CLIENT_REQ_vms_alarmin_b_alarming(grpc_t *grpc, PARAM_REQ_vms_alarmin_b_alarming *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "alarmin_b_alarming");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_alarmin_b_alarming(grpc_t *grpc, PARAM_RESP_vms_alarmin_b_alarming *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bAlarming = cJSON_GetObjectValueBool(result, "bAlarming");
		}
	}
	return 0;
}

int CLIENT_vms_alarmin_b_alarming(grpc_t *grpc, PARAM_REQ_vms_alarmin_b_alarming *req, PARAM_RESP_vms_alarmin_b_alarming *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_alarmin_b_alarming(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_alarmin_b_alarming(grpc, resp);
	}

	return ret;
}

int SERVER_vms_alarmin_b_alarming(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_alarmin_b_alarming req;
	PARAM_RESP_vms_alarmin_b_alarming resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_alarmin_b_alarming(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bAlarming", resp.bAlarming);
	}
	return 0;
}
int CLIENT_REQ_vms_alarm_get_param(grpc_t *grpc, PARAM_REQ_vms_alarm_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "alarm_get_param");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_alarm_get_param(grpc_t *grpc, PARAM_RESP_vms_alarm_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).delay = cJSON_GetObjectValueInt(result, "delay");
			(*resp).port = cJSON_GetObjectValueInt(result, "port");
			(*resp).sender = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "sender"));
			(*resp).server = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "server"));
			(*resp).username = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "username"));
			(*resp).passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "passwd"));
			{
				cJSON *receiver = cJSON_GetObjectItem(result, "receiver");
				if (receiver)
				{
					int i1;
					int cnt = cJSON_GetArraySize(receiver);
					(*resp).receiver_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).receiver = grpc_malloc(grpc, cnt * sizeof((*resp).receiver[0]));
						for (i1=0;i1<cnt;i1++)
						{
							cJSON *item = cJSON_GetArrayItem(receiver, i1);
							(*resp).receiver[i1] = grpc_strdup(grpc, item->valuestring);
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_alarm_get_param(grpc_t *grpc, PARAM_REQ_vms_alarm_get_param *req, PARAM_RESP_vms_alarm_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_alarm_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_alarm_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_alarm_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_alarm_get_param req;
	PARAM_RESP_vms_alarm_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_alarm_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "delay", resp.delay);
		cJSON_AddNumberToObject(result, "port", resp.port);
		if (resp.sender)
		{
			cJSON_AddStringToObject(result, "sender", resp.sender);
		}
		if (resp.server)
		{
			cJSON_AddStringToObject(result, "server", resp.server);
		}
		if (resp.username)
		{
			cJSON_AddStringToObject(result, "username", resp.username);
		}
		if (resp.passwd)
		{
			cJSON_AddStringToObject(result, "passwd", resp.passwd);
		}
		if (resp.receiver)
		{
			int i1;
			cJSON *receiver = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "receiver", receiver);
			for (i1=0;i1<resp.receiver_cnt;i1++)
			{
				if (resp.receiver[i1])
				{
					cJSON_AddStringToArray(receiver, resp.receiver[i1]);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_alarm_set_param(grpc_t *grpc, PARAM_REQ_vms_alarm_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "alarm_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "delay", (*req).delay);
		cJSON_AddNumberToObject(param, "port", (*req).port);
		if ((*req).sender)
		{
			cJSON_AddStringToObject(param, "sender", (*req).sender);
		}
		if ((*req).server)
		{
			cJSON_AddStringToObject(param, "server", (*req).server);
		}
		if ((*req).username)
		{
			cJSON_AddStringToObject(param, "username", (*req).username);
		}
		if ((*req).passwd)
		{
			cJSON_AddStringToObject(param, "passwd", (*req).passwd);
		}
		if ((*req).receiver)
		{
			int i1;
			cJSON *receiver = cJSON_CreateArray();
			cJSON_AddItemToObject(param, "receiver", receiver);
			for (i1=0;i1<(*req).receiver_cnt;i1++)
			{
				if ((*req).receiver[i1])
				{
					cJSON_AddStringToArray(receiver, (*req).receiver[i1]);
				}
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_alarm_set_param(grpc_t *grpc, PARAM_RESP_vms_alarm_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_alarm_set_param(grpc_t *grpc, PARAM_REQ_vms_alarm_set_param *req, PARAM_RESP_vms_alarm_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_alarm_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_alarm_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_alarm_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_alarm_set_param req;
	PARAM_RESP_vms_alarm_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.delay = cJSON_GetObjectValueInt(param, "delay");
			req.port = cJSON_GetObjectValueInt(param, "port");
			req.sender = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "sender"));
			req.server = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "server"));
			req.username = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "username"));
			req.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "passwd"));
			{
				cJSON *receiver = cJSON_GetObjectItem(param, "receiver");
				if (receiver)
				{
					int i1;
					int cnt = cJSON_GetArraySize(receiver);
					req.receiver_cnt = cnt;
					if (cnt > 0)
					{
						req.receiver = grpc_malloc(grpc, cnt * sizeof(req.receiver[0]));
						for (i1=0;i1<cnt;i1++)
						{
							cJSON *item = cJSON_GetArrayItem(receiver, i1);
							req.receiver[i1] = grpc_strdup(grpc, item->valuestring);
						}
					}
				}
			}
		}
	}
	ret = USERDEF_vms_alarm_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ai_get_param(grpc_t *grpc, PARAM_REQ_vms_ai_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ai_get_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ai_get_param(grpc_t *grpc, PARAM_RESP_vms_ai_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).sampleRate = cJSON_GetObjectValueInt(result, "sampleRate");
			(*resp).bitWidth = cJSON_GetObjectValueInt(result, "bitWidth");
			(*resp).encType = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "encType"));
		}
	}
	return 0;
}

int CLIENT_vms_ai_get_param(grpc_t *grpc, PARAM_REQ_vms_ai_get_param *req, PARAM_RESP_vms_ai_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ai_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ai_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ai_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ai_get_param req;
	PARAM_RESP_vms_ai_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_ai_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "sampleRate", resp.sampleRate);
		cJSON_AddNumberToObject(result, "bitWidth", resp.bitWidth);
		if (resp.encType)
		{
			cJSON_AddStringToObject(result, "encType", resp.encType);
		}
	}
	return 0;
}
int CLIENT_REQ_vms_ai_set_param(grpc_t *grpc, PARAM_REQ_vms_ai_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ai_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		{
			cJSON *audioAttr = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "audioAttr", audioAttr);
			cJSON_AddNumberToObject(audioAttr, "sampleRate", (*req).audioAttr.sampleRate);
			cJSON_AddNumberToObject(audioAttr, "bitWidth", (*req).audioAttr.bitWidth);
			if ((*req).audioAttr.encType)
			{
				cJSON_AddStringToObject(audioAttr, "encType", (*req).audioAttr.encType);
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ai_set_param(grpc_t *grpc, PARAM_RESP_vms_ai_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ai_set_param(grpc_t *grpc, PARAM_REQ_vms_ai_set_param *req, PARAM_RESP_vms_ai_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ai_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ai_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ai_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ai_set_param req;
	PARAM_RESP_vms_ai_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			{
				cJSON *audioAttr = cJSON_GetObjectItem(param, "audioAttr");
				if (audioAttr)
				{
					req.audioAttr.sampleRate = cJSON_GetObjectValueInt(audioAttr, "sampleRate");
					req.audioAttr.bitWidth = cJSON_GetObjectValueInt(audioAttr, "bitWidth");
					req.audioAttr.encType = grpc_strdup(grpc, cJSON_GetObjectValueString(audioAttr, "encType"));
				}
			}
		}
	}
	ret = USERDEF_vms_ai_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ao_get_param(grpc_t *grpc, PARAM_REQ_vms_ao_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ao_get_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ao_get_param(grpc_t *grpc, PARAM_RESP_vms_ao_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).sampleRate = cJSON_GetObjectValueInt(result, "sampleRate");
			(*resp).bitWidth = cJSON_GetObjectValueInt(result, "bitWidth");
			(*resp).encType = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "encType"));
		}
	}
	return 0;
}

int CLIENT_vms_ao_get_param(grpc_t *grpc, PARAM_REQ_vms_ao_get_param *req, PARAM_RESP_vms_ao_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ao_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ao_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ao_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ao_get_param req;
	PARAM_RESP_vms_ao_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_ao_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "sampleRate", resp.sampleRate);
		cJSON_AddNumberToObject(result, "bitWidth", resp.bitWidth);
		if (resp.encType)
		{
			cJSON_AddStringToObject(result, "encType", resp.encType);
		}
	}
	return 0;
}
int CLIENT_REQ_vms_ao_set_param(grpc_t *grpc, PARAM_REQ_vms_ao_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ao_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		{
			cJSON *audioAttr = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "audioAttr", audioAttr);
			cJSON_AddNumberToObject(audioAttr, "sampleRate", (*req).audioAttr.sampleRate);
			cJSON_AddNumberToObject(audioAttr, "bitWidth", (*req).audioAttr.bitWidth);
			if ((*req).audioAttr.encType)
			{
				cJSON_AddStringToObject(audioAttr, "encType", (*req).audioAttr.encType);
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ao_set_param(grpc_t *grpc, PARAM_RESP_vms_ao_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ao_set_param(grpc_t *grpc, PARAM_REQ_vms_ao_set_param *req, PARAM_RESP_vms_ao_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ao_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ao_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ao_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ao_set_param req;
	PARAM_RESP_vms_ao_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			{
				cJSON *audioAttr = cJSON_GetObjectItem(param, "audioAttr");
				if (audioAttr)
				{
					req.audioAttr.sampleRate = cJSON_GetObjectValueInt(audioAttr, "sampleRate");
					req.audioAttr.bitWidth = cJSON_GetObjectValueInt(audioAttr, "bitWidth");
					req.audioAttr.encType = grpc_strdup(grpc, cJSON_GetObjectValueString(audioAttr, "encType"));
				}
			}
		}
	}
	ret = USERDEF_vms_ao_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_connection_get_list(grpc_t *grpc, PARAM_REQ_vms_connection_get_list *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "connection_get_list");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).conType)
		{
			cJSON_AddStringToObject(param, "conType", (*req).conType);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_connection_get_list(grpc_t *grpc, PARAM_RESP_vms_connection_get_list *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *connectionList = cJSON_GetObjectItem(result, "connectionList");
				if (connectionList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(connectionList);
					(*resp).connectionList_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).connectionList = grpc_malloc(grpc, cnt * sizeof((*resp).connectionList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(connectionList, i1);
								if (item)
								{
									(*resp).connectionList[i1].conType = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "conType"));
									(*resp).connectionList[i1].key = cJSON_GetObjectValueInt(item, "key");
									(*resp).connectionList[i1].addr = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "addr"));
									(*resp).connectionList[i1].user = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "user"));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_connection_get_list(grpc_t *grpc, PARAM_REQ_vms_connection_get_list *req, PARAM_RESP_vms_connection_get_list *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_connection_get_list(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_connection_get_list(grpc, resp);
	}

	return ret;
}

int SERVER_vms_connection_get_list(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_connection_get_list req;
	PARAM_RESP_vms_connection_get_list resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.conType = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "conType"));
		}
	}
	ret = USERDEF_vms_connection_get_list(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.connectionList)
		{
			int i1;
			cJSON *connectionList = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "connectionList", connectionList);
			for (i1=0;i1<resp.connectionList_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(connectionList, item);
				if (resp.connectionList[i1].conType)
				{
					cJSON_AddStringToObject(item, "conType", resp.connectionList[i1].conType);
				}
				cJSON_AddNumberToObject(item, "key", resp.connectionList[i1].key);
				if (resp.connectionList[i1].addr)
				{
					cJSON_AddStringToObject(item, "addr", resp.connectionList[i1].addr);
				}
				if (resp.connectionList[i1].user)
				{
					cJSON_AddStringToObject(item, "user", resp.connectionList[i1].user);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_connection_breakoff(grpc_t *grpc, PARAM_REQ_vms_connection_breakoff *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "connection_breakoff");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).connectionList)
		{
			int i1;
			cJSON *connectionList = cJSON_CreateArray();
			cJSON_AddItemToObject(param, "connectionList", connectionList);
			for (i1=0;i1<(*req).connectionList_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(connectionList, item);
				if ((*req).connectionList[i1].conType)
				{
					cJSON_AddStringToObject(item, "conType", (*req).connectionList[i1].conType);
				}
				cJSON_AddNumberToObject(item, "key", (*req).connectionList[i1].key);
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_connection_breakoff(grpc_t *grpc, PARAM_RESP_vms_connection_breakoff *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_connection_breakoff(grpc_t *grpc, PARAM_REQ_vms_connection_breakoff *req, PARAM_RESP_vms_connection_breakoff *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_connection_breakoff(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_connection_breakoff(grpc, resp);
	}

	return ret;
}

int SERVER_vms_connection_breakoff(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_connection_breakoff req;
	PARAM_RESP_vms_connection_breakoff resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			{
				cJSON *connectionList = cJSON_GetObjectItem(param, "connectionList");
				if (connectionList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(connectionList);
					req.connectionList_cnt = cnt;
					if (cnt > 0)
					{
						req.connectionList = grpc_malloc(grpc, cnt * sizeof(req.connectionList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(connectionList, i1);
								if (item)
								{
									req.connectionList[i1].conType = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "conType"));
									req.connectionList[i1].key = cJSON_GetObjectValueInt(item, "key");
								}
							}
						}
					}
				}
			}
		}
	}
	ret = USERDEF_vms_connection_breakoff(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vms_dev_get_hwinfo *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_get_hwinfo");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_get_hwinfo(grpc_t *grpc, PARAM_RESP_vms_dev_get_hwinfo *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).type = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "type"));
			(*resp).hardware = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "hardware"));
			(*resp).sn = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "sn"));
			(*resp).firmware = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "firmware"));
			(*resp).manufacture = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "manufacture"));
			(*resp).model = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "model"));
			(*resp).bPtzSupport = cJSON_GetObjectValueBool(result, "bPtzSupport");
			(*resp).bWifiSupport = cJSON_GetObjectValueBool(result, "bWifiSupport");
			(*resp).channelCnt = cJSON_GetObjectValueInt(result, "channelCnt");
			(*resp).streamCnt = cJSON_GetObjectValueInt(result, "streamCnt");
			(*resp).ystID = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "ystID"));
		}
	}
	return 0;
}

int CLIENT_vms_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vms_dev_get_hwinfo *req, PARAM_RESP_vms_dev_get_hwinfo *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_get_hwinfo(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_get_hwinfo(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_get_hwinfo(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_get_hwinfo req;
	PARAM_RESP_vms_dev_get_hwinfo resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_dev_get_hwinfo(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.type)
		{
			cJSON_AddStringToObject(result, "type", resp.type);
		}
		if (resp.hardware)
		{
			cJSON_AddStringToObject(result, "hardware", resp.hardware);
		}
		if (resp.sn)
		{
			cJSON_AddStringToObject(result, "sn", resp.sn);
		}
		if (resp.firmware)
		{
			cJSON_AddStringToObject(result, "firmware", resp.firmware);
		}
		if (resp.manufacture)
		{
			cJSON_AddStringToObject(result, "manufacture", resp.manufacture);
		}
		if (resp.model)
		{
			cJSON_AddStringToObject(result, "model", resp.model);
		}
		cJSON_AddBoolToObject(result, "bPtzSupport", resp.bPtzSupport);
		cJSON_AddBoolToObject(result, "bWifiSupport", resp.bWifiSupport);
		cJSON_AddNumberToObject(result, "channelCnt", resp.channelCnt);
		cJSON_AddNumberToObject(result, "streamCnt", resp.streamCnt);
		if (resp.ystID)
		{
			cJSON_AddStringToObject(result, "ystID", resp.ystID);
		}
	}
	return 0;
}
int CLIENT_REQ_vms_dev_get_info(grpc_t *grpc, PARAM_REQ_vms_dev_get_info *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_get_info");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_get_info(grpc_t *grpc, PARAM_RESP_vms_dev_get_info *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bDiscoverable = cJSON_GetObjectValueBool(result, "bDiscoverable");
			(*resp).hostname = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "hostname"));
			(*resp).name = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "name"));
			(*resp).rebootDay = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "rebootDay"));
			(*resp).rebootHour = cJSON_GetObjectValueInt(result, "rebootHour");
		}
	}
	return 0;
}

int CLIENT_vms_dev_get_info(grpc_t *grpc, PARAM_REQ_vms_dev_get_info *req, PARAM_RESP_vms_dev_get_info *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_get_info(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_get_info(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_get_info(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_get_info req;
	PARAM_RESP_vms_dev_get_info resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_dev_get_info(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bDiscoverable", resp.bDiscoverable);
		if (resp.hostname)
		{
			cJSON_AddStringToObject(result, "hostname", resp.hostname);
		}
		if (resp.name)
		{
			cJSON_AddStringToObject(result, "name", resp.name);
		}
		if (resp.rebootDay)
		{
			cJSON_AddStringToObject(result, "rebootDay", resp.rebootDay);
		}
		cJSON_AddNumberToObject(result, "rebootHour", resp.rebootHour);
	}
	return 0;
}
int CLIENT_REQ_vms_dev_set_info(grpc_t *grpc, PARAM_REQ_vms_dev_set_info *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_set_info");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddBoolToObject(param, "bDiscoverable", (*req).bDiscoverable);
		if ((*req).hostname)
		{
			cJSON_AddStringToObject(param, "hostname", (*req).hostname);
		}
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		if ((*req).rebootDay)
		{
			cJSON_AddStringToObject(param, "rebootDay", (*req).rebootDay);
		}
		cJSON_AddNumberToObject(param, "rebootHour", (*req).rebootHour);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_set_info(grpc_t *grpc, PARAM_RESP_vms_dev_set_info *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_dev_set_info(grpc_t *grpc, PARAM_REQ_vms_dev_set_info *req, PARAM_RESP_vms_dev_set_info *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_set_info(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_set_info(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_set_info(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_set_info req;
	PARAM_RESP_vms_dev_set_info resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.bDiscoverable = cJSON_GetObjectValueBool(param, "bDiscoverable");
			req.hostname = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "hostname"));
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.rebootDay = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "rebootDay"));
			req.rebootHour = cJSON_GetObjectValueInt(param, "rebootHour");
		}
	}
	ret = USERDEF_vms_dev_set_info(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_dev_stime(grpc_t *grpc, PARAM_REQ_vms_dev_stime *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_stime");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "tmsec", (*req).tmsec);
		if ((*req).tz)
		{
			cJSON_AddStringToObject(param, "tz", (*req).tz);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_stime(grpc_t *grpc, PARAM_RESP_vms_dev_stime *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_dev_stime(grpc_t *grpc, PARAM_REQ_vms_dev_stime *req, PARAM_RESP_vms_dev_stime *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_stime(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_stime(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_stime(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_stime req;
	PARAM_RESP_vms_dev_stime resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.tmsec = cJSON_GetObjectValueInt(param, "tmsec");
			req.tz = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "tz"));
		}
	}
	ret = USERDEF_vms_dev_stime(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_dev_gtime(grpc_t *grpc, PARAM_REQ_vms_dev_gtime *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_gtime");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_gtime(grpc_t *grpc, PARAM_RESP_vms_dev_gtime *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).tmsec = cJSON_GetObjectValueInt(result, "tmsec");
			(*resp).tz = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "tz"));
		}
	}
	return 0;
}

int CLIENT_vms_dev_gtime(grpc_t *grpc, PARAM_REQ_vms_dev_gtime *req, PARAM_RESP_vms_dev_gtime *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_gtime(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_gtime(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_gtime(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_gtime req;
	PARAM_RESP_vms_dev_gtime resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_dev_gtime(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "tmsec", resp.tmsec);
		if (resp.tz)
		{
			cJSON_AddStringToObject(result, "tz", resp.tz);
		}
	}
	return 0;
}
int CLIENT_REQ_vms_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vms_dev_ntp_set *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_ntp_set");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddBoolToObject(param, "bEnableNtp", (*req).bEnableNtp);
		cJSON_AddNumberToObject(param, "sntpInterval", (*req).sntpInterval);
		if ((*req).servers)
		{
			int i1;
			cJSON *servers = cJSON_CreateArray();
			cJSON_AddItemToObject(param, "servers", servers);
			for (i1=0;i1<(*req).servers_cnt;i1++)
			{
				if ((*req).servers[i1])
				{
					cJSON_AddStringToArray(servers, (*req).servers[i1]);
				}
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_ntp_set(grpc_t *grpc, PARAM_RESP_vms_dev_ntp_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vms_dev_ntp_set *req, PARAM_RESP_vms_dev_ntp_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_ntp_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_ntp_set(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_ntp_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_ntp_set req;
	PARAM_RESP_vms_dev_ntp_set resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.bEnableNtp = cJSON_GetObjectValueBool(param, "bEnableNtp");
			req.sntpInterval = cJSON_GetObjectValueInt(param, "sntpInterval");
			{
				cJSON *servers = cJSON_GetObjectItem(param, "servers");
				if (servers)
				{
					int i1;
					int cnt = cJSON_GetArraySize(servers);
					req.servers_cnt = cnt;
					if (cnt > 0)
					{
						req.servers = grpc_malloc(grpc, cnt * sizeof(req.servers[0]));
						for (i1=0;i1<cnt;i1++)
						{
							cJSON *item = cJSON_GetArrayItem(servers, i1);
							req.servers[i1] = grpc_strdup(grpc, item->valuestring);
						}
					}
				}
			}
		}
	}
	ret = USERDEF_vms_dev_ntp_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vms_dev_ntp_get *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_ntp_get");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_ntp_get(grpc_t *grpc, PARAM_RESP_vms_dev_ntp_get *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bEnableNtp = cJSON_GetObjectValueBool(result, "bEnableNtp");
			(*resp).sntpInterval = cJSON_GetObjectValueInt(result, "sntpInterval");
			{
				cJSON *servers = cJSON_GetObjectItem(result, "servers");
				if (servers)
				{
					int i1;
					int cnt = cJSON_GetArraySize(servers);
					(*resp).servers_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).servers = grpc_malloc(grpc, cnt * sizeof((*resp).servers[0]));
						for (i1=0;i1<cnt;i1++)
						{
							cJSON *item = cJSON_GetArrayItem(servers, i1);
							(*resp).servers[i1] = grpc_strdup(grpc, item->valuestring);
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vms_dev_ntp_get *req, PARAM_RESP_vms_dev_ntp_get *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_ntp_get(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_ntp_get(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_ntp_get(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_ntp_get req;
	PARAM_RESP_vms_dev_ntp_get resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_dev_ntp_get(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bEnableNtp", resp.bEnableNtp);
		cJSON_AddNumberToObject(result, "sntpInterval", resp.sntpInterval);
		if (resp.servers)
		{
			int i1;
			cJSON *servers = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "servers", servers);
			for (i1=0;i1<resp.servers_cnt;i1++)
			{
				if (resp.servers[i1])
				{
					cJSON_AddStringToArray(servers, resp.servers[i1]);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_dev_reboot(grpc_t *grpc, PARAM_REQ_vms_dev_reboot *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_reboot");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "delaymSec", (*req).delaymSec);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_reboot(grpc_t *grpc, PARAM_RESP_vms_dev_reboot *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_dev_reboot(grpc_t *grpc, PARAM_REQ_vms_dev_reboot *req, PARAM_RESP_vms_dev_reboot *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_reboot(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_reboot(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_reboot(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_reboot req;
	PARAM_RESP_vms_dev_reboot resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.delaymSec = cJSON_GetObjectValueInt(param, "delaymSec");
		}
	}
	ret = USERDEF_vms_dev_reboot(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_dev_factory_default(grpc_t *grpc, PARAM_REQ_vms_dev_factory_default *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_factory_default");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddBoolToObject(param, "bHard", (*req).bHard);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_dev_factory_default(grpc_t *grpc, PARAM_RESP_vms_dev_factory_default *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_dev_factory_default(grpc_t *grpc, PARAM_REQ_vms_dev_factory_default *req, PARAM_RESP_vms_dev_factory_default *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_dev_factory_default(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_dev_factory_default(grpc, resp);
	}

	return ret;
}

int SERVER_vms_dev_factory_default(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_dev_factory_default req;
	PARAM_RESP_vms_dev_factory_default resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.bHard = cJSON_GetObjectValueBool(param, "bHard");
		}
	}
	ret = USERDEF_vms_dev_factory_default(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vms_ifconfig_get_inet *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ifconfig_get_inet");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ifconfig_get_inet(grpc_t *grpc, PARAM_RESP_vms_ifconfig_get_inet *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).iface = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "iface"));
			{
				cJSON *eth = cJSON_GetObjectItem(result, "eth");
				if (eth)
				{
					(*resp).eth.name = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "name"));
					(*resp).eth.bDHCP = cJSON_GetObjectValueBool(eth, "bDHCP");
					(*resp).eth.addr = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "addr"));
					(*resp).eth.mask = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "mask"));
					(*resp).eth.gateway = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "gateway"));
					(*resp).eth.mac = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "mac"));
					(*resp).eth.dns = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "dns"));
				}
			}
			{
				cJSON *ppp = cJSON_GetObjectItem(result, "ppp");
				if (ppp)
				{
					(*resp).ppp.name = grpc_strdup(grpc, cJSON_GetObjectValueString(ppp, "name"));
					(*resp).ppp.username = grpc_strdup(grpc, cJSON_GetObjectValueString(ppp, "username"));
					(*resp).ppp.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(ppp, "passwd"));
				}
			}
			{
				cJSON *wifi = cJSON_GetObjectItem(result, "wifi");
				if (wifi)
				{
					(*resp).wifi.name = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "name"));
					(*resp).wifi.quality = cJSON_GetObjectValueInt(wifi, "quality");
					(*resp).wifi.keystat = cJSON_GetObjectValueInt(wifi, "keystat");
					(*resp).wifi.iestat = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "iestat"));
					(*resp).wifi.bDHCP = cJSON_GetObjectValueBool(wifi, "bDHCP");
					(*resp).wifi.addr = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "addr"));
					(*resp).wifi.mask = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "mask"));
					(*resp).wifi.gateway = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "gateway"));
					(*resp).wifi.mac = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "mac"));
					(*resp).wifi.dns = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "dns"));
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vms_ifconfig_get_inet *req, PARAM_RESP_vms_ifconfig_get_inet *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ifconfig_get_inet(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ifconfig_get_inet(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ifconfig_get_inet(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ifconfig_get_inet req;
	PARAM_RESP_vms_ifconfig_get_inet resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_ifconfig_get_inet(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.iface)
		{
			cJSON_AddStringToObject(result, "iface", resp.iface);
		}
		{
			cJSON *eth = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "eth", eth);
			if (resp.eth.name)
			{
				cJSON_AddStringToObject(eth, "name", resp.eth.name);
			}
			cJSON_AddBoolToObject(eth, "bDHCP", resp.eth.bDHCP);
			if (resp.eth.addr)
			{
				cJSON_AddStringToObject(eth, "addr", resp.eth.addr);
			}
			if (resp.eth.mask)
			{
				cJSON_AddStringToObject(eth, "mask", resp.eth.mask);
			}
			if (resp.eth.gateway)
			{
				cJSON_AddStringToObject(eth, "gateway", resp.eth.gateway);
			}
			if (resp.eth.mac)
			{
				cJSON_AddStringToObject(eth, "mac", resp.eth.mac);
			}
			if (resp.eth.dns)
			{
				cJSON_AddStringToObject(eth, "dns", resp.eth.dns);
			}
		}
		{
			cJSON *ppp = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "ppp", ppp);
			if (resp.ppp.name)
			{
				cJSON_AddStringToObject(ppp, "name", resp.ppp.name);
			}
			if (resp.ppp.username)
			{
				cJSON_AddStringToObject(ppp, "username", resp.ppp.username);
			}
			if (resp.ppp.passwd)
			{
				cJSON_AddStringToObject(ppp, "passwd", resp.ppp.passwd);
			}
		}
		{
			cJSON *wifi = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "wifi", wifi);
			if (resp.wifi.name)
			{
				cJSON_AddStringToObject(wifi, "name", resp.wifi.name);
			}
			cJSON_AddNumberToObject(wifi, "quality", resp.wifi.quality);
			cJSON_AddNumberToObject(wifi, "keystat", resp.wifi.keystat);
			if (resp.wifi.iestat)
			{
				cJSON_AddStringToObject(wifi, "iestat", resp.wifi.iestat);
			}
			cJSON_AddBoolToObject(wifi, "bDHCP", resp.wifi.bDHCP);
			if (resp.wifi.addr)
			{
				cJSON_AddStringToObject(wifi, "addr", resp.wifi.addr);
			}
			if (resp.wifi.mask)
			{
				cJSON_AddStringToObject(wifi, "mask", resp.wifi.mask);
			}
			if (resp.wifi.gateway)
			{
				cJSON_AddStringToObject(wifi, "gateway", resp.wifi.gateway);
			}
			if (resp.wifi.mac)
			{
				cJSON_AddStringToObject(wifi, "mac", resp.wifi.mac);
			}
			if (resp.wifi.dns)
			{
				cJSON_AddStringToObject(wifi, "dns", resp.wifi.dns);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vms_ifconfig_eth_set *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ifconfig_eth_set");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		cJSON_AddBoolToObject(param, "bDHCP", (*req).bDHCP);
		if ((*req).addr)
		{
			cJSON_AddStringToObject(param, "addr", (*req).addr);
		}
		if ((*req).mask)
		{
			cJSON_AddStringToObject(param, "mask", (*req).mask);
		}
		if ((*req).gateway)
		{
			cJSON_AddStringToObject(param, "gateway", (*req).gateway);
		}
		if ((*req).dns)
		{
			cJSON_AddStringToObject(param, "dns", (*req).dns);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ifconfig_eth_set(grpc_t *grpc, PARAM_RESP_vms_ifconfig_eth_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vms_ifconfig_eth_set *req, PARAM_RESP_vms_ifconfig_eth_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ifconfig_eth_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ifconfig_eth_set(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ifconfig_eth_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ifconfig_eth_set req;
	PARAM_RESP_vms_ifconfig_eth_set resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.bDHCP = cJSON_GetObjectValueBool(param, "bDHCP");
			req.addr = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "addr"));
			req.mask = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "mask"));
			req.gateway = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "gateway"));
			req.dns = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "dns"));
		}
	}
	ret = USERDEF_vms_ifconfig_eth_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vms_ifconfig_ppp_set *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ifconfig_ppp_set");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		if ((*req).username)
		{
			cJSON_AddStringToObject(param, "username", (*req).username);
		}
		if ((*req).passwd)
		{
			cJSON_AddStringToObject(param, "passwd", (*req).passwd);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ifconfig_ppp_set(grpc_t *grpc, PARAM_RESP_vms_ifconfig_ppp_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vms_ifconfig_ppp_set *req, PARAM_RESP_vms_ifconfig_ppp_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ifconfig_ppp_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ifconfig_ppp_set(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ifconfig_ppp_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ifconfig_ppp_set req;
	PARAM_RESP_vms_ifconfig_ppp_set resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.username = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "username"));
			req.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "passwd"));
		}
	}
	ret = USERDEF_vms_ifconfig_ppp_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vms_ifconfig_wifi_connect *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ifconfig_wifi_connect");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		if ((*req).passwd)
		{
			cJSON_AddStringToObject(param, "passwd", (*req).passwd);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ifconfig_wifi_connect(grpc_t *grpc, PARAM_RESP_vms_ifconfig_wifi_connect *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vms_ifconfig_wifi_connect *req, PARAM_RESP_vms_ifconfig_wifi_connect *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ifconfig_wifi_connect(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ifconfig_wifi_connect(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ifconfig_wifi_connect(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ifconfig_wifi_connect req;
	PARAM_RESP_vms_ifconfig_wifi_connect resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "passwd"));
		}
	}
	ret = USERDEF_vms_ifconfig_wifi_connect(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vms_ifconfig_wifi_list_ap *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ifconfig_wifi_list_ap");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddBoolToObject(param, "bResearch", (*req).bResearch);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_RESP_vms_ifconfig_wifi_list_ap *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *apList = cJSON_GetObjectItem(result, "apList");
				if (apList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(apList);
					(*resp).apList_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).apList = grpc_malloc(grpc, cnt * sizeof((*resp).apList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(apList, i1);
								if (item)
								{
									(*resp).apList[i1].name = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "name"));
									(*resp).apList[i1].passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "passwd"));
									(*resp).apList[i1].quality = cJSON_GetObjectValueInt(item, "quality");
									(*resp).apList[i1].keystat = cJSON_GetObjectValueInt(item, "keystat");
									(*resp).apList[i1].iestat = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "iestat"));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vms_ifconfig_wifi_list_ap *req, PARAM_RESP_vms_ifconfig_wifi_list_ap *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ifconfig_wifi_list_ap(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ifconfig_wifi_list_ap(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ifconfig_wifi_list_ap(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ifconfig_wifi_list_ap req;
	PARAM_RESP_vms_ifconfig_wifi_list_ap resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.bResearch = cJSON_GetObjectValueBool(param, "bResearch");
		}
	}
	ret = USERDEF_vms_ifconfig_wifi_list_ap(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.apList)
		{
			int i1;
			cJSON *apList = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "apList", apList);
			for (i1=0;i1<resp.apList_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(apList, item);
				if (resp.apList[i1].name)
				{
					cJSON_AddStringToObject(item, "name", resp.apList[i1].name);
				}
				if (resp.apList[i1].passwd)
				{
					cJSON_AddStringToObject(item, "passwd", resp.apList[i1].passwd);
				}
				cJSON_AddNumberToObject(item, "quality", resp.apList[i1].quality);
				cJSON_AddNumberToObject(item, "keystat", resp.apList[i1].keystat);
				if (resp.apList[i1].iestat)
				{
					cJSON_AddStringToObject(item, "iestat", resp.apList[i1].iestat);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_image_get_param(grpc_t *grpc, PARAM_REQ_vms_image_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "image_get_param");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_image_get_param(grpc_t *grpc, PARAM_RESP_vms_image_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).contrast = cJSON_GetObjectValueInt(result, "contrast");
			(*resp).brightness = cJSON_GetObjectValueInt(result, "brightness");
			(*resp).saturation = cJSON_GetObjectValueInt(result, "saturation");
			(*resp).sharpen = cJSON_GetObjectValueInt(result, "sharpen");
			(*resp).exposureMax = cJSON_GetObjectValueInt(result, "exposureMax");
			(*resp).exposureMin = cJSON_GetObjectValueInt(result, "exposureMin");
			(*resp).scene = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "scene"));
			(*resp).daynightMode = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "daynightMode"));
			{
				cJSON *dayStart = cJSON_GetObjectItem(result, "dayStart");
				if (dayStart)
				{
					(*resp).dayStart.hour = cJSON_GetObjectValueInt(dayStart, "hour");
					(*resp).dayStart.minute = cJSON_GetObjectValueInt(dayStart, "minute");
				}
			}
			{
				cJSON *dayEnd = cJSON_GetObjectItem(result, "dayEnd");
				if (dayEnd)
				{
					(*resp).dayEnd.hour = cJSON_GetObjectValueInt(dayEnd, "hour");
					(*resp).dayEnd.minute = cJSON_GetObjectValueInt(dayEnd, "minute");
				}
			}
			(*resp).bEnableAWB = cJSON_GetObjectValueBool(result, "bEnableAWB");
			(*resp).bEnableMI = cJSON_GetObjectValueBool(result, "bEnableMI");
			(*resp).bEnableST = cJSON_GetObjectValueBool(result, "bEnableST");
			(*resp).bEnableNoC = cJSON_GetObjectValueBool(result, "bEnableNoC");
			(*resp).bEnableWDynamic = cJSON_GetObjectValueBool(result, "bEnableWDynamic");
			(*resp).bAutoLowFrameEn = cJSON_GetObjectValueBool(result, "bAutoLowFrameEn");
			(*resp).bNightOptimization = cJSON_GetObjectValueBool(result, "bNightOptimization");
		}
	}
	return 0;
}

int CLIENT_vms_image_get_param(grpc_t *grpc, PARAM_REQ_vms_image_get_param *req, PARAM_RESP_vms_image_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_image_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_image_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_image_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_image_get_param req;
	PARAM_RESP_vms_image_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_image_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "contrast", resp.contrast);
		cJSON_AddNumberToObject(result, "brightness", resp.brightness);
		cJSON_AddNumberToObject(result, "saturation", resp.saturation);
		cJSON_AddNumberToObject(result, "sharpen", resp.sharpen);
		cJSON_AddNumberToObject(result, "exposureMax", resp.exposureMax);
		cJSON_AddNumberToObject(result, "exposureMin", resp.exposureMin);
		if (resp.scene)
		{
			cJSON_AddStringToObject(result, "scene", resp.scene);
		}
		if (resp.daynightMode)
		{
			cJSON_AddStringToObject(result, "daynightMode", resp.daynightMode);
		}
		{
			cJSON *dayStart = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "dayStart", dayStart);
			cJSON_AddNumberToObject(dayStart, "hour", resp.dayStart.hour);
			cJSON_AddNumberToObject(dayStart, "minute", resp.dayStart.minute);
		}
		{
			cJSON *dayEnd = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "dayEnd", dayEnd);
			cJSON_AddNumberToObject(dayEnd, "hour", resp.dayEnd.hour);
			cJSON_AddNumberToObject(dayEnd, "minute", resp.dayEnd.minute);
		}
		cJSON_AddBoolToObject(result, "bEnableAWB", resp.bEnableAWB);
		cJSON_AddBoolToObject(result, "bEnableMI", resp.bEnableMI);
		cJSON_AddBoolToObject(result, "bEnableST", resp.bEnableST);
		cJSON_AddBoolToObject(result, "bEnableNoC", resp.bEnableNoC);
		cJSON_AddBoolToObject(result, "bEnableWDynamic", resp.bEnableWDynamic);
		cJSON_AddBoolToObject(result, "bAutoLowFrameEn", resp.bAutoLowFrameEn);
		cJSON_AddBoolToObject(result, "bNightOptimization", resp.bNightOptimization);
	}
	return 0;
}
int CLIENT_REQ_vms_image_set_param(grpc_t *grpc, PARAM_REQ_vms_image_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "image_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "contrast", (*req).contrast);
		cJSON_AddNumberToObject(param, "brightness", (*req).brightness);
		cJSON_AddNumberToObject(param, "saturation", (*req).saturation);
		cJSON_AddNumberToObject(param, "sharpen", (*req).sharpen);
		cJSON_AddNumberToObject(param, "exposureMax", (*req).exposureMax);
		cJSON_AddNumberToObject(param, "exposureMin", (*req).exposureMin);
		if ((*req).scene)
		{
			cJSON_AddStringToObject(param, "scene", (*req).scene);
		}
		if ((*req).daynightMode)
		{
			cJSON_AddStringToObject(param, "daynightMode", (*req).daynightMode);
		}
		{
			cJSON *dayStart = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "dayStart", dayStart);
			cJSON_AddNumberToObject(dayStart, "hour", (*req).dayStart.hour);
			cJSON_AddNumberToObject(dayStart, "minute", (*req).dayStart.minute);
		}
		{
			cJSON *dayEnd = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "dayEnd", dayEnd);
			cJSON_AddNumberToObject(dayEnd, "hour", (*req).dayEnd.hour);
			cJSON_AddNumberToObject(dayEnd, "minute", (*req).dayEnd.minute);
		}
		cJSON_AddBoolToObject(param, "bEnableAWB", (*req).bEnableAWB);
		cJSON_AddBoolToObject(param, "bEnableMI", (*req).bEnableMI);
		cJSON_AddBoolToObject(param, "bEnableST", (*req).bEnableST);
		cJSON_AddBoolToObject(param, "bEnableNoC", (*req).bEnableNoC);
		cJSON_AddBoolToObject(param, "bEnableWDynamic", (*req).bEnableWDynamic);
		cJSON_AddBoolToObject(param, "bAutoLowFrameEn", (*req).bAutoLowFrameEn);
		cJSON_AddBoolToObject(param, "bNightOptimization", (*req).bNightOptimization);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_image_set_param(grpc_t *grpc, PARAM_RESP_vms_image_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_image_set_param(grpc_t *grpc, PARAM_REQ_vms_image_set_param *req, PARAM_RESP_vms_image_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_image_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_image_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_image_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_image_set_param req;
	PARAM_RESP_vms_image_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.contrast = cJSON_GetObjectValueInt(param, "contrast");
			req.brightness = cJSON_GetObjectValueInt(param, "brightness");
			req.saturation = cJSON_GetObjectValueInt(param, "saturation");
			req.sharpen = cJSON_GetObjectValueInt(param, "sharpen");
			req.exposureMax = cJSON_GetObjectValueInt(param, "exposureMax");
			req.exposureMin = cJSON_GetObjectValueInt(param, "exposureMin");
			req.scene = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "scene"));
			req.daynightMode = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "daynightMode"));
			{
				cJSON *dayStart = cJSON_GetObjectItem(param, "dayStart");
				if (dayStart)
				{
					req.dayStart.hour = cJSON_GetObjectValueInt(dayStart, "hour");
					req.dayStart.minute = cJSON_GetObjectValueInt(dayStart, "minute");
				}
			}
			{
				cJSON *dayEnd = cJSON_GetObjectItem(param, "dayEnd");
				if (dayEnd)
				{
					req.dayEnd.hour = cJSON_GetObjectValueInt(dayEnd, "hour");
					req.dayEnd.minute = cJSON_GetObjectValueInt(dayEnd, "minute");
				}
			}
			req.bEnableAWB = cJSON_GetObjectValueBool(param, "bEnableAWB");
			req.bEnableMI = cJSON_GetObjectValueBool(param, "bEnableMI");
			req.bEnableST = cJSON_GetObjectValueBool(param, "bEnableST");
			req.bEnableNoC = cJSON_GetObjectValueBool(param, "bEnableNoC");
			req.bEnableWDynamic = cJSON_GetObjectValueBool(param, "bEnableWDynamic");
			req.bAutoLowFrameEn = cJSON_GetObjectValueBool(param, "bAutoLowFrameEn");
			req.bNightOptimization = cJSON_GetObjectValueBool(param, "bNightOptimization");
		}
	}
	ret = USERDEF_vms_image_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_log_get(grpc_t *grpc, PARAM_REQ_vms_log_get *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "log_get");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).date)
		{
			cJSON_AddStringToObject(param, "date", (*req).date);
		}
		if ((*req).type)
		{
			cJSON_AddStringToObject(param, "type", (*req).type);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_log_get(grpc_t *grpc, PARAM_RESP_vms_log_get *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *log_items = cJSON_GetObjectItem(result, "log_items");
				if (log_items)
				{
					int i1;
					int cnt = cJSON_GetArraySize(log_items);
					(*resp).log_items_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).log_items = grpc_malloc(grpc, cnt * sizeof((*resp).log_items[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(log_items, i1);
								if (item)
								{
									(*resp).log_items[i1].time = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "time"));
									(*resp).log_items[i1].strlog = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "strlog"));
									(*resp).log_items[i1].bNetuser = cJSON_GetObjectValueBool(item, "bNetuser");
									(*resp).log_items[i1].bmain = cJSON_GetObjectValueBool(item, "bmain");
									(*resp).log_items[i1].nSub = cJSON_GetObjectValueInt(item, "nSub");
									(*resp).log_items[i1].type = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "type"));
									(*resp).log_items[i1].username = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "username"));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_log_get(grpc_t *grpc, PARAM_REQ_vms_log_get *req, PARAM_RESP_vms_log_get *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_log_get(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_log_get(grpc, resp);
	}

	return ret;
}

int SERVER_vms_log_get(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_log_get req;
	PARAM_RESP_vms_log_get resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.date = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "date"));
			req.type = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "type"));
		}
	}
	ret = USERDEF_vms_log_get(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.log_items)
		{
			int i1;
			cJSON *log_items = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "log_items", log_items);
			for (i1=0;i1<resp.log_items_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(log_items, item);
				if (resp.log_items[i1].time)
				{
					cJSON_AddStringToObject(item, "time", resp.log_items[i1].time);
				}
				if (resp.log_items[i1].strlog)
				{
					cJSON_AddStringToObject(item, "strlog", resp.log_items[i1].strlog);
				}
				cJSON_AddBoolToObject(item, "bNetuser", resp.log_items[i1].bNetuser);
				cJSON_AddBoolToObject(item, "bmain", resp.log_items[i1].bmain);
				cJSON_AddNumberToObject(item, "nSub", resp.log_items[i1].nSub);
				if (resp.log_items[i1].type)
				{
					cJSON_AddStringToObject(item, "type", resp.log_items[i1].type);
				}
				if (resp.log_items[i1].username)
				{
					cJSON_AddStringToObject(item, "username", resp.log_items[i1].username);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_log_clear(grpc_t *grpc, PARAM_REQ_vms_log_clear *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "log_clear");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_log_clear(grpc_t *grpc, PARAM_RESP_vms_log_clear *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_log_clear(grpc_t *grpc, PARAM_REQ_vms_log_clear *req, PARAM_RESP_vms_log_clear *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_log_clear(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_log_clear(grpc, resp);
	}

	return ret;
}

int SERVER_vms_log_clear(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_log_clear req;
	PARAM_RESP_vms_log_clear resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_log_clear(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_mdetect_set_param(grpc_t *grpc, PARAM_REQ_vms_mdetect_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "mdetect_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		{
			cJSON *md = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "md", md);
			cJSON_AddBoolToObject(md, "bEnable", (*req).md.bEnable);
			cJSON_AddBoolToObject(md, "bEnableRecord", (*req).md.bEnableRecord);
			cJSON_AddNumberToObject(md, "sensitivity", (*req).md.sensitivity);
			cJSON_AddNumberToObject(md, "delay", (*req).md.delay);
			cJSON_AddBoolToObject(md, "bOutClient", (*req).md.bOutClient);
			cJSON_AddBoolToObject(md, "bOutEmail", (*req).md.bOutEmail);
			if ((*req).md.rects)
			{
				int i1;
				cJSON *rects = cJSON_CreateArray();
				cJSON_AddItemToObject(md, "rects", rects);
				for (i1=0;i1<(*req).md.rects_cnt;i1++)
				{
					cJSON *item = cJSON_CreateObject();
					cJSON_AddItemToArray(rects, item);
					cJSON_AddNumberToObject(item, "x", (*req).md.rects[i1].x);
					cJSON_AddNumberToObject(item, "y", (*req).md.rects[i1].y);
					cJSON_AddNumberToObject(item, "w", (*req).md.rects[i1].w);
					cJSON_AddNumberToObject(item, "h", (*req).md.rects[i1].h);
				}
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_mdetect_set_param(grpc_t *grpc, PARAM_RESP_vms_mdetect_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_mdetect_set_param(grpc_t *grpc, PARAM_REQ_vms_mdetect_set_param *req, PARAM_RESP_vms_mdetect_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_mdetect_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_mdetect_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_mdetect_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_mdetect_set_param req;
	PARAM_RESP_vms_mdetect_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			{
				cJSON *md = cJSON_GetObjectItem(param, "md");
				if (md)
				{
					req.md.bEnable = cJSON_GetObjectValueBool(md, "bEnable");
					req.md.bEnableRecord = cJSON_GetObjectValueBool(md, "bEnableRecord");
					req.md.sensitivity = cJSON_GetObjectValueInt(md, "sensitivity");
					req.md.delay = cJSON_GetObjectValueInt(md, "delay");
					req.md.bOutClient = cJSON_GetObjectValueBool(md, "bOutClient");
					req.md.bOutEmail = cJSON_GetObjectValueBool(md, "bOutEmail");
					{
						cJSON *rects = cJSON_GetObjectItem(md, "rects");
						if (rects)
						{
							int i1;
							int cnt = cJSON_GetArraySize(rects);
							req.md.rects_cnt = cnt;
							if (cnt > 0)
							{
								req.md.rects = grpc_malloc(grpc, cnt * sizeof(req.md.rects[0]));
								for (i1=0;i1<cnt;i1++)
								{
									{
										cJSON *item = cJSON_GetArrayItem(rects, i1);
										if (item)
										{
											req.md.rects[i1].x = cJSON_GetObjectValueInt(item, "x");
											req.md.rects[i1].y = cJSON_GetObjectValueInt(item, "y");
											req.md.rects[i1].w = cJSON_GetObjectValueInt(item, "w");
											req.md.rects[i1].h = cJSON_GetObjectValueInt(item, "h");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	ret = USERDEF_vms_mdetect_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_mdetect_get_param(grpc_t *grpc, PARAM_REQ_vms_mdetect_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "mdetect_get_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_mdetect_get_param(grpc_t *grpc, PARAM_RESP_vms_mdetect_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bEnable = cJSON_GetObjectValueBool(result, "bEnable");
			(*resp).bEnableRecord = cJSON_GetObjectValueBool(result, "bEnableRecord");
			(*resp).sensitivity = cJSON_GetObjectValueInt(result, "sensitivity");
			(*resp).delay = cJSON_GetObjectValueInt(result, "delay");
			(*resp).bOutClient = cJSON_GetObjectValueBool(result, "bOutClient");
			(*resp).bOutEmail = cJSON_GetObjectValueBool(result, "bOutEmail");
			{
				cJSON *rects = cJSON_GetObjectItem(result, "rects");
				if (rects)
				{
					int i1;
					int cnt = cJSON_GetArraySize(rects);
					(*resp).rects_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).rects = grpc_malloc(grpc, cnt * sizeof((*resp).rects[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(rects, i1);
								if (item)
								{
									(*resp).rects[i1].x = cJSON_GetObjectValueInt(item, "x");
									(*resp).rects[i1].y = cJSON_GetObjectValueInt(item, "y");
									(*resp).rects[i1].w = cJSON_GetObjectValueInt(item, "w");
									(*resp).rects[i1].h = cJSON_GetObjectValueInt(item, "h");
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_mdetect_get_param(grpc_t *grpc, PARAM_REQ_vms_mdetect_get_param *req, PARAM_RESP_vms_mdetect_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_mdetect_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_mdetect_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_mdetect_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_mdetect_get_param req;
	PARAM_RESP_vms_mdetect_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_mdetect_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bEnable", resp.bEnable);
		cJSON_AddBoolToObject(result, "bEnableRecord", resp.bEnableRecord);
		cJSON_AddNumberToObject(result, "sensitivity", resp.sensitivity);
		cJSON_AddNumberToObject(result, "delay", resp.delay);
		cJSON_AddBoolToObject(result, "bOutClient", resp.bOutClient);
		cJSON_AddBoolToObject(result, "bOutEmail", resp.bOutEmail);
		if (resp.rects)
		{
			int i1;
			cJSON *rects = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "rects", rects);
			for (i1=0;i1<resp.rects_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(rects, item);
				cJSON_AddNumberToObject(item, "x", resp.rects[i1].x);
				cJSON_AddNumberToObject(item, "y", resp.rects[i1].y);
				cJSON_AddNumberToObject(item, "w", resp.rects[i1].w);
				cJSON_AddNumberToObject(item, "h", resp.rects[i1].h);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_mdetect_balarming(grpc_t *grpc, PARAM_REQ_vms_mdetect_balarming *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "mdetect_balarming");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_mdetect_balarming(grpc_t *grpc, PARAM_RESP_vms_mdetect_balarming *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bMdetectAlarming = cJSON_GetObjectValueBool(result, "bMdetectAlarming");
		}
	}
	return 0;
}

int CLIENT_vms_mdetect_balarming(grpc_t *grpc, PARAM_REQ_vms_mdetect_balarming *req, PARAM_RESP_vms_mdetect_balarming *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_mdetect_balarming(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_mdetect_balarming(grpc, resp);
	}

	return ret;
}

int SERVER_vms_mdetect_balarming(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_mdetect_balarming req;
	PARAM_RESP_vms_mdetect_balarming resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_mdetect_balarming(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bMdetectAlarming", resp.bMdetectAlarming);
	}
	return 0;
}
int CLIENT_REQ_vms_chnosd_get_param(grpc_t *grpc, PARAM_REQ_vms_chnosd_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "chnosd_get_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_chnosd_get_param(grpc_t *grpc, PARAM_RESP_vms_chnosd_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bShowOSD = cJSON_GetObjectValueBool(result, "bShowOSD");
			(*resp).timeFormat = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "timeFormat"));
			(*resp).position = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "position"));
			(*resp).timePos = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "timePos"));
			(*resp).channelName = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "channelName"));
			(*resp).bOsdInvColEn = cJSON_GetObjectValueBool(result, "bOsdInvColEn");
			(*resp).bLargeOSD = cJSON_GetObjectValueBool(result, "bLargeOSD");
		}
	}
	return 0;
}

int CLIENT_vms_chnosd_get_param(grpc_t *grpc, PARAM_REQ_vms_chnosd_get_param *req, PARAM_RESP_vms_chnosd_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_chnosd_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_chnosd_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_chnosd_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_chnosd_get_param req;
	PARAM_RESP_vms_chnosd_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_chnosd_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bShowOSD", resp.bShowOSD);
		if (resp.timeFormat)
		{
			cJSON_AddStringToObject(result, "timeFormat", resp.timeFormat);
		}
		if (resp.position)
		{
			cJSON_AddStringToObject(result, "position", resp.position);
		}
		if (resp.timePos)
		{
			cJSON_AddStringToObject(result, "timePos", resp.timePos);
		}
		if (resp.channelName)
		{
			cJSON_AddStringToObject(result, "channelName", resp.channelName);
		}
		cJSON_AddBoolToObject(result, "bOsdInvColEn", resp.bOsdInvColEn);
		cJSON_AddBoolToObject(result, "bLargeOSD", resp.bLargeOSD);
	}
	return 0;
}
int CLIENT_REQ_vms_chnosd_set_param(grpc_t *grpc, PARAM_REQ_vms_chnosd_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "chnosd_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		{
			cJSON *attr = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "attr", attr);
			cJSON_AddBoolToObject(attr, "bShowOSD", (*req).attr.bShowOSD);
			if ((*req).attr.timeFormat)
			{
				cJSON_AddStringToObject(attr, "timeFormat", (*req).attr.timeFormat);
			}
			if ((*req).attr.position)
			{
				cJSON_AddStringToObject(attr, "position", (*req).attr.position);
			}
			if ((*req).attr.timePos)
			{
				cJSON_AddStringToObject(attr, "timePos", (*req).attr.timePos);
			}
			if ((*req).attr.channelName)
			{
				cJSON_AddStringToObject(attr, "channelName", (*req).attr.channelName);
			}
			cJSON_AddBoolToObject(attr, "bOsdInvColEn", (*req).attr.bOsdInvColEn);
			cJSON_AddBoolToObject(attr, "bLargeOSD", (*req).attr.bLargeOSD);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_chnosd_set_param(grpc_t *grpc, PARAM_RESP_vms_chnosd_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_chnosd_set_param(grpc_t *grpc, PARAM_REQ_vms_chnosd_set_param *req, PARAM_RESP_vms_chnosd_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_chnosd_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_chnosd_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_chnosd_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_chnosd_set_param req;
	PARAM_RESP_vms_chnosd_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			{
				cJSON *attr = cJSON_GetObjectItem(param, "attr");
				if (attr)
				{
					req.attr.bShowOSD = cJSON_GetObjectValueBool(attr, "bShowOSD");
					req.attr.timeFormat = grpc_strdup(grpc, cJSON_GetObjectValueString(attr, "timeFormat"));
					req.attr.position = grpc_strdup(grpc, cJSON_GetObjectValueString(attr, "position"));
					req.attr.timePos = grpc_strdup(grpc, cJSON_GetObjectValueString(attr, "timePos"));
					req.attr.channelName = grpc_strdup(grpc, cJSON_GetObjectValueString(attr, "channelName"));
					req.attr.bOsdInvColEn = cJSON_GetObjectValueBool(attr, "bOsdInvColEn");
					req.attr.bLargeOSD = cJSON_GetObjectValueBool(attr, "bLargeOSD");
				}
			}
		}
	}
	ret = USERDEF_vms_chnosd_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_privacy_get_param(grpc_t *grpc, PARAM_REQ_vms_privacy_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "privacy_get_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_privacy_get_param(grpc_t *grpc, PARAM_RESP_vms_privacy_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bEnable = cJSON_GetObjectValueBool(result, "bEnable");
			{
				cJSON *rects = cJSON_GetObjectItem(result, "rects");
				if (rects)
				{
					int i1;
					int cnt = cJSON_GetArraySize(rects);
					(*resp).rects_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).rects = grpc_malloc(grpc, cnt * sizeof((*resp).rects[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(rects, i1);
								if (item)
								{
									(*resp).rects[i1].x = cJSON_GetObjectValueInt(item, "x");
									(*resp).rects[i1].y = cJSON_GetObjectValueInt(item, "y");
									(*resp).rects[i1].w = cJSON_GetObjectValueInt(item, "w");
									(*resp).rects[i1].h = cJSON_GetObjectValueInt(item, "h");
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_privacy_get_param(grpc_t *grpc, PARAM_REQ_vms_privacy_get_param *req, PARAM_RESP_vms_privacy_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_privacy_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_privacy_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_privacy_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_privacy_get_param req;
	PARAM_RESP_vms_privacy_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_privacy_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bEnable", resp.bEnable);
		if (resp.rects)
		{
			int i1;
			cJSON *rects = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "rects", rects);
			for (i1=0;i1<resp.rects_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(rects, item);
				cJSON_AddNumberToObject(item, "x", resp.rects[i1].x);
				cJSON_AddNumberToObject(item, "y", resp.rects[i1].y);
				cJSON_AddNumberToObject(item, "w", resp.rects[i1].w);
				cJSON_AddNumberToObject(item, "h", resp.rects[i1].h);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_privacy_set_param(grpc_t *grpc, PARAM_REQ_vms_privacy_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "privacy_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		{
			cJSON *region = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "region", region);
			cJSON_AddBoolToObject(region, "bEnable", (*req).region.bEnable);
			if ((*req).region.rects)
			{
				int i1;
				cJSON *rects = cJSON_CreateArray();
				cJSON_AddItemToObject(region, "rects", rects);
				for (i1=0;i1<(*req).region.rects_cnt;i1++)
				{
					cJSON *item = cJSON_CreateObject();
					cJSON_AddItemToArray(rects, item);
					cJSON_AddNumberToObject(item, "x", (*req).region.rects[i1].x);
					cJSON_AddNumberToObject(item, "y", (*req).region.rects[i1].y);
					cJSON_AddNumberToObject(item, "w", (*req).region.rects[i1].w);
					cJSON_AddNumberToObject(item, "h", (*req).region.rects[i1].h);
				}
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_privacy_set_param(grpc_t *grpc, PARAM_RESP_vms_privacy_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_privacy_set_param(grpc_t *grpc, PARAM_REQ_vms_privacy_set_param *req, PARAM_RESP_vms_privacy_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_privacy_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_privacy_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_privacy_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_privacy_set_param req;
	PARAM_RESP_vms_privacy_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			{
				cJSON *region = cJSON_GetObjectItem(param, "region");
				if (region)
				{
					req.region.bEnable = cJSON_GetObjectValueBool(region, "bEnable");
					{
						cJSON *rects = cJSON_GetObjectItem(region, "rects");
						if (rects)
						{
							int i1;
							int cnt = cJSON_GetArraySize(rects);
							req.region.rects_cnt = cnt;
							if (cnt > 0)
							{
								req.region.rects = grpc_malloc(grpc, cnt * sizeof(req.region.rects[0]));
								for (i1=0;i1<cnt;i1++)
								{
									{
										cJSON *item = cJSON_GetArrayItem(rects, i1);
										if (item)
										{
											req.region.rects[i1].x = cJSON_GetObjectValueInt(item, "x");
											req.region.rects[i1].y = cJSON_GetObjectValueInt(item, "y");
											req.region.rects[i1].w = cJSON_GetObjectValueInt(item, "w");
											req.region.rects[i1].h = cJSON_GetObjectValueInt(item, "h");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	ret = USERDEF_vms_privacy_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_move_start(grpc_t *grpc, PARAM_REQ_vms_ptz_move_start *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_move_start");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "panLeft", (*req).panLeft);
		cJSON_AddNumberToObject(param, "tiltUp", (*req).tiltUp);
		cJSON_AddNumberToObject(param, "zoomIn", (*req).zoomIn);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_move_start(grpc_t *grpc, PARAM_RESP_vms_ptz_move_start *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_move_start(grpc_t *grpc, PARAM_REQ_vms_ptz_move_start *req, PARAM_RESP_vms_ptz_move_start *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_move_start(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_move_start(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_move_start(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_move_start req;
	PARAM_RESP_vms_ptz_move_start resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.panLeft = cJSON_GetObjectValueInt(param, "panLeft");
			req.tiltUp = cJSON_GetObjectValueInt(param, "tiltUp");
			req.zoomIn = cJSON_GetObjectValueInt(param, "zoomIn");
		}
	}
	ret = USERDEF_vms_ptz_move_start(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_move_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_move_stop *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_move_stop");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_move_stop(grpc_t *grpc, PARAM_RESP_vms_ptz_move_stop *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_move_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_move_stop *req, PARAM_RESP_vms_ptz_move_stop *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_move_stop(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_move_stop(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_move_stop(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_move_stop req;
	PARAM_RESP_vms_ptz_move_stop resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_ptz_move_stop(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_fi_start(grpc_t *grpc, PARAM_REQ_vms_ptz_fi_start *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_fi_start");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "focusFar", (*req).focusFar);
		cJSON_AddNumberToObject(param, "irisOpen", (*req).irisOpen);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_fi_start(grpc_t *grpc, PARAM_RESP_vms_ptz_fi_start *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_fi_start(grpc_t *grpc, PARAM_REQ_vms_ptz_fi_start *req, PARAM_RESP_vms_ptz_fi_start *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_fi_start(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_fi_start(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_fi_start(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_fi_start req;
	PARAM_RESP_vms_ptz_fi_start resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.focusFar = cJSON_GetObjectValueInt(param, "focusFar");
			req.irisOpen = cJSON_GetObjectValueInt(param, "irisOpen");
		}
	}
	ret = USERDEF_vms_ptz_fi_start(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_fi_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_fi_stop *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_fi_stop");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_fi_stop(grpc_t *grpc, PARAM_RESP_vms_ptz_fi_stop *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_fi_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_fi_stop *req, PARAM_RESP_vms_ptz_fi_stop *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_fi_stop(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_fi_stop(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_fi_stop(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_fi_stop req;
	PARAM_RESP_vms_ptz_fi_stop resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_ptz_fi_stop(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_preset_set(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_set *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_preset_set");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "presetno", (*req).presetno);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_preset_set(grpc_t *grpc, PARAM_RESP_vms_ptz_preset_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_preset_set(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_set *req, PARAM_RESP_vms_ptz_preset_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_preset_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_preset_set(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_preset_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_preset_set req;
	PARAM_RESP_vms_ptz_preset_set resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.presetno = cJSON_GetObjectValueInt(param, "presetno");
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
		}
	}
	ret = USERDEF_vms_ptz_preset_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_preset_locate(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_locate *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_preset_locate");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "presetno", (*req).presetno);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_preset_locate(grpc_t *grpc, PARAM_RESP_vms_ptz_preset_locate *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_preset_locate(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_locate *req, PARAM_RESP_vms_ptz_preset_locate *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_preset_locate(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_preset_locate(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_preset_locate(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_preset_locate req;
	PARAM_RESP_vms_ptz_preset_locate resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.presetno = cJSON_GetObjectValueInt(param, "presetno");
		}
	}
	ret = USERDEF_vms_ptz_preset_locate(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_preset_delete(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_delete *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_preset_delete");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "presetno", (*req).presetno);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_preset_delete(grpc_t *grpc, PARAM_RESP_vms_ptz_preset_delete *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_preset_delete(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_delete *req, PARAM_RESP_vms_ptz_preset_delete *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_preset_delete(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_preset_delete(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_preset_delete(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_preset_delete req;
	PARAM_RESP_vms_ptz_preset_delete resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.presetno = cJSON_GetObjectValueInt(param, "presetno");
		}
	}
	ret = USERDEF_vms_ptz_preset_delete(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_presets_get(grpc_t *grpc, PARAM_REQ_vms_ptz_presets_get *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_presets_get");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_presets_get(grpc_t *grpc, PARAM_RESP_vms_ptz_presets_get *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *presetsList = cJSON_GetObjectItem(result, "presetsList");
				if (presetsList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(presetsList);
					(*resp).presetsList_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).presetsList = grpc_malloc(grpc, cnt * sizeof((*resp).presetsList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(presetsList, i1);
								if (item)
								{
									(*resp).presetsList[i1].presetno = cJSON_GetObjectValueInt(item, "presetno");
									(*resp).presetsList[i1].name = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "name"));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_ptz_presets_get(grpc_t *grpc, PARAM_REQ_vms_ptz_presets_get *req, PARAM_RESP_vms_ptz_presets_get *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_presets_get(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_presets_get(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_presets_get(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_presets_get req;
	PARAM_RESP_vms_ptz_presets_get resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_ptz_presets_get(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.presetsList)
		{
			int i1;
			cJSON *presetsList = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "presetsList", presetsList);
			for (i1=0;i1<resp.presetsList_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(presetsList, item);
				cJSON_AddNumberToObject(item, "presetno", resp.presetsList[i1].presetno);
				if (resp.presetsList[i1].name)
				{
					cJSON_AddStringToObject(item, "name", resp.presetsList[i1].name);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_create(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_create *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_create");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_create(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_create *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).index = cJSON_GetObjectValueInt(result, "index");
		}
	}
	return 0;
}

int CLIENT_vms_ptz_patrol_create(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_create *req, PARAM_RESP_vms_ptz_patrol_create *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_create(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_create(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_create(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_create req;
	PARAM_RESP_vms_ptz_patrol_create resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_ptz_patrol_create(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "index", resp.index);
	}
	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_delete(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_delete *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_delete");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "index", (*req).index);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_delete(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_delete *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_patrol_delete(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_delete *req, PARAM_RESP_vms_ptz_patrol_delete *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_delete(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_delete(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_delete(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_delete req;
	PARAM_RESP_vms_ptz_patrol_delete resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.index = cJSON_GetObjectValueInt(param, "index");
		}
	}
	ret = USERDEF_vms_ptz_patrol_delete(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_patrols_get(grpc_t *grpc, PARAM_REQ_vms_ptz_patrols_get *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrols_get");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrols_get(grpc_t *grpc, PARAM_RESP_vms_ptz_patrols_get *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *patrolsList = cJSON_GetObjectItem(result, "patrolsList");
				if (patrolsList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(patrolsList);
					(*resp).patrolsList_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).patrolsList = grpc_malloc(grpc, cnt * sizeof((*resp).patrolsList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(patrolsList, i1);
								if (item)
								{
									(*resp).patrolsList[i1].patrolid = cJSON_GetObjectValueInt(item, "patrolid");
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_ptz_patrols_get(grpc_t *grpc, PARAM_REQ_vms_ptz_patrols_get *req, PARAM_RESP_vms_ptz_patrols_get *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrols_get(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrols_get(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrols_get(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrols_get req;
	PARAM_RESP_vms_ptz_patrols_get resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_ptz_patrols_get(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.patrolsList)
		{
			int i1;
			cJSON *patrolsList = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "patrolsList", patrolsList);
			for (i1=0;i1<resp.patrolsList_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(patrolsList, item);
				cJSON_AddNumberToObject(item, "patrolid", resp.patrolsList[i1].patrolid);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_get_nodes(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_get_nodes *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_get_nodes");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "patrolid", (*req).patrolid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_get_nodes(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_get_nodes *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *patrolNodesList = cJSON_GetObjectItem(result, "patrolNodesList");
				if (patrolNodesList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(patrolNodesList);
					(*resp).patrolNodesList_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).patrolNodesList = grpc_malloc(grpc, cnt * sizeof((*resp).patrolNodesList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(patrolNodesList, i1);
								if (item)
								{
									{
										cJSON *preset = cJSON_GetObjectItem(item, "preset");
										if (preset)
										{
											(*resp).patrolNodesList[i1].preset.presetno = cJSON_GetObjectValueInt(preset, "presetno");
											(*resp).patrolNodesList[i1].preset.name = grpc_strdup(grpc, cJSON_GetObjectValueString(preset, "name"));
										}
									}
									(*resp).patrolNodesList[i1].staySeconds = cJSON_GetObjectValueInt(item, "staySeconds");
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_ptz_patrol_get_nodes(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_get_nodes *req, PARAM_RESP_vms_ptz_patrol_get_nodes *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_get_nodes(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_get_nodes(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_get_nodes(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_get_nodes req;
	PARAM_RESP_vms_ptz_patrol_get_nodes resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.patrolid = cJSON_GetObjectValueInt(param, "patrolid");
		}
	}
	ret = USERDEF_vms_ptz_patrol_get_nodes(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.patrolNodesList)
		{
			int i1;
			cJSON *patrolNodesList = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "patrolNodesList", patrolNodesList);
			for (i1=0;i1<resp.patrolNodesList_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(patrolNodesList, item);
				{
					cJSON *preset = cJSON_CreateObject();
					cJSON_AddItemToObject(item, "preset", preset);
					cJSON_AddNumberToObject(preset, "presetno", resp.patrolNodesList[i1].preset.presetno);
					if (resp.patrolNodesList[i1].preset.name)
					{
						cJSON_AddStringToObject(preset, "name", resp.patrolNodesList[i1].preset.name);
					}
				}
				cJSON_AddNumberToObject(item, "staySeconds", resp.patrolNodesList[i1].staySeconds);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_add_node(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_add_node *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_add_node");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "patrolid", (*req).patrolid);
		cJSON_AddNumberToObject(param, "presetno", (*req).presetno);
		cJSON_AddNumberToObject(param, "staySeconds", (*req).staySeconds);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_add_node(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_add_node *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_patrol_add_node(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_add_node *req, PARAM_RESP_vms_ptz_patrol_add_node *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_add_node(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_add_node(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_add_node(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_add_node req;
	PARAM_RESP_vms_ptz_patrol_add_node resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.patrolid = cJSON_GetObjectValueInt(param, "patrolid");
			req.presetno = cJSON_GetObjectValueInt(param, "presetno");
			req.staySeconds = cJSON_GetObjectValueInt(param, "staySeconds");
		}
	}
	ret = USERDEF_vms_ptz_patrol_add_node(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_del_node(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_del_node *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_del_node");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "patrolid", (*req).patrolid);
		cJSON_AddNumberToObject(param, "presetindex", (*req).presetindex);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_del_node(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_del_node *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_patrol_del_node(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_del_node *req, PARAM_RESP_vms_ptz_patrol_del_node *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_del_node(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_del_node(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_del_node(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_del_node req;
	PARAM_RESP_vms_ptz_patrol_del_node resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.patrolid = cJSON_GetObjectValueInt(param, "patrolid");
			req.presetindex = cJSON_GetObjectValueInt(param, "presetindex");
		}
	}
	ret = USERDEF_vms_ptz_patrol_del_node(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_set_speed(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_set_speed *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_set_speed");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "patrolid", (*req).patrolid);
		cJSON_AddNumberToObject(param, "speed", (*req).speed);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_set_speed(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_set_speed *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_patrol_set_speed(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_set_speed *req, PARAM_RESP_vms_ptz_patrol_set_speed *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_set_speed(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_set_speed(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_set_speed(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_set_speed req;
	PARAM_RESP_vms_ptz_patrol_set_speed resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.patrolid = cJSON_GetObjectValueInt(param, "patrolid");
			req.speed = cJSON_GetObjectValueInt(param, "speed");
		}
	}
	ret = USERDEF_vms_ptz_patrol_set_speed(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_set_stay_seconds(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_set_stay_seconds *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_set_stay_seconds");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "patrolid", (*req).patrolid);
		cJSON_AddNumberToObject(param, "staySeconds", (*req).staySeconds);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_set_stay_seconds(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_set_stay_seconds *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_patrol_set_stay_seconds(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_set_stay_seconds *req, PARAM_RESP_vms_ptz_patrol_set_stay_seconds *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_set_stay_seconds(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_set_stay_seconds(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_set_stay_seconds(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_set_stay_seconds req;
	PARAM_RESP_vms_ptz_patrol_set_stay_seconds resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.patrolid = cJSON_GetObjectValueInt(param, "patrolid");
			req.staySeconds = cJSON_GetObjectValueInt(param, "staySeconds");
		}
	}
	ret = USERDEF_vms_ptz_patrol_set_stay_seconds(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_locate(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_locate *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_locate");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "patrolid", (*req).patrolid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_locate(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_locate *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_patrol_locate(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_locate *req, PARAM_RESP_vms_ptz_patrol_locate *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_locate(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_locate(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_locate(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_locate req;
	PARAM_RESP_vms_ptz_patrol_locate resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.patrolid = cJSON_GetObjectValueInt(param, "patrolid");
		}
	}
	ret = USERDEF_vms_ptz_patrol_locate(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_patrol_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_stop *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_patrol_stop");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "patrolid", (*req).patrolid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_patrol_stop(grpc_t *grpc, PARAM_RESP_vms_ptz_patrol_stop *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_patrol_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_stop *req, PARAM_RESP_vms_ptz_patrol_stop *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_patrol_stop(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_patrol_stop(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_patrol_stop(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_patrol_stop req;
	PARAM_RESP_vms_ptz_patrol_stop resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.patrolid = cJSON_GetObjectValueInt(param, "patrolid");
		}
	}
	ret = USERDEF_vms_ptz_patrol_stop(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_scan_set_left(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_left *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_scan_set_left");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "groupid", (*req).groupid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_scan_set_left(grpc_t *grpc, PARAM_RESP_vms_ptz_scan_set_left *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_scan_set_left(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_left *req, PARAM_RESP_vms_ptz_scan_set_left *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_scan_set_left(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_scan_set_left(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_scan_set_left(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_scan_set_left req;
	PARAM_RESP_vms_ptz_scan_set_left resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.groupid = cJSON_GetObjectValueInt(param, "groupid");
		}
	}
	ret = USERDEF_vms_ptz_scan_set_left(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_scan_set_right(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_right *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_scan_set_right");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "groupid", (*req).groupid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_scan_set_right(grpc_t *grpc, PARAM_RESP_vms_ptz_scan_set_right *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_scan_set_right(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_right *req, PARAM_RESP_vms_ptz_scan_set_right *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_scan_set_right(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_scan_set_right(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_scan_set_right(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_scan_set_right req;
	PARAM_RESP_vms_ptz_scan_set_right resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.groupid = cJSON_GetObjectValueInt(param, "groupid");
		}
	}
	ret = USERDEF_vms_ptz_scan_set_right(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_scan_start(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_start *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_scan_start");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "groupid", (*req).groupid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_scan_start(grpc_t *grpc, PARAM_RESP_vms_ptz_scan_start *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_scan_start(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_start *req, PARAM_RESP_vms_ptz_scan_start *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_scan_start(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_scan_start(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_scan_start(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_scan_start req;
	PARAM_RESP_vms_ptz_scan_start resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.groupid = cJSON_GetObjectValueInt(param, "groupid");
		}
	}
	ret = USERDEF_vms_ptz_scan_start(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_scan_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_stop *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_scan_stop");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "groupid", (*req).groupid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_scan_stop(grpc_t *grpc, PARAM_RESP_vms_ptz_scan_stop *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_scan_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_stop *req, PARAM_RESP_vms_ptz_scan_stop *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_scan_stop(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_scan_stop(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_scan_stop(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_scan_stop req;
	PARAM_RESP_vms_ptz_scan_stop resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.groupid = cJSON_GetObjectValueInt(param, "groupid");
		}
	}
	ret = USERDEF_vms_ptz_scan_stop(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_ptz_scan_set_speed(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_speed *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ptz_scan_set_speed");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "groupid", (*req).groupid);
		cJSON_AddNumberToObject(param, "speed", (*req).speed);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_ptz_scan_set_speed(grpc_t *grpc, PARAM_RESP_vms_ptz_scan_set_speed *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_ptz_scan_set_speed(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_speed *req, PARAM_RESP_vms_ptz_scan_set_speed *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_ptz_scan_set_speed(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_ptz_scan_set_speed(grpc, resp);
	}

	return ret;
}

int SERVER_vms_ptz_scan_set_speed(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_ptz_scan_set_speed req;
	PARAM_RESP_vms_ptz_scan_set_speed resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.groupid = cJSON_GetObjectValueInt(param, "groupid");
			req.speed = cJSON_GetObjectValueInt(param, "speed");
		}
	}
	ret = USERDEF_vms_ptz_scan_set_speed(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_record_get(grpc_t *grpc, PARAM_REQ_vms_record_get *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "record_get");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_record_get(grpc_t *grpc, PARAM_RESP_vms_record_get *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *record_params = cJSON_GetObjectItem(result, "record_params");
				if (record_params)
				{
					int i1;
					int cnt = cJSON_GetArraySize(record_params);
					(*resp).record_params_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).record_params = grpc_malloc(grpc, cnt * sizeof((*resp).record_params[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(record_params, i1);
								if (item)
								{
									(*resp).record_params[i1].brecording = cJSON_GetObjectValueBool(item, "brecording");
									(*resp).record_params[i1].normal_record = cJSON_GetObjectValueBool(item, "normal_record");
									(*resp).record_params[i1].time_record = cJSON_GetObjectValueBool(item, "time_record");
									{
										cJSON *date = cJSON_GetObjectItem(item, "date");
										if (date)
										{
											int i2;
											int cnt = cJSON_GetArraySize(date);
											(*resp).record_params[i1].date_cnt = cnt;
											if (cnt > 0)
											{
												(*resp).record_params[i1].date = grpc_malloc(grpc, cnt * sizeof((*resp).record_params[i1].date[0]));
												for (i2=0;i2<cnt;i2++)
												{
													{
														cJSON *item = cJSON_GetArrayItem(date, i2);
														if (item)
														{
															(*resp).record_params[i1].date[i2].week = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "week"));
															{
																cJSON *time = cJSON_GetObjectItem(item, "time");
																if (time)
																{
																	int i3;
																	int cnt = cJSON_GetArraySize(time);
																	(*resp).record_params[i1].date[i2].time_cnt = cnt;
																	if (cnt > 0)
																	{
																		(*resp).record_params[i1].date[i2].time = grpc_malloc(grpc, cnt * sizeof((*resp).record_params[i1].date[i2].time[0]));
																		for (i3=0;i3<cnt;i3++)
																		{
																			{
																				cJSON *item = cJSON_GetArrayItem(time, i3);
																				if (item)
																				{
																					(*resp).record_params[i1].date[i2].time[i3].begin_hour = cJSON_GetObjectValueInt(item, "begin_hour");
																					(*resp).record_params[i1].date[i2].time[i3].begin_min = cJSON_GetObjectValueInt(item, "begin_min");
																					(*resp).record_params[i1].date[i2].time[i3].end_hour = cJSON_GetObjectValueInt(item, "end_hour");
																					(*resp).record_params[i1].date[i2].time[i3].end_min = cJSON_GetObjectValueInt(item, "end_min");
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_record_get(grpc_t *grpc, PARAM_REQ_vms_record_get *req, PARAM_RESP_vms_record_get *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_record_get(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_record_get(grpc, resp);
	}

	return ret;
}

int SERVER_vms_record_get(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_record_get req;
	PARAM_RESP_vms_record_get resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_record_get(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.record_params)
		{
			int i1;
			cJSON *record_params = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "record_params", record_params);
			for (i1=0;i1<resp.record_params_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(record_params, item);
				cJSON_AddBoolToObject(item, "brecording", resp.record_params[i1].brecording);
				cJSON_AddBoolToObject(item, "normal_record", resp.record_params[i1].normal_record);
				cJSON_AddBoolToObject(item, "time_record", resp.record_params[i1].time_record);
				if (resp.record_params[i1].date)
				{
					int i2;
					cJSON *date = cJSON_CreateArray();
					cJSON_AddItemToObject(item, "date", date);
					for (i2=0;i2<resp.record_params[i1].date_cnt;i2++)
					{
						cJSON *item = cJSON_CreateObject();
						cJSON_AddItemToArray(date, item);
						if (resp.record_params[i1].date[i2].week)
						{
							cJSON_AddStringToObject(item, "week", resp.record_params[i1].date[i2].week);
						}
						if (resp.record_params[i1].date[i2].time)
						{
							int i3;
							cJSON *time = cJSON_CreateArray();
							cJSON_AddItemToObject(item, "time", time);
							for (i3=0;i3<resp.record_params[i1].date[i2].time_cnt;i3++)
							{
								cJSON *item = cJSON_CreateObject();
								cJSON_AddItemToArray(time, item);
								cJSON_AddNumberToObject(item, "begin_hour", resp.record_params[i1].date[i2].time[i3].begin_hour);
								cJSON_AddNumberToObject(item, "begin_min", resp.record_params[i1].date[i2].time[i3].begin_min);
								cJSON_AddNumberToObject(item, "end_hour", resp.record_params[i1].date[i2].time[i3].end_hour);
								cJSON_AddNumberToObject(item, "end_min", resp.record_params[i1].date[i2].time[i3].end_min);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_record_set(grpc_t *grpc, PARAM_REQ_vms_record_set *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "record_set");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).record_params)
		{
			int i1;
			cJSON *record_params = cJSON_CreateArray();
			cJSON_AddItemToObject(param, "record_params", record_params);
			for (i1=0;i1<(*req).record_params_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(record_params, item);
				cJSON_AddNumberToObject(item, "channelid", (*req).record_params[i1].channelid);
				cJSON_AddBoolToObject(item, "normal_record", (*req).record_params[i1].normal_record);
				cJSON_AddBoolToObject(item, "time_record", (*req).record_params[i1].time_record);
				if ((*req).record_params[i1].date)
				{
					int i2;
					cJSON *date = cJSON_CreateArray();
					cJSON_AddItemToObject(item, "date", date);
					for (i2=0;i2<(*req).record_params[i1].date_cnt;i2++)
					{
						cJSON *item = cJSON_CreateObject();
						cJSON_AddItemToArray(date, item);
						if ((*req).record_params[i1].date[i2].week)
						{
							cJSON_AddStringToObject(item, "week", (*req).record_params[i1].date[i2].week);
						}
						if ((*req).record_params[i1].date[i2].time)
						{
							int i3;
							cJSON *time = cJSON_CreateArray();
							cJSON_AddItemToObject(item, "time", time);
							for (i3=0;i3<(*req).record_params[i1].date[i2].time_cnt;i3++)
							{
								cJSON *item = cJSON_CreateObject();
								cJSON_AddItemToArray(time, item);
								cJSON_AddNumberToObject(item, "begin_hour", (*req).record_params[i1].date[i2].time[i3].begin_hour);
								cJSON_AddNumberToObject(item, "begin_min", (*req).record_params[i1].date[i2].time[i3].begin_min);
								cJSON_AddNumberToObject(item, "end_hour", (*req).record_params[i1].date[i2].time[i3].end_hour);
								cJSON_AddNumberToObject(item, "end_min", (*req).record_params[i1].date[i2].time[i3].end_min);
							}
						}
					}
				}
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_record_set(grpc_t *grpc, PARAM_RESP_vms_record_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_record_set(grpc_t *grpc, PARAM_REQ_vms_record_set *req, PARAM_RESP_vms_record_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_record_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_record_set(grpc, resp);
	}

	return ret;
}

int SERVER_vms_record_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_record_set req;
	PARAM_RESP_vms_record_set resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			{
				cJSON *record_params = cJSON_GetObjectItem(param, "record_params");
				if (record_params)
				{
					int i1;
					int cnt = cJSON_GetArraySize(record_params);
					req.record_params_cnt = cnt;
					if (cnt > 0)
					{
						req.record_params = grpc_malloc(grpc, cnt * sizeof(req.record_params[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(record_params, i1);
								if (item)
								{
									req.record_params[i1].channelid = cJSON_GetObjectValueInt(item, "channelid");
									req.record_params[i1].normal_record = cJSON_GetObjectValueBool(item, "normal_record");
									req.record_params[i1].time_record = cJSON_GetObjectValueBool(item, "time_record");
									{
										cJSON *date = cJSON_GetObjectItem(item, "date");
										if (date)
										{
											int i2;
											int cnt = cJSON_GetArraySize(date);
											req.record_params[i1].date_cnt = cnt;
											if (cnt > 0)
											{
												req.record_params[i1].date = grpc_malloc(grpc, cnt * sizeof(req.record_params[i1].date[0]));
												for (i2=0;i2<cnt;i2++)
												{
													{
														cJSON *item = cJSON_GetArrayItem(date, i2);
														if (item)
														{
															req.record_params[i1].date[i2].week = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "week"));
															{
																cJSON *time = cJSON_GetObjectItem(item, "time");
																if (time)
																{
																	int i3;
																	int cnt = cJSON_GetArraySize(time);
																	req.record_params[i1].date[i2].time_cnt = cnt;
																	if (cnt > 0)
																	{
																		req.record_params[i1].date[i2].time = grpc_malloc(grpc, cnt * sizeof(req.record_params[i1].date[i2].time[0]));
																		for (i3=0;i3<cnt;i3++)
																		{
																			{
																				cJSON *item = cJSON_GetArrayItem(time, i3);
																				if (item)
																				{
																					req.record_params[i1].date[i2].time[i3].begin_hour = cJSON_GetObjectValueInt(item, "begin_hour");
																					req.record_params[i1].date[i2].time[i3].begin_min = cJSON_GetObjectValueInt(item, "begin_min");
																					req.record_params[i1].date[i2].time[i3].end_hour = cJSON_GetObjectValueInt(item, "end_hour");
																					req.record_params[i1].date[i2].time[i3].end_min = cJSON_GetObjectValueInt(item, "end_min");
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	ret = USERDEF_vms_record_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_storage_get_info(grpc_t *grpc, PARAM_REQ_vms_storage_get_info *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "storage_get_info");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_storage_get_info(grpc_t *grpc, PARAM_RESP_vms_storage_get_info *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).size = cJSON_GetObjectValueInt(result, "size");
			(*resp).cylinder = cJSON_GetObjectValueInt(result, "cylinder");
			(*resp).partSize = cJSON_GetObjectValueInt(result, "partSize");
			(*resp).partition = cJSON_GetObjectValueInt(result, "partition");
			(*resp).entryCount = cJSON_GetObjectValueInt(result, "entryCount");
			(*resp).status = cJSON_GetObjectValueInt(result, "status");
			(*resp).curPart = cJSON_GetObjectValueInt(result, "curPart");
			(*resp).bNocard = cJSON_GetObjectValueBool(result, "bNocard");
			(*resp).bMounted = cJSON_GetObjectValueBool(result, "bMounted");
			{
				cJSON *partSpace = cJSON_GetObjectItem(result, "partSpace");
				if (partSpace)
				{
					int i1;
					int cnt = cJSON_GetArraySize(partSpace);
					(*resp).partSpace_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).partSpace = grpc_malloc(grpc, cnt * sizeof((*resp).partSpace[0]));
						for (i1=0;i1<cnt;i1++)
						{
							cJSON *item = cJSON_GetArrayItem(partSpace, i1);
							(*resp).partSpace[i1] = item->valueint;
						}
					}
				}
			}
			{
				cJSON *freeSpace = cJSON_GetObjectItem(result, "freeSpace");
				if (freeSpace)
				{
					int i1;
					int cnt = cJSON_GetArraySize(freeSpace);
					(*resp).freeSpace_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).freeSpace = grpc_malloc(grpc, cnt * sizeof((*resp).freeSpace[0]));
						for (i1=0;i1<cnt;i1++)
						{
							cJSON *item = cJSON_GetArrayItem(freeSpace, i1);
							(*resp).freeSpace[i1] = item->valueint;
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_storage_get_info(grpc_t *grpc, PARAM_REQ_vms_storage_get_info *req, PARAM_RESP_vms_storage_get_info *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_storage_get_info(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_storage_get_info(grpc, resp);
	}

	return ret;
}

int SERVER_vms_storage_get_info(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_storage_get_info req;
	PARAM_RESP_vms_storage_get_info resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_storage_get_info(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "size", resp.size);
		cJSON_AddNumberToObject(result, "cylinder", resp.cylinder);
		cJSON_AddNumberToObject(result, "partSize", resp.partSize);
		cJSON_AddNumberToObject(result, "partition", resp.partition);
		cJSON_AddNumberToObject(result, "entryCount", resp.entryCount);
		cJSON_AddNumberToObject(result, "status", resp.status);
		cJSON_AddNumberToObject(result, "curPart", resp.curPart);
		cJSON_AddBoolToObject(result, "bNocard", resp.bNocard);
		cJSON_AddBoolToObject(result, "bMounted", resp.bMounted);
		if (resp.partSpace)
		{
			int i1;
			cJSON *partSpace = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "partSpace", partSpace);
			for (i1=0;i1<resp.partSpace_cnt;i1++)
			{
				cJSON_AddNumberToArray(partSpace, resp.partSpace[i1]);
			}
		}
		if (resp.freeSpace)
		{
			int i1;
			cJSON *freeSpace = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "freeSpace", freeSpace);
			for (i1=0;i1<resp.freeSpace_cnt;i1++)
			{
				cJSON_AddNumberToArray(freeSpace, resp.freeSpace[i1]);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_storage_format(grpc_t *grpc, PARAM_REQ_vms_storage_format *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "storage_format");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "diskNum", (*req).diskNum);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_storage_format(grpc_t *grpc, PARAM_RESP_vms_storage_format *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_storage_format(grpc_t *grpc, PARAM_REQ_vms_storage_format *req, PARAM_RESP_vms_storage_format *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_storage_format(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_storage_format(grpc, resp);
	}

	return ret;
}

int SERVER_vms_storage_format(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_storage_format req;
	PARAM_RESP_vms_storage_format resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.diskNum = cJSON_GetObjectValueInt(param, "diskNum");
		}
	}
	ret = USERDEF_vms_storage_format(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_stream_get_param(grpc_t *grpc, PARAM_REQ_vms_stream_get_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "stream_get_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "streamid", (*req).streamid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_stream_get_param(grpc_t *grpc, PARAM_RESP_vms_stream_get_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).width = cJSON_GetObjectValueInt(result, "width");
			(*resp).height = cJSON_GetObjectValueInt(result, "height");
			(*resp).frameRate = cJSON_GetObjectValueInt(result, "frameRate");
			(*resp).bitRate = cJSON_GetObjectValueInt(result, "bitRate");
			(*resp).ngop_s = cJSON_GetObjectValueInt(result, "ngop_s");
			(*resp).quality = cJSON_GetObjectValueInt(result, "quality");
			(*resp).rcMode = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "rcMode"));
		}
	}
	return 0;
}

int CLIENT_vms_stream_get_param(grpc_t *grpc, PARAM_REQ_vms_stream_get_param *req, PARAM_RESP_vms_stream_get_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_stream_get_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_stream_get_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_stream_get_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_stream_get_param req;
	PARAM_RESP_vms_stream_get_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.streamid = cJSON_GetObjectValueInt(param, "streamid");
		}
	}
	ret = USERDEF_vms_stream_get_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "width", resp.width);
		cJSON_AddNumberToObject(result, "height", resp.height);
		cJSON_AddNumberToObject(result, "frameRate", resp.frameRate);
		cJSON_AddNumberToObject(result, "bitRate", resp.bitRate);
		cJSON_AddNumberToObject(result, "ngop_s", resp.ngop_s);
		cJSON_AddNumberToObject(result, "quality", resp.quality);
		if (resp.rcMode)
		{
			cJSON_AddStringToObject(result, "rcMode", resp.rcMode);
		}
	}
	return 0;
}
int CLIENT_REQ_vms_stream_get_params(grpc_t *grpc, PARAM_REQ_vms_stream_get_params *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "stream_get_params");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_stream_get_params(grpc_t *grpc, PARAM_RESP_vms_stream_get_params *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *streams = cJSON_GetObjectItem(result, "streams");
				if (streams)
				{
					int i1;
					int cnt = cJSON_GetArraySize(streams);
					(*resp).streams_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).streams = grpc_malloc(grpc, cnt * sizeof((*resp).streams[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(streams, i1);
								if (item)
								{
									(*resp).streams[i1].channelid = cJSON_GetObjectValueInt(item, "channelid");
									(*resp).streams[i1].streamid = cJSON_GetObjectValueInt(item, "streamid");
									(*resp).streams[i1].width = cJSON_GetObjectValueInt(item, "width");
									(*resp).streams[i1].height = cJSON_GetObjectValueInt(item, "height");
									(*resp).streams[i1].frameRate = cJSON_GetObjectValueInt(item, "frameRate");
									(*resp).streams[i1].bitRate = cJSON_GetObjectValueInt(item, "bitRate");
									(*resp).streams[i1].ngop_s = cJSON_GetObjectValueInt(item, "ngop_s");
									(*resp).streams[i1].quality = cJSON_GetObjectValueInt(item, "quality");
									(*resp).streams[i1].rcMode = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "rcMode"));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_stream_get_params(grpc_t *grpc, PARAM_REQ_vms_stream_get_params *req, PARAM_RESP_vms_stream_get_params *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_stream_get_params(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_stream_get_params(grpc, resp);
	}

	return ret;
}

int SERVER_vms_stream_get_params(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_stream_get_params req;
	PARAM_RESP_vms_stream_get_params resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_stream_get_params(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.streams)
		{
			int i1;
			cJSON *streams = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "streams", streams);
			for (i1=0;i1<resp.streams_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(streams, item);
				cJSON_AddNumberToObject(item, "channelid", resp.streams[i1].channelid);
				cJSON_AddNumberToObject(item, "streamid", resp.streams[i1].streamid);
				cJSON_AddNumberToObject(item, "width", resp.streams[i1].width);
				cJSON_AddNumberToObject(item, "height", resp.streams[i1].height);
				cJSON_AddNumberToObject(item, "frameRate", resp.streams[i1].frameRate);
				cJSON_AddNumberToObject(item, "bitRate", resp.streams[i1].bitRate);
				cJSON_AddNumberToObject(item, "ngop_s", resp.streams[i1].ngop_s);
				cJSON_AddNumberToObject(item, "quality", resp.streams[i1].quality);
				if (resp.streams[i1].rcMode)
				{
					cJSON_AddStringToObject(item, "rcMode", resp.streams[i1].rcMode);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_stream_set_param(grpc_t *grpc, PARAM_REQ_vms_stream_set_param *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "stream_set_param");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "streamid", (*req).streamid);
		cJSON_AddNumberToObject(param, "width", (*req).width);
		cJSON_AddNumberToObject(param, "height", (*req).height);
		cJSON_AddNumberToObject(param, "frameRate", (*req).frameRate);
		cJSON_AddNumberToObject(param, "bitRate", (*req).bitRate);
		cJSON_AddNumberToObject(param, "ngop_s", (*req).ngop_s);
		cJSON_AddNumberToObject(param, "quality", (*req).quality);
		if ((*req).rcMode)
		{
			cJSON_AddStringToObject(param, "rcMode", (*req).rcMode);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_stream_set_param(grpc_t *grpc, PARAM_RESP_vms_stream_set_param *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_stream_set_param(grpc_t *grpc, PARAM_REQ_vms_stream_set_param *req, PARAM_RESP_vms_stream_set_param *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_stream_set_param(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_stream_set_param(grpc, resp);
	}

	return ret;
}

int SERVER_vms_stream_set_param(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_stream_set_param req;
	PARAM_RESP_vms_stream_set_param resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.streamid = cJSON_GetObjectValueInt(param, "streamid");
			req.width = cJSON_GetObjectValueInt(param, "width");
			req.height = cJSON_GetObjectValueInt(param, "height");
			req.frameRate = cJSON_GetObjectValueInt(param, "frameRate");
			req.bitRate = cJSON_GetObjectValueInt(param, "bitRate");
			req.ngop_s = cJSON_GetObjectValueInt(param, "ngop_s");
			req.quality = cJSON_GetObjectValueInt(param, "quality");
			req.rcMode = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "rcMode"));
		}
	}
	ret = USERDEF_vms_stream_set_param(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_stream_get_ability(grpc_t *grpc, PARAM_REQ_vms_stream_get_ability *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "stream_get_ability");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "streamid", (*req).streamid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_stream_get_ability(grpc_t *grpc, PARAM_RESP_vms_stream_get_ability *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *resolutions = cJSON_GetObjectItem(result, "resolutions");
				if (resolutions)
				{
					int i1;
					int cnt = cJSON_GetArraySize(resolutions);
					(*resp).resolutions_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).resolutions = grpc_malloc(grpc, cnt * sizeof((*resp).resolutions[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(resolutions, i1);
								if (item)
								{
									(*resp).resolutions[i1].width = cJSON_GetObjectValueInt(item, "width");
									(*resp).resolutions[i1].height = cJSON_GetObjectValueInt(item, "height");
								}
							}
						}
					}
				}
			}
			{
				cJSON *inputRes = cJSON_GetObjectItem(result, "inputRes");
				if (inputRes)
				{
					(*resp).inputRes.width = cJSON_GetObjectValueInt(inputRes, "width");
					(*resp).inputRes.height = cJSON_GetObjectValueInt(inputRes, "height");
				}
			}
			(*resp).maxFramerate = cJSON_GetObjectValueInt(result, "maxFramerate");
			(*resp).minFramerate = cJSON_GetObjectValueInt(result, "minFramerate");
			(*resp).maxQuality = cJSON_GetObjectValueInt(result, "maxQuality");
			(*resp).minQuality = cJSON_GetObjectValueInt(result, "minQuality");
			(*resp).maxNGOP = cJSON_GetObjectValueInt(result, "maxNGOP");
			(*resp).minNGOP = cJSON_GetObjectValueInt(result, "minNGOP");
			(*resp).maxKBitrate = cJSON_GetObjectValueInt(result, "maxKBitrate");
			(*resp).minKBitrate = cJSON_GetObjectValueInt(result, "minKBitrate");
		}
	}
	return 0;
}

int CLIENT_vms_stream_get_ability(grpc_t *grpc, PARAM_REQ_vms_stream_get_ability *req, PARAM_RESP_vms_stream_get_ability *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_stream_get_ability(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_stream_get_ability(grpc, resp);
	}

	return ret;
}

int SERVER_vms_stream_get_ability(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_stream_get_ability req;
	PARAM_RESP_vms_stream_get_ability resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.streamid = cJSON_GetObjectValueInt(param, "streamid");
		}
	}
	ret = USERDEF_vms_stream_get_ability(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.resolutions)
		{
			int i1;
			cJSON *resolutions = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "resolutions", resolutions);
			for (i1=0;i1<resp.resolutions_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(resolutions, item);
				cJSON_AddNumberToObject(item, "width", resp.resolutions[i1].width);
				cJSON_AddNumberToObject(item, "height", resp.resolutions[i1].height);
			}
		}
		{
			cJSON *inputRes = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "inputRes", inputRes);
			cJSON_AddNumberToObject(inputRes, "width", resp.inputRes.width);
			cJSON_AddNumberToObject(inputRes, "height", resp.inputRes.height);
		}
		cJSON_AddNumberToObject(result, "maxFramerate", resp.maxFramerate);
		cJSON_AddNumberToObject(result, "minFramerate", resp.minFramerate);
		cJSON_AddNumberToObject(result, "maxQuality", resp.maxQuality);
		cJSON_AddNumberToObject(result, "minQuality", resp.minQuality);
		cJSON_AddNumberToObject(result, "maxNGOP", resp.maxNGOP);
		cJSON_AddNumberToObject(result, "minNGOP", resp.minNGOP);
		cJSON_AddNumberToObject(result, "maxKBitrate", resp.maxKBitrate);
		cJSON_AddNumberToObject(result, "minKBitrate", resp.minKBitrate);
	}
	return 0;
}
int CLIENT_REQ_vms_stream_snapshot(grpc_t *grpc, PARAM_REQ_vms_stream_snapshot *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "stream_snapshot");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		cJSON_AddNumberToObject(param, "streamid", (*req).streamid);
		cJSON_AddNumberToObject(param, "width", (*req).width);
		cJSON_AddNumberToObject(param, "height", (*req).height);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_stream_snapshot(grpc_t *grpc, PARAM_RESP_vms_stream_snapshot *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).snapshot = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "snapshot"));
		}
	}
	return 0;
}

int CLIENT_vms_stream_snapshot(grpc_t *grpc, PARAM_REQ_vms_stream_snapshot *req, PARAM_RESP_vms_stream_snapshot *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_stream_snapshot(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_stream_snapshot(grpc, resp);
	}

	return ret;
}

int SERVER_vms_stream_snapshot(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_stream_snapshot req;
	PARAM_RESP_vms_stream_snapshot resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.streamid = cJSON_GetObjectValueInt(param, "streamid");
			req.width = cJSON_GetObjectValueInt(param, "width");
			req.height = cJSON_GetObjectValueInt(param, "height");
		}
	}
	ret = USERDEF_vms_stream_snapshot(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.snapshot)
		{
			cJSON_AddStringToObject(result, "snapshot", resp.snapshot);
		}
	}
	return 0;
}
int CLIENT_REQ_vms_screen_get_ability(grpc_t *grpc, PARAM_REQ_vms_screen_get_ability *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "screen_get_ability");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_screen_get_ability(grpc_t *grpc, PARAM_RESP_vms_screen_get_ability *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).nMaxChn = cJSON_GetObjectValueInt(result, "nMaxChn");
			{
				cJSON *nModeList = cJSON_GetObjectItem(result, "nModeList");
				if (nModeList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(nModeList);
					(*resp).nModeList_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).nModeList = grpc_malloc(grpc, cnt * sizeof((*resp).nModeList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							cJSON *item = cJSON_GetArrayItem(nModeList, i1);
							(*resp).nModeList[i1] = item->valueint;
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_screen_get_ability(grpc_t *grpc, PARAM_REQ_vms_screen_get_ability *req, PARAM_RESP_vms_screen_get_ability *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_screen_get_ability(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_screen_get_ability(grpc, resp);
	}

	return ret;
}

int SERVER_vms_screen_get_ability(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_screen_get_ability req;
	PARAM_RESP_vms_screen_get_ability resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
		}
	}
	ret = USERDEF_vms_screen_get_ability(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "nMaxChn", resp.nMaxChn);
		if (resp.nModeList)
		{
			int i1;
			cJSON *nModeList = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "nModeList", nModeList);
			for (i1=0;i1<resp.nModeList_cnt;i1++)
			{
				cJSON_AddNumberToArray(nModeList, resp.nModeList[i1]);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_screen_get_display(grpc_t *grpc, PARAM_REQ_vms_screen_get_display *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "screen_get_display");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_screen_get_display(grpc_t *grpc, PARAM_RESP_vms_screen_get_display *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).nViewMode = cJSON_GetObjectValueInt(result, "nViewMode");
			(*resp).nViewWindow = cJSON_GetObjectValueInt(result, "nViewWindow");
			(*resp).nSelected = cJSON_GetObjectValueInt(result, "nSelected");
			(*resp).nStartPos = cJSON_GetObjectValueInt(result, "nStartPos");
		}
	}
	return 0;
}

int CLIENT_vms_screen_get_display(grpc_t *grpc, PARAM_REQ_vms_screen_get_display *req, PARAM_RESP_vms_screen_get_display *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_screen_get_display(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_screen_get_display(grpc, resp);
	}

	return ret;
}

int SERVER_vms_screen_get_display(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_screen_get_display req;
	PARAM_RESP_vms_screen_get_display resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
		}
	}
	ret = USERDEF_vms_screen_get_display(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "nViewMode", resp.nViewMode);
		cJSON_AddNumberToObject(result, "nViewWindow", resp.nViewWindow);
		cJSON_AddNumberToObject(result, "nSelected", resp.nSelected);
		cJSON_AddNumberToObject(result, "nStartPos", resp.nStartPos);
	}
	return 0;
}
int CLIENT_REQ_vms_screen_set_display(grpc_t *grpc, PARAM_REQ_vms_screen_set_display *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "screen_set_display");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
		cJSON_AddNumberToObject(param, "nViewMode", (*req).nViewMode);
		cJSON_AddNumberToObject(param, "nViewWindow", (*req).nViewWindow);
		cJSON_AddNumberToObject(param, "nSelected", (*req).nSelected);
		cJSON_AddNumberToObject(param, "nStartPos", (*req).nStartPos);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_screen_set_display(grpc_t *grpc, PARAM_RESP_vms_screen_set_display *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_screen_set_display(grpc_t *grpc, PARAM_REQ_vms_screen_set_display *req, PARAM_RESP_vms_screen_set_display *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_screen_set_display(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_screen_set_display(grpc, resp);
	}

	return ret;
}

int SERVER_vms_screen_set_display(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_screen_set_display req;
	PARAM_RESP_vms_screen_set_display resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
			req.nViewMode = cJSON_GetObjectValueInt(param, "nViewMode");
			req.nViewWindow = cJSON_GetObjectValueInt(param, "nViewWindow");
			req.nSelected = cJSON_GetObjectValueInt(param, "nSelected");
			req.nStartPos = cJSON_GetObjectValueInt(param, "nStartPos");
		}
	}
	ret = USERDEF_vms_screen_set_display(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_screen_get_tour(grpc_t *grpc, PARAM_REQ_vms_screen_get_tour *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "screen_get_tour");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_screen_get_tour(grpc_t *grpc, PARAM_RESP_vms_screen_get_tour *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).bTour = cJSON_GetObjectValueBool(result, "bTour");
			(*resp).secInterval = cJSON_GetObjectValueInt(result, "secInterval");
		}
	}
	return 0;
}

int CLIENT_vms_screen_get_tour(grpc_t *grpc, PARAM_REQ_vms_screen_get_tour *req, PARAM_RESP_vms_screen_get_tour *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_screen_get_tour(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_screen_get_tour(grpc, resp);
	}

	return ret;
}

int SERVER_vms_screen_get_tour(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_screen_get_tour req;
	PARAM_RESP_vms_screen_get_tour resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
		}
	}
	ret = USERDEF_vms_screen_get_tour(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddBoolToObject(result, "bTour", resp.bTour);
		cJSON_AddNumberToObject(result, "secInterval", resp.secInterval);
	}
	return 0;
}
int CLIENT_REQ_vms_screen_set_tour(grpc_t *grpc, PARAM_REQ_vms_screen_set_tour *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "screen_set_tour");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
		{
			cJSON *stTour = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "stTour", stTour);
			cJSON_AddNumberToObject(stTour, "bTour", (*req).stTour.bTour);
			cJSON_AddNumberToObject(stTour, "secInterval", (*req).stTour.secInterval);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_screen_set_tour(grpc_t *grpc, PARAM_RESP_vms_screen_set_tour *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_screen_set_tour(grpc_t *grpc, PARAM_REQ_vms_screen_set_tour *req, PARAM_RESP_vms_screen_set_tour *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_screen_set_tour(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_screen_set_tour(grpc, resp);
	}

	return ret;
}

int SERVER_vms_screen_set_tour(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_screen_set_tour req;
	PARAM_RESP_vms_screen_set_tour resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
			{
				cJSON *stTour = cJSON_GetObjectItem(param, "stTour");
				if (stTour)
				{
					req.stTour.bTour = cJSON_GetObjectValueInt(stTour, "bTour");
					req.stTour.secInterval = cJSON_GetObjectValueInt(stTour, "secInterval");
				}
			}
		}
	}
	ret = USERDEF_vms_screen_set_tour(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_screen_get_screen(grpc_t *grpc, PARAM_REQ_vms_screen_get_screen *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "screen_get_screen");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_screen_get_screen(grpc_t *grpc, PARAM_RESP_vms_screen_get_screen *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).nBright = cJSON_GetObjectValueInt(result, "nBright");
			(*resp).nContrast = cJSON_GetObjectValueInt(result, "nContrast");
			(*resp).nSaturation = cJSON_GetObjectValueInt(result, "nSaturation");
			{
				cJSON *stResolution = cJSON_GetObjectItem(result, "stResolution");
				if (stResolution)
				{
					(*resp).stResolution.nW = cJSON_GetObjectValueInt(stResolution, "nW");
					(*resp).stResolution.nH = cJSON_GetObjectValueInt(stResolution, "nH");
				}
			}
			{
				cJSON *stList = cJSON_GetObjectItem(result, "stList");
				if (stList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(stList);
					(*resp).stList_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).stList = grpc_malloc(grpc, cnt * sizeof((*resp).stList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(stList, i1);
								if (item)
								{
									(*resp).stList[i1].nW = cJSON_GetObjectValueInt(item, "nW");
									(*resp).stList[i1].nH = cJSON_GetObjectValueInt(item, "nH");
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_screen_get_screen(grpc_t *grpc, PARAM_REQ_vms_screen_get_screen *req, PARAM_RESP_vms_screen_get_screen *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_screen_get_screen(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_screen_get_screen(grpc, resp);
	}

	return ret;
}

int SERVER_vms_screen_get_screen(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_screen_get_screen req;
	PARAM_RESP_vms_screen_get_screen resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_screen_get_screen(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "nBright", resp.nBright);
		cJSON_AddNumberToObject(result, "nContrast", resp.nContrast);
		cJSON_AddNumberToObject(result, "nSaturation", resp.nSaturation);
		{
			cJSON *stResolution = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "stResolution", stResolution);
			cJSON_AddNumberToObject(stResolution, "nW", resp.stResolution.nW);
			cJSON_AddNumberToObject(stResolution, "nH", resp.stResolution.nH);
		}
		if (resp.stList)
		{
			int i1;
			cJSON *stList = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "stList", stList);
			for (i1=0;i1<resp.stList_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(stList, item);
				cJSON_AddNumberToObject(item, "nW", resp.stList[i1].nW);
				cJSON_AddNumberToObject(item, "nH", resp.stList[i1].nH);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_screen_set_screen(grpc_t *grpc, PARAM_REQ_vms_screen_set_screen *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "screen_set_screen");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "nBright", (*req).nBright);
		cJSON_AddNumberToObject(param, "nContrast", (*req).nContrast);
		cJSON_AddNumberToObject(param, "nSaturation", (*req).nSaturation);
		{
			cJSON *stResolution = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "stResolution", stResolution);
			cJSON_AddNumberToObject(stResolution, "nW", (*req).stResolution.nW);
			cJSON_AddNumberToObject(stResolution, "nH", (*req).stResolution.nH);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_screen_set_screen(grpc_t *grpc, PARAM_RESP_vms_screen_set_screen *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_screen_set_screen(grpc_t *grpc, PARAM_REQ_vms_screen_set_screen *req, PARAM_RESP_vms_screen_set_screen *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_screen_set_screen(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_screen_set_screen(grpc, resp);
	}

	return ret;
}

int SERVER_vms_screen_set_screen(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_screen_set_screen req;
	PARAM_RESP_vms_screen_set_screen resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.nBright = cJSON_GetObjectValueInt(param, "nBright");
			req.nContrast = cJSON_GetObjectValueInt(param, "nContrast");
			req.nSaturation = cJSON_GetObjectValueInt(param, "nSaturation");
			{
				cJSON *stResolution = cJSON_GetObjectItem(param, "stResolution");
				if (stResolution)
				{
					req.stResolution.nW = cJSON_GetObjectValueInt(stResolution, "nW");
					req.stResolution.nH = cJSON_GetObjectValueInt(stResolution, "nH");
				}
			}
		}
	}
	ret = USERDEF_vms_screen_set_screen(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_add_vs *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "vsource_add_vs");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
		cJSON_AddNumberToObject(param, "nCh", (*req).nCh);
		{
			cJSON *stVs = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "stVs", stVs);
			if ((*req).stVs.acGroup)
			{
				cJSON_AddStringToObject(stVs, "acGroup", (*req).stVs.acGroup);
			}
			cJSON_AddNumberToObject(stVs, "nYSTNO", (*req).stVs.nYSTNO);
			if ((*req).stVs.acDevIP)
			{
				cJSON_AddStringToObject(stVs, "acDevIP", (*req).stVs.acDevIP);
			}
			cJSON_AddNumberToObject(stVs, "nPort", (*req).stVs.nPort);
			cJSON_AddNumberToObject(stVs, "nChannel", (*req).stVs.nChannel);
			if ((*req).stVs.acID)
			{
				cJSON_AddStringToObject(stVs, "acID", (*req).stVs.acID);
			}
			if ((*req).stVs.acPW)
			{
				cJSON_AddStringToObject(stVs, "acPW", (*req).stVs.acPW);
			}
			if ((*req).stVs.nIpcType)
			{
				cJSON_AddStringToObject(stVs, "nIpcType", (*req).stVs.nIpcType);
			}
			if ((*req).stVs.acServiceAddr)
			{
				cJSON_AddStringToObject(stVs, "acServiceAddr", (*req).stVs.acServiceAddr);
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_vsource_add_vs(grpc_t *grpc, PARAM_RESP_vms_vsource_add_vs *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_add_vs *req, PARAM_RESP_vms_vsource_add_vs *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_vsource_add_vs(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_vsource_add_vs(grpc, resp);
	}

	return ret;
}

int SERVER_vms_vsource_add_vs(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_vsource_add_vs req;
	PARAM_RESP_vms_vsource_add_vs resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
			req.nCh = cJSON_GetObjectValueInt(param, "nCh");
			{
				cJSON *stVs = cJSON_GetObjectItem(param, "stVs");
				if (stVs)
				{
					req.stVs.acGroup = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acGroup"));
					req.stVs.nYSTNO = cJSON_GetObjectValueInt(stVs, "nYSTNO");
					req.stVs.acDevIP = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acDevIP"));
					req.stVs.nPort = cJSON_GetObjectValueInt(stVs, "nPort");
					req.stVs.nChannel = cJSON_GetObjectValueInt(stVs, "nChannel");
					req.stVs.acID = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acID"));
					req.stVs.acPW = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acPW"));
					req.stVs.nIpcType = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "nIpcType"));
					req.stVs.acServiceAddr = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acServiceAddr"));
				}
			}
		}
	}
	ret = USERDEF_vms_vsource_add_vs(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_delete_vs *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "vsource_delete_vs");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
		cJSON_AddNumberToObject(param, "nCh", (*req).nCh);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_vsource_delete_vs(grpc_t *grpc, PARAM_RESP_vms_vsource_delete_vs *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_delete_vs *req, PARAM_RESP_vms_vsource_delete_vs *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_vsource_delete_vs(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_vsource_delete_vs(grpc, resp);
	}

	return ret;
}

int SERVER_vms_vsource_delete_vs(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_vsource_delete_vs req;
	PARAM_RESP_vms_vsource_delete_vs resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
			req.nCh = cJSON_GetObjectValueInt(param, "nCh");
		}
	}
	ret = USERDEF_vms_vsource_delete_vs(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_modify_vs *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "vsource_modify_vs");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
		cJSON_AddNumberToObject(param, "nCh", (*req).nCh);
		{
			cJSON *stVs = cJSON_CreateObject();
			cJSON_AddItemToObject(param, "stVs", stVs);
			if ((*req).stVs.acGroup)
			{
				cJSON_AddStringToObject(stVs, "acGroup", (*req).stVs.acGroup);
			}
			cJSON_AddNumberToObject(stVs, "nYSTNO", (*req).stVs.nYSTNO);
			if ((*req).stVs.acDevIP)
			{
				cJSON_AddStringToObject(stVs, "acDevIP", (*req).stVs.acDevIP);
			}
			cJSON_AddNumberToObject(stVs, "nPort", (*req).stVs.nPort);
			cJSON_AddNumberToObject(stVs, "nChannel", (*req).stVs.nChannel);
			if ((*req).stVs.acID)
			{
				cJSON_AddStringToObject(stVs, "acID", (*req).stVs.acID);
			}
			if ((*req).stVs.acPW)
			{
				cJSON_AddStringToObject(stVs, "acPW", (*req).stVs.acPW);
			}
			if ((*req).stVs.nIpcType)
			{
				cJSON_AddStringToObject(stVs, "nIpcType", (*req).stVs.nIpcType);
			}
			if ((*req).stVs.acServiceAddr)
			{
				cJSON_AddStringToObject(stVs, "acServiceAddr", (*req).stVs.acServiceAddr);
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_vsource_modify_vs(grpc_t *grpc, PARAM_RESP_vms_vsource_modify_vs *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_modify_vs *req, PARAM_RESP_vms_vsource_modify_vs *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_vsource_modify_vs(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_vsource_modify_vs(grpc, resp);
	}

	return ret;
}

int SERVER_vms_vsource_modify_vs(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_vsource_modify_vs req;
	PARAM_RESP_vms_vsource_modify_vs resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
			req.nCh = cJSON_GetObjectValueInt(param, "nCh");
			{
				cJSON *stVs = cJSON_GetObjectItem(param, "stVs");
				if (stVs)
				{
					req.stVs.acGroup = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acGroup"));
					req.stVs.nYSTNO = cJSON_GetObjectValueInt(stVs, "nYSTNO");
					req.stVs.acDevIP = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acDevIP"));
					req.stVs.nPort = cJSON_GetObjectValueInt(stVs, "nPort");
					req.stVs.nChannel = cJSON_GetObjectValueInt(stVs, "nChannel");
					req.stVs.acID = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acID"));
					req.stVs.acPW = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acPW"));
					req.stVs.nIpcType = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "nIpcType"));
					req.stVs.acServiceAddr = grpc_strdup(grpc, cJSON_GetObjectValueString(stVs, "acServiceAddr"));
				}
			}
		}
	}
	ret = USERDEF_vms_vsource_modify_vs(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vms_vsource_get_chn_status *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "vsource_get_chn_status");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddNumberToObject(param, "screen", (*req).screen);
		cJSON_AddNumberToObject(param, "nCh", (*req).nCh);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_vsource_get_chn_status(grpc_t *grpc, PARAM_RESP_vms_vsource_get_chn_status *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).screen = cJSON_GetObjectValueInt(result, "screen");
			(*resp).nCh = cJSON_GetObjectValueInt(result, "nCh");
			(*resp).status = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "status"));
		}
	}
	return 0;
}

int CLIENT_vms_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vms_vsource_get_chn_status *req, PARAM_RESP_vms_vsource_get_chn_status *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_vsource_get_chn_status(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_vsource_get_chn_status(grpc, resp);
	}

	return ret;
}

int SERVER_vms_vsource_get_chn_status(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_vsource_get_chn_status req;
	PARAM_RESP_vms_vsource_get_chn_status resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.screen = cJSON_GetObjectValueInt(param, "screen");
			req.nCh = cJSON_GetObjectValueInt(param, "nCh");
		}
	}
	ret = USERDEF_vms_vsource_get_chn_status(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		cJSON_AddNumberToObject(result, "screen", resp.screen);
		cJSON_AddNumberToObject(result, "nCh", resp.nCh);
		if (resp.status)
		{
			cJSON_AddStringToObject(result, "status", resp.status);
		}
	}
	return 0;
}
int CLIENT_REQ_vms_channel_get(grpc_t *grpc, PARAM_REQ_vms_channel_get *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "channel_get");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_channel_get(grpc_t *grpc, PARAM_RESP_vms_channel_get *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *channels = cJSON_GetObjectItem(result, "channels");
				if (channels)
				{
					int i1;
					int cnt = cJSON_GetArraySize(channels);
					(*resp).channels_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).channels = grpc_malloc(grpc, cnt * sizeof((*resp).channels[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(channels, i1);
								if (item)
								{
									(*resp).channels[i1].type = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "type"));
									(*resp).channels[i1].sid = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "sid"));
									(*resp).channels[i1].protocol = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "protocol"));
									(*resp).channels[i1].bMainStream = cJSON_GetObjectValueBool(item, "bMainStream");
									(*resp).channels[i1].bSubStream = cJSON_GetObjectValueBool(item, "bSubStream");
									(*resp).channels[i1].mainstream = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "mainstream"));
									(*resp).channels[i1].substream = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "substream"));
									(*resp).channels[i1].ip = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "ip"));
									(*resp).channels[i1].port = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "port"));
									(*resp).channels[i1].channelcnt = cJSON_GetObjectValueInt(item, "channelcnt");
									(*resp).channels[i1].channelid = cJSON_GetObjectValueInt(item, "channelid");
									(*resp).channels[i1].name = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "name"));
									(*resp).channels[i1].passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "passwd"));
									(*resp).channels[i1].streamserverip = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "streamserverip"));
									(*resp).channels[i1].streamserverport = cJSON_GetObjectValueInt(item, "streamserverport");
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_channel_get(grpc_t *grpc, PARAM_REQ_vms_channel_get *req, PARAM_RESP_vms_channel_get *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_channel_get(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_channel_get(grpc, resp);
	}

	return ret;
}

int SERVER_vms_channel_get(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_channel_get req;
	PARAM_RESP_vms_channel_get resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_channel_get(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.channels)
		{
			int i1;
			cJSON *channels = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "channels", channels);
			for (i1=0;i1<resp.channels_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(channels, item);
				if (resp.channels[i1].type)
				{
					cJSON_AddStringToObject(item, "type", resp.channels[i1].type);
				}
				if (resp.channels[i1].sid)
				{
					cJSON_AddStringToObject(item, "sid", resp.channels[i1].sid);
				}
				if (resp.channels[i1].protocol)
				{
					cJSON_AddStringToObject(item, "protocol", resp.channels[i1].protocol);
				}
				cJSON_AddBoolToObject(item, "bMainStream", resp.channels[i1].bMainStream);
				cJSON_AddBoolToObject(item, "bSubStream", resp.channels[i1].bSubStream);
				if (resp.channels[i1].mainstream)
				{
					cJSON_AddStringToObject(item, "mainstream", resp.channels[i1].mainstream);
				}
				if (resp.channels[i1].substream)
				{
					cJSON_AddStringToObject(item, "substream", resp.channels[i1].substream);
				}
				if (resp.channels[i1].ip)
				{
					cJSON_AddStringToObject(item, "ip", resp.channels[i1].ip);
				}
				if (resp.channels[i1].port)
				{
					cJSON_AddStringToObject(item, "port", resp.channels[i1].port);
				}
				cJSON_AddNumberToObject(item, "channelcnt", resp.channels[i1].channelcnt);
				cJSON_AddNumberToObject(item, "channelid", resp.channels[i1].channelid);
				if (resp.channels[i1].name)
				{
					cJSON_AddStringToObject(item, "name", resp.channels[i1].name);
				}
				if (resp.channels[i1].passwd)
				{
					cJSON_AddStringToObject(item, "passwd", resp.channels[i1].passwd);
				}
				if (resp.channels[i1].streamserverip)
				{
					cJSON_AddStringToObject(item, "streamserverip", resp.channels[i1].streamserverip);
				}
				cJSON_AddNumberToObject(item, "streamserverport", resp.channels[i1].streamserverport);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_channel_add(grpc_t *grpc, PARAM_REQ_vms_channel_add *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "channel_add");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).channels)
		{
			int i1;
			cJSON *channels = cJSON_CreateArray();
			cJSON_AddItemToObject(param, "channels", channels);
			for (i1=0;i1<(*req).channels_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(channels, item);
				if ((*req).channels[i1].type)
				{
					cJSON_AddStringToObject(item, "type", (*req).channels[i1].type);
				}
				if ((*req).channels[i1].sid)
				{
					cJSON_AddStringToObject(item, "sid", (*req).channels[i1].sid);
				}
				if ((*req).channels[i1].protocol)
				{
					cJSON_AddStringToObject(item, "protocol", (*req).channels[i1].protocol);
				}
				cJSON_AddBoolToObject(item, "bMainStream", (*req).channels[i1].bMainStream);
				cJSON_AddBoolToObject(item, "bSubStream", (*req).channels[i1].bSubStream);
				if ((*req).channels[i1].mainstream)
				{
					cJSON_AddStringToObject(item, "mainstream", (*req).channels[i1].mainstream);
				}
				if ((*req).channels[i1].substream)
				{
					cJSON_AddStringToObject(item, "substream", (*req).channels[i1].substream);
				}
				if ((*req).channels[i1].ip)
				{
					cJSON_AddStringToObject(item, "ip", (*req).channels[i1].ip);
				}
				if ((*req).channels[i1].port)
				{
					cJSON_AddStringToObject(item, "port", (*req).channels[i1].port);
				}
				cJSON_AddNumberToObject(item, "channelcnt", (*req).channels[i1].channelcnt);
				cJSON_AddNumberToObject(item, "channelid", (*req).channels[i1].channelid);
				if ((*req).channels[i1].name)
				{
					cJSON_AddStringToObject(item, "name", (*req).channels[i1].name);
				}
				if ((*req).channels[i1].passwd)
				{
					cJSON_AddStringToObject(item, "passwd", (*req).channels[i1].passwd);
				}
				if ((*req).channels[i1].streamserverip)
				{
					cJSON_AddStringToObject(item, "streamserverip", (*req).channels[i1].streamserverip);
				}
				cJSON_AddNumberToObject(item, "streamserverport", (*req).channels[i1].streamserverport);
			}
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_channel_add(grpc_t *grpc, PARAM_RESP_vms_channel_add *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_channel_add(grpc_t *grpc, PARAM_REQ_vms_channel_add *req, PARAM_RESP_vms_channel_add *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_channel_add(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_channel_add(grpc, resp);
	}

	return ret;
}

int SERVER_vms_channel_add(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_channel_add req;
	PARAM_RESP_vms_channel_add resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			{
				cJSON *channels = cJSON_GetObjectItem(param, "channels");
				if (channels)
				{
					int i1;
					int cnt = cJSON_GetArraySize(channels);
					req.channels_cnt = cnt;
					if (cnt > 0)
					{
						req.channels = grpc_malloc(grpc, cnt * sizeof(req.channels[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(channels, i1);
								if (item)
								{
									req.channels[i1].type = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "type"));
									req.channels[i1].sid = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "sid"));
									req.channels[i1].protocol = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "protocol"));
									req.channels[i1].bMainStream = cJSON_GetObjectValueBool(item, "bMainStream");
									req.channels[i1].bSubStream = cJSON_GetObjectValueBool(item, "bSubStream");
									req.channels[i1].mainstream = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "mainstream"));
									req.channels[i1].substream = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "substream"));
									req.channels[i1].ip = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "ip"));
									req.channels[i1].port = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "port"));
									req.channels[i1].channelcnt = cJSON_GetObjectValueInt(item, "channelcnt");
									req.channels[i1].channelid = cJSON_GetObjectValueInt(item, "channelid");
									req.channels[i1].name = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "name"));
									req.channels[i1].passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "passwd"));
									req.channels[i1].streamserverip = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "streamserverip"));
									req.channels[i1].streamserverport = cJSON_GetObjectValueInt(item, "streamserverport");
								}
							}
						}
					}
				}
			}
		}
	}
	ret = USERDEF_vms_channel_add(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_channel_remove(grpc_t *grpc, PARAM_REQ_vms_channel_remove *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "channel_remove");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).type)
		{
			cJSON_AddStringToObject(param, "type", (*req).type);
		}
		if ((*req).sid)
		{
			cJSON_AddStringToObject(param, "sid", (*req).sid);
		}
		if ((*req).protocol)
		{
			cJSON_AddStringToObject(param, "protocol", (*req).protocol);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_channel_remove(grpc_t *grpc, PARAM_RESP_vms_channel_remove *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_channel_remove(grpc_t *grpc, PARAM_REQ_vms_channel_remove *req, PARAM_RESP_vms_channel_remove *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_channel_remove(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_channel_remove(grpc, resp);
	}

	return ret;
}

int SERVER_vms_channel_remove(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_channel_remove req;
	PARAM_RESP_vms_channel_remove resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.type = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "type"));
			req.sid = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "sid"));
			req.protocol = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "protocol"));
		}
	}
	ret = USERDEF_vms_channel_remove(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_channel_modify(grpc_t *grpc, PARAM_REQ_vms_channel_modify *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "channel_modify");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).type)
		{
			cJSON_AddStringToObject(param, "type", (*req).type);
		}
		if ((*req).sid)
		{
			cJSON_AddStringToObject(param, "sid", (*req).sid);
		}
		if ((*req).protocol)
		{
			cJSON_AddStringToObject(param, "protocol", (*req).protocol);
		}
		cJSON_AddBoolToObject(param, "bMainStream", (*req).bMainStream);
		cJSON_AddBoolToObject(param, "bSubStream", (*req).bSubStream);
		if ((*req).mainstream)
		{
			cJSON_AddStringToObject(param, "mainstream", (*req).mainstream);
		}
		if ((*req).substream)
		{
			cJSON_AddStringToObject(param, "substream", (*req).substream);
		}
		if ((*req).ip)
		{
			cJSON_AddStringToObject(param, "ip", (*req).ip);
		}
		if ((*req).port)
		{
			cJSON_AddStringToObject(param, "port", (*req).port);
		}
		cJSON_AddNumberToObject(param, "channelcnt", (*req).channelcnt);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		if ((*req).passwd)
		{
			cJSON_AddStringToObject(param, "passwd", (*req).passwd);
		}
		if ((*req).streamserverip)
		{
			cJSON_AddStringToObject(param, "streamserverip", (*req).streamserverip);
		}
		cJSON_AddNumberToObject(param, "streamserverport", (*req).streamserverport);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_channel_modify(grpc_t *grpc, PARAM_RESP_vms_channel_modify *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_channel_modify(grpc_t *grpc, PARAM_REQ_vms_channel_modify *req, PARAM_RESP_vms_channel_modify *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_channel_modify(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_channel_modify(grpc, resp);
	}

	return ret;
}

int SERVER_vms_channel_modify(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_channel_modify req;
	PARAM_RESP_vms_channel_modify resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.type = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "type"));
			req.sid = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "sid"));
			req.protocol = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "protocol"));
			req.bMainStream = cJSON_GetObjectValueBool(param, "bMainStream");
			req.bSubStream = cJSON_GetObjectValueBool(param, "bSubStream");
			req.mainstream = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "mainstream"));
			req.substream = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "substream"));
			req.ip = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "ip"));
			req.port = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "port"));
			req.channelcnt = cJSON_GetObjectValueInt(param, "channelcnt");
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "passwd"));
			req.streamserverip = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "streamserverip"));
			req.streamserverport = cJSON_GetObjectValueInt(param, "streamserverport");
		}
	}
	ret = USERDEF_vms_channel_modify(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_broadcast_discovery(grpc_t *grpc, PARAM_REQ_vms_broadcast_discovery *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "broadcast_discovery");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_broadcast_discovery(grpc_t *grpc, PARAM_RESP_vms_broadcast_discovery *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).type = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "type"));
			(*resp).sid = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "sid"));
			(*resp).ip = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "ip"));
			(*resp).port = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "port"));
			(*resp).channelcnt = cJSON_GetObjectValueInt(result, "channelcnt");
		}
	}
	return 0;
}

int CLIENT_vms_broadcast_discovery(grpc_t *grpc, PARAM_REQ_vms_broadcast_discovery *req, PARAM_RESP_vms_broadcast_discovery *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_broadcast_discovery(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_broadcast_discovery(grpc, resp);
	}

	return ret;
}

int SERVER_vms_broadcast_discovery(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_broadcast_discovery req;
	PARAM_RESP_vms_broadcast_discovery resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_broadcast_discovery(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.type)
		{
			cJSON_AddStringToObject(result, "type", resp.type);
		}
		if (resp.sid)
		{
			cJSON_AddStringToObject(result, "sid", resp.sid);
		}
		if (resp.ip)
		{
			cJSON_AddStringToObject(result, "ip", resp.ip);
		}
		if (resp.port)
		{
			cJSON_AddStringToObject(result, "port", resp.port);
		}
		cJSON_AddNumberToObject(result, "channelcnt", resp.channelcnt);
	}
	return 0;
}
int CLIENT_REQ_vms_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_vms_broadcast_get_inet *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "broadcast_get_inet");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_broadcast_get_inet(grpc_t *grpc, PARAM_RESP_vms_broadcast_get_inet *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).iface = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "iface"));
			{
				cJSON *eth = cJSON_GetObjectItem(result, "eth");
				if (eth)
				{
					(*resp).eth.name = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "name"));
					(*resp).eth.bDHCP = cJSON_GetObjectValueBool(eth, "bDHCP");
					(*resp).eth.addr = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "addr"));
					(*resp).eth.mask = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "mask"));
					(*resp).eth.gateway = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "gateway"));
					(*resp).eth.mac = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "mac"));
					(*resp).eth.dns = grpc_strdup(grpc, cJSON_GetObjectValueString(eth, "dns"));
				}
			}
			{
				cJSON *ppp = cJSON_GetObjectItem(result, "ppp");
				if (ppp)
				{
					(*resp).ppp.name = grpc_strdup(grpc, cJSON_GetObjectValueString(ppp, "name"));
					(*resp).ppp.username = grpc_strdup(grpc, cJSON_GetObjectValueString(ppp, "username"));
					(*resp).ppp.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(ppp, "passwd"));
				}
			}
			{
				cJSON *wifi = cJSON_GetObjectItem(result, "wifi");
				if (wifi)
				{
					(*resp).wifi.name = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "name"));
					(*resp).wifi.quality = cJSON_GetObjectValueInt(wifi, "quality");
					(*resp).wifi.keystat = cJSON_GetObjectValueInt(wifi, "keystat");
					(*resp).wifi.iestat = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "iestat"));
					(*resp).wifi.bDHCP = cJSON_GetObjectValueBool(wifi, "bDHCP");
					(*resp).wifi.addr = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "addr"));
					(*resp).wifi.mask = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "mask"));
					(*resp).wifi.gateway = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "gateway"));
					(*resp).wifi.mac = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "mac"));
					(*resp).wifi.dns = grpc_strdup(grpc, cJSON_GetObjectValueString(wifi, "dns"));
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_vms_broadcast_get_inet *req, PARAM_RESP_vms_broadcast_get_inet *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_broadcast_get_inet(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_broadcast_get_inet(grpc, resp);
	}

	return ret;
}

int SERVER_vms_broadcast_get_inet(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_broadcast_get_inet req;
	PARAM_RESP_vms_broadcast_get_inet resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_broadcast_get_inet(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.iface)
		{
			cJSON_AddStringToObject(result, "iface", resp.iface);
		}
		{
			cJSON *eth = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "eth", eth);
			if (resp.eth.name)
			{
				cJSON_AddStringToObject(eth, "name", resp.eth.name);
			}
			cJSON_AddBoolToObject(eth, "bDHCP", resp.eth.bDHCP);
			if (resp.eth.addr)
			{
				cJSON_AddStringToObject(eth, "addr", resp.eth.addr);
			}
			if (resp.eth.mask)
			{
				cJSON_AddStringToObject(eth, "mask", resp.eth.mask);
			}
			if (resp.eth.gateway)
			{
				cJSON_AddStringToObject(eth, "gateway", resp.eth.gateway);
			}
			if (resp.eth.mac)
			{
				cJSON_AddStringToObject(eth, "mac", resp.eth.mac);
			}
			if (resp.eth.dns)
			{
				cJSON_AddStringToObject(eth, "dns", resp.eth.dns);
			}
		}
		{
			cJSON *ppp = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "ppp", ppp);
			if (resp.ppp.name)
			{
				cJSON_AddStringToObject(ppp, "name", resp.ppp.name);
			}
			if (resp.ppp.username)
			{
				cJSON_AddStringToObject(ppp, "username", resp.ppp.username);
			}
			if (resp.ppp.passwd)
			{
				cJSON_AddStringToObject(ppp, "passwd", resp.ppp.passwd);
			}
		}
		{
			cJSON *wifi = cJSON_CreateObject();
			cJSON_AddItemToObject(result, "wifi", wifi);
			if (resp.wifi.name)
			{
				cJSON_AddStringToObject(wifi, "name", resp.wifi.name);
			}
			cJSON_AddNumberToObject(wifi, "quality", resp.wifi.quality);
			cJSON_AddNumberToObject(wifi, "keystat", resp.wifi.keystat);
			if (resp.wifi.iestat)
			{
				cJSON_AddStringToObject(wifi, "iestat", resp.wifi.iestat);
			}
			cJSON_AddBoolToObject(wifi, "bDHCP", resp.wifi.bDHCP);
			if (resp.wifi.addr)
			{
				cJSON_AddStringToObject(wifi, "addr", resp.wifi.addr);
			}
			if (resp.wifi.mask)
			{
				cJSON_AddStringToObject(wifi, "mask", resp.wifi.mask);
			}
			if (resp.wifi.gateway)
			{
				cJSON_AddStringToObject(wifi, "gateway", resp.wifi.gateway);
			}
			if (resp.wifi.mac)
			{
				cJSON_AddStringToObject(wifi, "mac", resp.wifi.mac);
			}
			if (resp.wifi.dns)
			{
				cJSON_AddStringToObject(wifi, "dns", resp.wifi.dns);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_vms_broadcast_eth_set *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "broadcast_eth_set");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		cJSON_AddBoolToObject(param, "bDHCP", (*req).bDHCP);
		if ((*req).addr)
		{
			cJSON_AddStringToObject(param, "addr", (*req).addr);
		}
		if ((*req).mask)
		{
			cJSON_AddStringToObject(param, "mask", (*req).mask);
		}
		if ((*req).gateway)
		{
			cJSON_AddStringToObject(param, "gateway", (*req).gateway);
		}
		if ((*req).dns)
		{
			cJSON_AddStringToObject(param, "dns", (*req).dns);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_broadcast_eth_set(grpc_t *grpc, PARAM_RESP_vms_broadcast_eth_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_vms_broadcast_eth_set *req, PARAM_RESP_vms_broadcast_eth_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_broadcast_eth_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_broadcast_eth_set(grpc, resp);
	}

	return ret;
}

int SERVER_vms_broadcast_eth_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_broadcast_eth_set req;
	PARAM_RESP_vms_broadcast_eth_set resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.bDHCP = cJSON_GetObjectValueBool(param, "bDHCP");
			req.addr = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "addr"));
			req.mask = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "mask"));
			req.gateway = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "gateway"));
			req.dns = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "dns"));
		}
	}
	ret = USERDEF_vms_broadcast_eth_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_vms_broadcast_ppp_set *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "broadcast_ppp_set");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		if ((*req).username)
		{
			cJSON_AddStringToObject(param, "username", (*req).username);
		}
		if ((*req).passwd)
		{
			cJSON_AddStringToObject(param, "passwd", (*req).passwd);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_broadcast_ppp_set(grpc_t *grpc, PARAM_RESP_vms_broadcast_ppp_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_vms_broadcast_ppp_set *req, PARAM_RESP_vms_broadcast_ppp_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_broadcast_ppp_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_broadcast_ppp_set(grpc, resp);
	}

	return ret;
}

int SERVER_vms_broadcast_ppp_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_broadcast_ppp_set req;
	PARAM_RESP_vms_broadcast_ppp_set resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.username = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "username"));
			req.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "passwd"));
		}
	}
	ret = USERDEF_vms_broadcast_ppp_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_vms_broadcast_wifi_connect *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "broadcast_wifi_connect");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).name)
		{
			cJSON_AddStringToObject(param, "name", (*req).name);
		}
		if ((*req).passwd)
		{
			cJSON_AddStringToObject(param, "passwd", (*req).passwd);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_broadcast_wifi_connect(grpc_t *grpc, PARAM_RESP_vms_broadcast_wifi_connect *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vms_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_vms_broadcast_wifi_connect *req, PARAM_RESP_vms_broadcast_wifi_connect *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_broadcast_wifi_connect(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_broadcast_wifi_connect(grpc, resp);
	}

	return ret;
}

int SERVER_vms_broadcast_wifi_connect(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_broadcast_wifi_connect req;
	PARAM_RESP_vms_broadcast_wifi_connect resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.name = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "name"));
			req.passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "passwd"));
		}
	}
	ret = USERDEF_vms_broadcast_wifi_connect(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vms_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vms_broadcast_wifi_list_ap *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "broadcast_wifi_list_ap");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		cJSON_AddBoolToObject(param, "bResearch", (*req).bResearch);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_RESP_vms_broadcast_wifi_list_ap *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *apList = cJSON_GetObjectItem(result, "apList");
				if (apList)
				{
					int i1;
					int cnt = cJSON_GetArraySize(apList);
					(*resp).apList_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).apList = grpc_malloc(grpc, cnt * sizeof((*resp).apList[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(apList, i1);
								if (item)
								{
									(*resp).apList[i1].name = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "name"));
									(*resp).apList[i1].passwd = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "passwd"));
									(*resp).apList[i1].quality = cJSON_GetObjectValueInt(item, "quality");
									(*resp).apList[i1].keystat = cJSON_GetObjectValueInt(item, "keystat");
									(*resp).apList[i1].iestat = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "iestat"));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vms_broadcast_wifi_list_ap *req, PARAM_RESP_vms_broadcast_wifi_list_ap *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_broadcast_wifi_list_ap(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_broadcast_wifi_list_ap(grpc, resp);
	}

	return ret;
}

int SERVER_vms_broadcast_wifi_list_ap(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_broadcast_wifi_list_ap req;
	PARAM_RESP_vms_broadcast_wifi_list_ap resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.bResearch = cJSON_GetObjectValueBool(param, "bResearch");
		}
	}
	ret = USERDEF_vms_broadcast_wifi_list_ap(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.apList)
		{
			int i1;
			cJSON *apList = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "apList", apList);
			for (i1=0;i1<resp.apList_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(apList, item);
				if (resp.apList[i1].name)
				{
					cJSON_AddStringToObject(item, "name", resp.apList[i1].name);
				}
				if (resp.apList[i1].passwd)
				{
					cJSON_AddStringToObject(item, "passwd", resp.apList[i1].passwd);
				}
				cJSON_AddNumberToObject(item, "quality", resp.apList[i1].quality);
				cJSON_AddNumberToObject(item, "keystat", resp.apList[i1].keystat);
				if (resp.apList[i1].iestat)
				{
					cJSON_AddStringToObject(item, "iestat", resp.apList[i1].iestat);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_storage_get_info(grpc_t *grpc, PARAM_REQ_vms_storage_get_info *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "storage_get_info");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_storage_get_info(grpc_t *grpc, PARAM_RESP_vms_storage_get_info *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *disks = cJSON_GetObjectItem(result, "disks");
				if (disks)
				{
					int i1;
					int cnt = cJSON_GetArraySize(disks);
					(*resp).disks_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).disks = grpc_malloc(grpc, cnt * sizeof((*resp).disks[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(disks, i1);
								if (item)
								{
									(*resp).disks[i1].disk_str = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "disk_str"));
									(*resp).disks[i1].capacity = cJSON_GetObjectValueInt(item, "capacity");
									(*resp).disks[i1].status = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "status"));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_storage_get_info(grpc_t *grpc, PARAM_REQ_vms_storage_get_info *req, PARAM_RESP_vms_storage_get_info *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_storage_get_info(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_storage_get_info(grpc, resp);
	}

	return ret;
}

int SERVER_vms_storage_get_info(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_storage_get_info req;
	PARAM_RESP_vms_storage_get_info resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vms_storage_get_info(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.disks)
		{
			int i1;
			cJSON *disks = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "disks", disks);
			for (i1=0;i1<resp.disks_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(disks, item);
				if (resp.disks[i1].disk_str)
				{
					cJSON_AddStringToObject(item, "disk_str", resp.disks[i1].disk_str);
				}
				cJSON_AddNumberToObject(item, "capacity", resp.disks[i1].capacity);
				if (resp.disks[i1].status)
				{
					cJSON_AddStringToObject(item, "status", resp.disks[i1].status);
				}
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_vms_storage_start_intial_disk *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "storage_start_intial_disk");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).disk_str)
		{
			cJSON_AddStringToObject(param, "disk_str", (*req).disk_str);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_storage_start_intial_disk(grpc_t *grpc, PARAM_RESP_vms_storage_start_intial_disk *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).disk_str = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "disk_str"));
			(*resp).start_initial = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "start_initial"));
		}
	}
	return 0;
}

int CLIENT_vms_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_vms_storage_start_intial_disk *req, PARAM_RESP_vms_storage_start_intial_disk *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_storage_start_intial_disk(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_storage_start_intial_disk(grpc, resp);
	}

	return ret;
}

int SERVER_vms_storage_start_intial_disk(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_storage_start_intial_disk req;
	PARAM_RESP_vms_storage_start_intial_disk resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.disk_str = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "disk_str"));
		}
	}
	ret = USERDEF_vms_storage_start_intial_disk(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.disk_str)
		{
			cJSON_AddStringToObject(result, "disk_str", resp.disk_str);
		}
		if (resp.start_initial)
		{
			cJSON_AddStringToObject(result, "start_initial", resp.start_initial);
		}
	}
	return 0;
}
int CLIENT_REQ_vms_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_vms_storage_get_disk_initial_rate *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "storage_get_disk_initial_rate");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).disk_str)
		{
			cJSON_AddStringToObject(param, "disk_str", (*req).disk_str);
		}
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_RESP_vms_storage_get_disk_initial_rate *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).disk_str = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "disk_str"));
			(*resp).rate = cJSON_GetObjectValueInt(result, "rate");
		}
	}
	return 0;
}

int CLIENT_vms_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_vms_storage_get_disk_initial_rate *req, PARAM_RESP_vms_storage_get_disk_initial_rate *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_storage_get_disk_initial_rate(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_storage_get_disk_initial_rate(grpc, resp);
	}

	return ret;
}

int SERVER_vms_storage_get_disk_initial_rate(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_storage_get_disk_initial_rate req;
	PARAM_RESP_vms_storage_get_disk_initial_rate resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.disk_str = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "disk_str"));
		}
	}
	ret = USERDEF_vms_storage_get_disk_initial_rate(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.disk_str)
		{
			cJSON_AddStringToObject(result, "disk_str", resp.disk_str);
		}
		cJSON_AddNumberToObject(result, "rate", resp.rate);
	}
	return 0;
}
int CLIENT_REQ_vms_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_vms_storage_get_record_fragments *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "storage_get_record_fragments");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).sid)
		{
			cJSON_AddStringToObject(param, "sid", (*req).sid);
		}
		cJSON_AddNumberToObject(param, "start_year", (*req).start_year);
		cJSON_AddNumberToObject(param, "start_month", (*req).start_month);
		cJSON_AddNumberToObject(param, "start_day", (*req).start_day);
		cJSON_AddNumberToObject(param, "start_hour", (*req).start_hour);
		cJSON_AddNumberToObject(param, "start_minute", (*req).start_minute);
		cJSON_AddNumberToObject(param, "start_second", (*req).start_second);
		cJSON_AddNumberToObject(param, "end_year", (*req).end_year);
		cJSON_AddNumberToObject(param, "end_month", (*req).end_month);
		cJSON_AddNumberToObject(param, "end_day", (*req).end_day);
		cJSON_AddNumberToObject(param, "end_hour", (*req).end_hour);
		cJSON_AddNumberToObject(param, "end_minute", (*req).end_minute);
		cJSON_AddNumberToObject(param, "end_second", (*req).end_second);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_storage_get_record_fragments(grpc_t *grpc, PARAM_RESP_vms_storage_get_record_fragments *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			{
				cJSON *fragments = cJSON_GetObjectItem(result, "fragments");
				if (fragments)
				{
					int i1;
					int cnt = cJSON_GetArraySize(fragments);
					(*resp).fragments_cnt = cnt;
					if (cnt > 0)
					{
						(*resp).fragments = grpc_malloc(grpc, cnt * sizeof((*resp).fragments[0]));
						for (i1=0;i1<cnt;i1++)
						{
							{
								cJSON *item = cJSON_GetArrayItem(fragments, i1);
								if (item)
								{
									(*resp).fragments[i1].sid = grpc_strdup(grpc, cJSON_GetObjectValueString(item, "sid"));
									(*resp).fragments[i1].start_year = cJSON_GetObjectValueInt(item, "start_year");
									(*resp).fragments[i1].start_month = cJSON_GetObjectValueInt(item, "start_month");
									(*resp).fragments[i1].start_day = cJSON_GetObjectValueInt(item, "start_day");
									(*resp).fragments[i1].start_hour = cJSON_GetObjectValueInt(item, "start_hour");
									(*resp).fragments[i1].start_minute = cJSON_GetObjectValueInt(item, "start_minute");
									(*resp).fragments[i1].start_second = cJSON_GetObjectValueInt(item, "start_second");
									(*resp).fragments[i1].end_year = cJSON_GetObjectValueInt(item, "end_year");
									(*resp).fragments[i1].end_month = cJSON_GetObjectValueInt(item, "end_month");
									(*resp).fragments[i1].end_day = cJSON_GetObjectValueInt(item, "end_day");
									(*resp).fragments[i1].end_hour = cJSON_GetObjectValueInt(item, "end_hour");
									(*resp).fragments[i1].end_minute = cJSON_GetObjectValueInt(item, "end_minute");
									(*resp).fragments[i1].end_second = cJSON_GetObjectValueInt(item, "end_second");
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int CLIENT_vms_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_vms_storage_get_record_fragments *req, PARAM_RESP_vms_storage_get_record_fragments *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_storage_get_record_fragments(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_storage_get_record_fragments(grpc, resp);
	}

	return ret;
}

int SERVER_vms_storage_get_record_fragments(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_storage_get_record_fragments req;
	PARAM_RESP_vms_storage_get_record_fragments resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.sid = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "sid"));
			req.start_year = cJSON_GetObjectValueInt(param, "start_year");
			req.start_month = cJSON_GetObjectValueInt(param, "start_month");
			req.start_day = cJSON_GetObjectValueInt(param, "start_day");
			req.start_hour = cJSON_GetObjectValueInt(param, "start_hour");
			req.start_minute = cJSON_GetObjectValueInt(param, "start_minute");
			req.start_second = cJSON_GetObjectValueInt(param, "start_second");
			req.end_year = cJSON_GetObjectValueInt(param, "end_year");
			req.end_month = cJSON_GetObjectValueInt(param, "end_month");
			req.end_day = cJSON_GetObjectValueInt(param, "end_day");
			req.end_hour = cJSON_GetObjectValueInt(param, "end_hour");
			req.end_minute = cJSON_GetObjectValueInt(param, "end_minute");
			req.end_second = cJSON_GetObjectValueInt(param, "end_second");
		}
	}
	ret = USERDEF_vms_storage_get_record_fragments(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.fragments)
		{
			int i1;
			cJSON *fragments = cJSON_CreateArray();
			cJSON_AddItemToObject(result, "fragments", fragments);
			for (i1=0;i1<resp.fragments_cnt;i1++)
			{
				cJSON *item = cJSON_CreateObject();
				cJSON_AddItemToArray(fragments, item);
				if (resp.fragments[i1].sid)
				{
					cJSON_AddStringToObject(item, "sid", resp.fragments[i1].sid);
				}
				cJSON_AddNumberToObject(item, "start_year", resp.fragments[i1].start_year);
				cJSON_AddNumberToObject(item, "start_month", resp.fragments[i1].start_month);
				cJSON_AddNumberToObject(item, "start_day", resp.fragments[i1].start_day);
				cJSON_AddNumberToObject(item, "start_hour", resp.fragments[i1].start_hour);
				cJSON_AddNumberToObject(item, "start_minute", resp.fragments[i1].start_minute);
				cJSON_AddNumberToObject(item, "start_second", resp.fragments[i1].start_second);
				cJSON_AddNumberToObject(item, "end_year", resp.fragments[i1].end_year);
				cJSON_AddNumberToObject(item, "end_month", resp.fragments[i1].end_month);
				cJSON_AddNumberToObject(item, "end_day", resp.fragments[i1].end_day);
				cJSON_AddNumberToObject(item, "end_hour", resp.fragments[i1].end_hour);
				cJSON_AddNumberToObject(item, "end_minute", resp.fragments[i1].end_minute);
				cJSON_AddNumberToObject(item, "end_second", resp.fragments[i1].end_second);
			}
		}
	}
	return 0;
}
int CLIENT_REQ_vms_stream_get_service(grpc_t *grpc, PARAM_REQ_vms_stream_get_service *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "stream_get_service");

	{
		cJSON *param = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "param", param);
		if ((*req).type)
		{
			cJSON_AddStringToObject(param, "type", (*req).type);
		}
		if ((*req).sid)
		{
			cJSON_AddStringToObject(param, "sid", (*req).sid);
		}
		if ((*req).protocol)
		{
			cJSON_AddStringToObject(param, "protocol", (*req).protocol);
		}
		cJSON_AddBoolToObject(param, "bMainStream", (*req).bMainStream);
		cJSON_AddBoolToObject(param, "bSubStream", (*req).bSubStream);
		if ((*req).mainstream)
		{
			cJSON_AddStringToObject(param, "mainstream", (*req).mainstream);
		}
		if ((*req).substream)
		{
			cJSON_AddStringToObject(param, "substream", (*req).substream);
		}
		if ((*req).ip)
		{
			cJSON_AddStringToObject(param, "ip", (*req).ip);
		}
		if ((*req).port)
		{
			cJSON_AddStringToObject(param, "port", (*req).port);
		}
		cJSON_AddNumberToObject(param, "channelcnt", (*req).channelcnt);
		cJSON_AddNumberToObject(param, "channelid", (*req).channelid);
	}
	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vms_stream_get_service(grpc_t *grpc, PARAM_RESP_vms_stream_get_service *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	{
		cJSON *result = cJSON_GetObjectItem(grpc->root, "result");
		if (result)
		{
			(*resp).sid = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "sid"));
			(*resp).protocol = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "protocol"));
			(*resp).url = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "url"));
			(*resp).ip = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "ip"));
			(*resp).port = grpc_strdup(grpc, cJSON_GetObjectValueString(result, "port"));
			(*resp).channelid = cJSON_GetObjectValueInt(result, "channelid");
		}
	}
	return 0;
}

int CLIENT_vms_stream_get_service(grpc_t *grpc, PARAM_REQ_vms_stream_get_service *req, PARAM_RESP_vms_stream_get_service *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vms_stream_get_service(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vms_stream_get_service(grpc, resp);
	}

	return ret;
}

int SERVER_vms_stream_get_service(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vms_stream_get_service req;
	PARAM_RESP_vms_stream_get_service resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	{
		cJSON *param = cJSON_GetObjectItem(grpc->root, "param");
		if (param)
		{
			req.type = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "type"));
			req.sid = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "sid"));
			req.protocol = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "protocol"));
			req.bMainStream = cJSON_GetObjectValueBool(param, "bMainStream");
			req.bSubStream = cJSON_GetObjectValueBool(param, "bSubStream");
			req.mainstream = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "mainstream"));
			req.substream = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "substream"));
			req.ip = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "ip"));
			req.port = grpc_strdup(grpc, cJSON_GetObjectValueString(param, "port"));
			req.channelcnt = cJSON_GetObjectValueInt(param, "channelcnt");
			req.channelid = cJSON_GetObjectValueInt(param, "channelid");
		}
	}
	ret = USERDEF_vms_stream_get_service(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	{
		cJSON *result = cJSON_CreateObject();
		cJSON_AddItemToObject(grpc->root, "result", result);
		if (resp.sid)
		{
			cJSON_AddStringToObject(result, "sid", resp.sid);
		}
		if (resp.protocol)
		{
			cJSON_AddStringToObject(result, "protocol", resp.protocol);
		}
		if (resp.url)
		{
			cJSON_AddStringToObject(result, "url", resp.url);
		}
		if (resp.ip)
		{
			cJSON_AddStringToObject(result, "ip", resp.ip);
		}
		if (resp.port)
		{
			cJSON_AddStringToObject(result, "port", resp.port);
		}
		cJSON_AddNumberToObject(result, "channelid", resp.channelid);
	}
	return 0;
}
