// This file is generated auto. Do not modify it anytime.
#include "vds.h"

grpcMethod_t vds_methodList[] = {
		{"account_get_users"             , USERDEF_RESP_vds_account_get_users              , SERVER_vds_account_get_users                    , GRPC_USER_LEVEL_Administrator   },
		{"account_add_user"              , USERDEF_RESP_vds_account_add_user               , SERVER_vds_account_add_user                     , GRPC_USER_LEVEL_Administrator   },
		{"account_del_user"              , USERDEF_RESP_vds_account_del_user               , SERVER_vds_account_del_user                     , GRPC_USER_LEVEL_Administrator   },
		{"account_modify_user"           , USERDEF_RESP_vds_account_modify_user            , SERVER_vds_account_modify_user                  , GRPC_USER_LEVEL_Administrator   },
		{"connection_get_list"           , USERDEF_RESP_vds_connection_get_list            , SERVER_vds_connection_get_list                  , GRPC_USER_LEVEL_Administrator   },
		{"connection_breakoff"           , USERDEF_RESP_vds_connection_breakoff            , SERVER_vds_connection_breakoff                  , GRPC_USER_LEVEL_Administrator   },
		{"dev_get_hwinfo"                , USERDEF_RESP_vds_dev_get_hwinfo                 , SERVER_vds_dev_get_hwinfo                       , GRPC_USER_LEVEL_Administrator   },
		{"dev_get_info"                  , USERDEF_RESP_vds_dev_get_info                   , SERVER_vds_dev_get_info                         , GRPC_USER_LEVEL_Administrator   },
		{"dev_set_info"                  , USERDEF_RESP_vds_dev_set_info                   , SERVER_vds_dev_set_info                         , GRPC_USER_LEVEL_Administrator   },
		{"dev_stime"                     , USERDEF_RESP_vds_dev_stime                      , SERVER_vds_dev_stime                            , GRPC_USER_LEVEL_Administrator   },
		{"dev_gtime"                     , USERDEF_RESP_vds_dev_gtime                      , SERVER_vds_dev_gtime                            , GRPC_USER_LEVEL_Administrator   },
		{"dev_ntp_set"                   , USERDEF_RESP_vds_dev_ntp_set                    , SERVER_vds_dev_ntp_set                          , GRPC_USER_LEVEL_Administrator   },
		{"dev_ntp_get"                   , USERDEF_RESP_vds_dev_ntp_get                    , SERVER_vds_dev_ntp_get                          , GRPC_USER_LEVEL_Administrator   },
		{"dev_reboot"                    , USERDEF_RESP_vds_dev_reboot                     , SERVER_vds_dev_reboot                           , GRPC_USER_LEVEL_Administrator   },
		{"dev_factory_default"           , USERDEF_RESP_vds_dev_factory_default            , SERVER_vds_dev_factory_default                  , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_get_inet"             , USERDEF_RESP_vds_ifconfig_get_inet              , SERVER_vds_ifconfig_get_inet                    , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_eth_set"              , USERDEF_RESP_vds_ifconfig_eth_set               , SERVER_vds_ifconfig_eth_set                     , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_ppp_set"              , USERDEF_RESP_vds_ifconfig_ppp_set               , SERVER_vds_ifconfig_ppp_set                     , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_wifi_connect"         , USERDEF_RESP_vds_ifconfig_wifi_connect          , SERVER_vds_ifconfig_wifi_connect                , GRPC_USER_LEVEL_Administrator   },
		{"ifconfig_wifi_list_ap"         , USERDEF_RESP_vds_ifconfig_wifi_list_ap          , SERVER_vds_ifconfig_wifi_list_ap                , GRPC_USER_LEVEL_Administrator   },
		{"screen_get_ability"            , USERDEF_RESP_vds_screen_get_ability             , SERVER_vds_screen_get_ability                   , GRPC_USER_LEVEL_Administrator   },
		{"screen_get_display"            , USERDEF_RESP_vds_screen_get_display             , SERVER_vds_screen_get_display                   , GRPC_USER_LEVEL_Administrator   },
		{"screen_set_display"            , USERDEF_RESP_vds_screen_set_display             , SERVER_vds_screen_set_display                   , GRPC_USER_LEVEL_Administrator   },
		{"screen_get_tour"               , USERDEF_RESP_vds_screen_get_tour                , SERVER_vds_screen_get_tour                      , GRPC_USER_LEVEL_Administrator   },
		{"screen_set_tour"               , USERDEF_RESP_vds_screen_set_tour                , SERVER_vds_screen_set_tour                      , GRPC_USER_LEVEL_Administrator   },
		{"screen_get_screen"             , USERDEF_RESP_vds_screen_get_screen              , SERVER_vds_screen_get_screen                    , GRPC_USER_LEVEL_Administrator   },
		{"screen_set_screen"             , USERDEF_RESP_vds_screen_set_screen              , SERVER_vds_screen_set_screen                    , GRPC_USER_LEVEL_Administrator   },
		{"vsource_add_vs"                , USERDEF_RESP_vds_vsource_add_vs                 , SERVER_vds_vsource_add_vs                       , GRPC_USER_LEVEL_Administrator   },
		{"vsource_delete_vs"             , USERDEF_RESP_vds_vsource_delete_vs              , SERVER_vds_vsource_delete_vs                    , GRPC_USER_LEVEL_Administrator   },
		{"vsource_modify_vs"             , USERDEF_RESP_vds_vsource_modify_vs              , SERVER_vds_vsource_modify_vs                    , GRPC_USER_LEVEL_Administrator   },
		{"vsource_get_chn_status"        , USERDEF_RESP_vds_vsource_get_chn_status         , SERVER_vds_vsource_get_chn_status               , GRPC_USER_LEVEL_Administrator   },
		{NULL, NULL, NULL}
};

int CLIENT_REQ_vds_account_get_users(grpc_t *grpc, PARAM_REQ_vds_account_get_users *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "account_get_users");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vds_account_get_users(grpc_t *grpc, PARAM_RESP_vds_account_get_users *resp)
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

int CLIENT_vds_account_get_users(grpc_t *grpc, PARAM_REQ_vds_account_get_users *req, PARAM_RESP_vds_account_get_users *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_account_get_users(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_account_get_users(grpc, resp);
	}

	return ret;
}

int SERVER_vds_account_get_users(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_account_get_users req;
	PARAM_RESP_vds_account_get_users resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vds_account_get_users(grpc, &req, &resp);
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
int CLIENT_REQ_vds_account_add_user(grpc_t *grpc, PARAM_REQ_vds_account_add_user *req)
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

int CLIENT_RESP_vds_account_add_user(grpc_t *grpc, PARAM_RESP_vds_account_add_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_account_add_user(grpc_t *grpc, PARAM_REQ_vds_account_add_user *req, PARAM_RESP_vds_account_add_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_account_add_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_account_add_user(grpc, resp);
	}

	return ret;
}

int SERVER_vds_account_add_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_account_add_user req;
	PARAM_RESP_vds_account_add_user resp;
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
	ret = USERDEF_vds_account_add_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_account_del_user(grpc_t *grpc, PARAM_REQ_vds_account_del_user *req)
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

int CLIENT_RESP_vds_account_del_user(grpc_t *grpc, PARAM_RESP_vds_account_del_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_account_del_user(grpc_t *grpc, PARAM_REQ_vds_account_del_user *req, PARAM_RESP_vds_account_del_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_account_del_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_account_del_user(grpc, resp);
	}

	return ret;
}

int SERVER_vds_account_del_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_account_del_user req;
	PARAM_RESP_vds_account_del_user resp;
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
	ret = USERDEF_vds_account_del_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_account_modify_user(grpc_t *grpc, PARAM_REQ_vds_account_modify_user *req)
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

int CLIENT_RESP_vds_account_modify_user(grpc_t *grpc, PARAM_RESP_vds_account_modify_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_account_modify_user(grpc_t *grpc, PARAM_REQ_vds_account_modify_user *req, PARAM_RESP_vds_account_modify_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_account_modify_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_account_modify_user(grpc, resp);
	}

	return ret;
}

int SERVER_vds_account_modify_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_account_modify_user req;
	PARAM_RESP_vds_account_modify_user resp;
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
	ret = USERDEF_vds_account_modify_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_connection_get_list(grpc_t *grpc, PARAM_REQ_vds_connection_get_list *req)
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

int CLIENT_RESP_vds_connection_get_list(grpc_t *grpc, PARAM_RESP_vds_connection_get_list *resp)
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

int CLIENT_vds_connection_get_list(grpc_t *grpc, PARAM_REQ_vds_connection_get_list *req, PARAM_RESP_vds_connection_get_list *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_connection_get_list(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_connection_get_list(grpc, resp);
	}

	return ret;
}

int SERVER_vds_connection_get_list(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_connection_get_list req;
	PARAM_RESP_vds_connection_get_list resp;
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
	ret = USERDEF_vds_connection_get_list(grpc, &req, &resp);
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
int CLIENT_REQ_vds_connection_breakoff(grpc_t *grpc, PARAM_REQ_vds_connection_breakoff *req)
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

int CLIENT_RESP_vds_connection_breakoff(grpc_t *grpc, PARAM_RESP_vds_connection_breakoff *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_connection_breakoff(grpc_t *grpc, PARAM_REQ_vds_connection_breakoff *req, PARAM_RESP_vds_connection_breakoff *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_connection_breakoff(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_connection_breakoff(grpc, resp);
	}

	return ret;
}

int SERVER_vds_connection_breakoff(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_connection_breakoff req;
	PARAM_RESP_vds_connection_breakoff resp;
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
	ret = USERDEF_vds_connection_breakoff(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vds_dev_get_hwinfo *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_get_hwinfo");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vds_dev_get_hwinfo(grpc_t *grpc, PARAM_RESP_vds_dev_get_hwinfo *resp)
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

int CLIENT_vds_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vds_dev_get_hwinfo *req, PARAM_RESP_vds_dev_get_hwinfo *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_get_hwinfo(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_get_hwinfo(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_get_hwinfo(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_get_hwinfo req;
	PARAM_RESP_vds_dev_get_hwinfo resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vds_dev_get_hwinfo(grpc, &req, &resp);
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
int CLIENT_REQ_vds_dev_get_info(grpc_t *grpc, PARAM_REQ_vds_dev_get_info *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_get_info");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vds_dev_get_info(grpc_t *grpc, PARAM_RESP_vds_dev_get_info *resp)
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

int CLIENT_vds_dev_get_info(grpc_t *grpc, PARAM_REQ_vds_dev_get_info *req, PARAM_RESP_vds_dev_get_info *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_get_info(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_get_info(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_get_info(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_get_info req;
	PARAM_RESP_vds_dev_get_info resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vds_dev_get_info(grpc, &req, &resp);
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
int CLIENT_REQ_vds_dev_set_info(grpc_t *grpc, PARAM_REQ_vds_dev_set_info *req)
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

int CLIENT_RESP_vds_dev_set_info(grpc_t *grpc, PARAM_RESP_vds_dev_set_info *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_dev_set_info(grpc_t *grpc, PARAM_REQ_vds_dev_set_info *req, PARAM_RESP_vds_dev_set_info *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_set_info(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_set_info(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_set_info(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_set_info req;
	PARAM_RESP_vds_dev_set_info resp;
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
	ret = USERDEF_vds_dev_set_info(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_dev_stime(grpc_t *grpc, PARAM_REQ_vds_dev_stime *req)
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

int CLIENT_RESP_vds_dev_stime(grpc_t *grpc, PARAM_RESP_vds_dev_stime *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_dev_stime(grpc_t *grpc, PARAM_REQ_vds_dev_stime *req, PARAM_RESP_vds_dev_stime *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_stime(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_stime(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_stime(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_stime req;
	PARAM_RESP_vds_dev_stime resp;
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
	ret = USERDEF_vds_dev_stime(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_dev_gtime(grpc_t *grpc, PARAM_REQ_vds_dev_gtime *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_gtime");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vds_dev_gtime(grpc_t *grpc, PARAM_RESP_vds_dev_gtime *resp)
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

int CLIENT_vds_dev_gtime(grpc_t *grpc, PARAM_REQ_vds_dev_gtime *req, PARAM_RESP_vds_dev_gtime *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_gtime(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_gtime(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_gtime(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_gtime req;
	PARAM_RESP_vds_dev_gtime resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vds_dev_gtime(grpc, &req, &resp);
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
int CLIENT_REQ_vds_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_set *req)
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

int CLIENT_RESP_vds_dev_ntp_set(grpc_t *grpc, PARAM_RESP_vds_dev_ntp_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_set *req, PARAM_RESP_vds_dev_ntp_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_ntp_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_ntp_set(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_ntp_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_ntp_set req;
	PARAM_RESP_vds_dev_ntp_set resp;
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
	ret = USERDEF_vds_dev_ntp_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_get *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "dev_ntp_get");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vds_dev_ntp_get(grpc_t *grpc, PARAM_RESP_vds_dev_ntp_get *resp)
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

int CLIENT_vds_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_get *req, PARAM_RESP_vds_dev_ntp_get *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_ntp_get(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_ntp_get(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_ntp_get(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_ntp_get req;
	PARAM_RESP_vds_dev_ntp_get resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vds_dev_ntp_get(grpc, &req, &resp);
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
int CLIENT_REQ_vds_dev_reboot(grpc_t *grpc, PARAM_REQ_vds_dev_reboot *req)
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

int CLIENT_RESP_vds_dev_reboot(grpc_t *grpc, PARAM_RESP_vds_dev_reboot *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_dev_reboot(grpc_t *grpc, PARAM_REQ_vds_dev_reboot *req, PARAM_RESP_vds_dev_reboot *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_reboot(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_reboot(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_reboot(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_reboot req;
	PARAM_RESP_vds_dev_reboot resp;
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
	ret = USERDEF_vds_dev_reboot(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_dev_factory_default(grpc_t *grpc, PARAM_REQ_vds_dev_factory_default *req)
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

int CLIENT_RESP_vds_dev_factory_default(grpc_t *grpc, PARAM_RESP_vds_dev_factory_default *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_dev_factory_default(grpc_t *grpc, PARAM_REQ_vds_dev_factory_default *req, PARAM_RESP_vds_dev_factory_default *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_dev_factory_default(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_dev_factory_default(grpc, resp);
	}

	return ret;
}

int SERVER_vds_dev_factory_default(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_dev_factory_default req;
	PARAM_RESP_vds_dev_factory_default resp;
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
	ret = USERDEF_vds_dev_factory_default(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vds_ifconfig_get_inet *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "ifconfig_get_inet");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vds_ifconfig_get_inet(grpc_t *grpc, PARAM_RESP_vds_ifconfig_get_inet *resp)
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

int CLIENT_vds_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vds_ifconfig_get_inet *req, PARAM_RESP_vds_ifconfig_get_inet *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_ifconfig_get_inet(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_ifconfig_get_inet(grpc, resp);
	}

	return ret;
}

int SERVER_vds_ifconfig_get_inet(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_ifconfig_get_inet req;
	PARAM_RESP_vds_ifconfig_get_inet resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vds_ifconfig_get_inet(grpc, &req, &resp);
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
int CLIENT_REQ_vds_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_eth_set *req)
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

int CLIENT_RESP_vds_ifconfig_eth_set(grpc_t *grpc, PARAM_RESP_vds_ifconfig_eth_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_eth_set *req, PARAM_RESP_vds_ifconfig_eth_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_ifconfig_eth_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_ifconfig_eth_set(grpc, resp);
	}

	return ret;
}

int SERVER_vds_ifconfig_eth_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_ifconfig_eth_set req;
	PARAM_RESP_vds_ifconfig_eth_set resp;
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
	ret = USERDEF_vds_ifconfig_eth_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_ppp_set *req)
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

int CLIENT_RESP_vds_ifconfig_ppp_set(grpc_t *grpc, PARAM_RESP_vds_ifconfig_ppp_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_ppp_set *req, PARAM_RESP_vds_ifconfig_ppp_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_ifconfig_ppp_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_ifconfig_ppp_set(grpc, resp);
	}

	return ret;
}

int SERVER_vds_ifconfig_ppp_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_ifconfig_ppp_set req;
	PARAM_RESP_vds_ifconfig_ppp_set resp;
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
	ret = USERDEF_vds_ifconfig_ppp_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_connect *req)
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

int CLIENT_RESP_vds_ifconfig_wifi_connect(grpc_t *grpc, PARAM_RESP_vds_ifconfig_wifi_connect *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_connect *req, PARAM_RESP_vds_ifconfig_wifi_connect *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_ifconfig_wifi_connect(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_ifconfig_wifi_connect(grpc, resp);
	}

	return ret;
}

int SERVER_vds_ifconfig_wifi_connect(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_ifconfig_wifi_connect req;
	PARAM_RESP_vds_ifconfig_wifi_connect resp;
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
	ret = USERDEF_vds_ifconfig_wifi_connect(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_list_ap *req)
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

int CLIENT_RESP_vds_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_RESP_vds_ifconfig_wifi_list_ap *resp)
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

int CLIENT_vds_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_list_ap *req, PARAM_RESP_vds_ifconfig_wifi_list_ap *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_ifconfig_wifi_list_ap(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_ifconfig_wifi_list_ap(grpc, resp);
	}

	return ret;
}

int SERVER_vds_ifconfig_wifi_list_ap(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_ifconfig_wifi_list_ap req;
	PARAM_RESP_vds_ifconfig_wifi_list_ap resp;
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
	ret = USERDEF_vds_ifconfig_wifi_list_ap(grpc, &req, &resp);
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
int CLIENT_REQ_vds_screen_get_ability(grpc_t *grpc, PARAM_REQ_vds_screen_get_ability *req)
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

int CLIENT_RESP_vds_screen_get_ability(grpc_t *grpc, PARAM_RESP_vds_screen_get_ability *resp)
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

int CLIENT_vds_screen_get_ability(grpc_t *grpc, PARAM_REQ_vds_screen_get_ability *req, PARAM_RESP_vds_screen_get_ability *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_screen_get_ability(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_screen_get_ability(grpc, resp);
	}

	return ret;
}

int SERVER_vds_screen_get_ability(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_screen_get_ability req;
	PARAM_RESP_vds_screen_get_ability resp;
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
	ret = USERDEF_vds_screen_get_ability(grpc, &req, &resp);
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
int CLIENT_REQ_vds_screen_get_display(grpc_t *grpc, PARAM_REQ_vds_screen_get_display *req)
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

int CLIENT_RESP_vds_screen_get_display(grpc_t *grpc, PARAM_RESP_vds_screen_get_display *resp)
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

int CLIENT_vds_screen_get_display(grpc_t *grpc, PARAM_REQ_vds_screen_get_display *req, PARAM_RESP_vds_screen_get_display *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_screen_get_display(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_screen_get_display(grpc, resp);
	}

	return ret;
}

int SERVER_vds_screen_get_display(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_screen_get_display req;
	PARAM_RESP_vds_screen_get_display resp;
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
	ret = USERDEF_vds_screen_get_display(grpc, &req, &resp);
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
int CLIENT_REQ_vds_screen_set_display(grpc_t *grpc, PARAM_REQ_vds_screen_set_display *req)
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

int CLIENT_RESP_vds_screen_set_display(grpc_t *grpc, PARAM_RESP_vds_screen_set_display *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_screen_set_display(grpc_t *grpc, PARAM_REQ_vds_screen_set_display *req, PARAM_RESP_vds_screen_set_display *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_screen_set_display(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_screen_set_display(grpc, resp);
	}

	return ret;
}

int SERVER_vds_screen_set_display(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_screen_set_display req;
	PARAM_RESP_vds_screen_set_display resp;
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
	ret = USERDEF_vds_screen_set_display(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_screen_get_tour(grpc_t *grpc, PARAM_REQ_vds_screen_get_tour *req)
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

int CLIENT_RESP_vds_screen_get_tour(grpc_t *grpc, PARAM_RESP_vds_screen_get_tour *resp)
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

int CLIENT_vds_screen_get_tour(grpc_t *grpc, PARAM_REQ_vds_screen_get_tour *req, PARAM_RESP_vds_screen_get_tour *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_screen_get_tour(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_screen_get_tour(grpc, resp);
	}

	return ret;
}

int SERVER_vds_screen_get_tour(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_screen_get_tour req;
	PARAM_RESP_vds_screen_get_tour resp;
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
	ret = USERDEF_vds_screen_get_tour(grpc, &req, &resp);
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
int CLIENT_REQ_vds_screen_set_tour(grpc_t *grpc, PARAM_REQ_vds_screen_set_tour *req)
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

int CLIENT_RESP_vds_screen_set_tour(grpc_t *grpc, PARAM_RESP_vds_screen_set_tour *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_screen_set_tour(grpc_t *grpc, PARAM_REQ_vds_screen_set_tour *req, PARAM_RESP_vds_screen_set_tour *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_screen_set_tour(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_screen_set_tour(grpc, resp);
	}

	return ret;
}

int SERVER_vds_screen_set_tour(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_screen_set_tour req;
	PARAM_RESP_vds_screen_set_tour resp;
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
	ret = USERDEF_vds_screen_set_tour(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_screen_get_screen(grpc_t *grpc, PARAM_REQ_vds_screen_get_screen *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "screen_get_screen");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_vds_screen_get_screen(grpc_t *grpc, PARAM_RESP_vds_screen_get_screen *resp)
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

int CLIENT_vds_screen_get_screen(grpc_t *grpc, PARAM_REQ_vds_screen_get_screen *req, PARAM_RESP_vds_screen_get_screen *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_screen_get_screen(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_screen_get_screen(grpc, resp);
	}

	return ret;
}

int SERVER_vds_screen_get_screen(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_screen_get_screen req;
	PARAM_RESP_vds_screen_get_screen resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_vds_screen_get_screen(grpc, &req, &resp);
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
int CLIENT_REQ_vds_screen_set_screen(grpc_t *grpc, PARAM_REQ_vds_screen_set_screen *req)
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

int CLIENT_RESP_vds_screen_set_screen(grpc_t *grpc, PARAM_RESP_vds_screen_set_screen *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_screen_set_screen(grpc_t *grpc, PARAM_REQ_vds_screen_set_screen *req, PARAM_RESP_vds_screen_set_screen *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_screen_set_screen(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_screen_set_screen(grpc, resp);
	}

	return ret;
}

int SERVER_vds_screen_set_screen(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_screen_set_screen req;
	PARAM_RESP_vds_screen_set_screen resp;
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
	ret = USERDEF_vds_screen_set_screen(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_add_vs *req)
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

int CLIENT_RESP_vds_vsource_add_vs(grpc_t *grpc, PARAM_RESP_vds_vsource_add_vs *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_add_vs *req, PARAM_RESP_vds_vsource_add_vs *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_vsource_add_vs(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_vsource_add_vs(grpc, resp);
	}

	return ret;
}

int SERVER_vds_vsource_add_vs(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_vsource_add_vs req;
	PARAM_RESP_vds_vsource_add_vs resp;
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
	ret = USERDEF_vds_vsource_add_vs(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_delete_vs *req)
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

int CLIENT_RESP_vds_vsource_delete_vs(grpc_t *grpc, PARAM_RESP_vds_vsource_delete_vs *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_delete_vs *req, PARAM_RESP_vds_vsource_delete_vs *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_vsource_delete_vs(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_vsource_delete_vs(grpc, resp);
	}

	return ret;
}

int SERVER_vds_vsource_delete_vs(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_vsource_delete_vs req;
	PARAM_RESP_vds_vsource_delete_vs resp;
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
	ret = USERDEF_vds_vsource_delete_vs(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_modify_vs *req)
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

int CLIENT_RESP_vds_vsource_modify_vs(grpc_t *grpc, PARAM_RESP_vds_vsource_modify_vs *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_vds_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_modify_vs *req, PARAM_RESP_vds_vsource_modify_vs *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_vsource_modify_vs(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_vsource_modify_vs(grpc, resp);
	}

	return ret;
}

int SERVER_vds_vsource_modify_vs(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_vsource_modify_vs req;
	PARAM_RESP_vds_vsource_modify_vs resp;
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
	ret = USERDEF_vds_vsource_modify_vs(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_vds_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vds_vsource_get_chn_status *req)
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

int CLIENT_RESP_vds_vsource_get_chn_status(grpc_t *grpc, PARAM_RESP_vds_vsource_get_chn_status *resp)
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

int CLIENT_vds_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vds_vsource_get_chn_status *req, PARAM_RESP_vds_vsource_get_chn_status *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_vds_vsource_get_chn_status(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_vds_vsource_get_chn_status(grpc, resp);
	}

	return ret;
}

int SERVER_vds_vsource_get_chn_status(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_vds_vsource_get_chn_status req;
	PARAM_RESP_vds_vsource_get_chn_status resp;
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
	ret = USERDEF_vds_vsource_get_chn_status(grpc, &req, &resp);
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
