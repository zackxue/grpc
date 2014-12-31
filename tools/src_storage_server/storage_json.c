// This file is generated auto. Do not modify it anytime.
#include "storage_json.h"

grpcMethod_t storage_json_methodList[] = {
		{"account_get_users"             , USERDEF_RESP_storage_json_account_get_users     , SERVER_storage_json_account_get_users           , GRPC_USER_LEVEL_Administrator   },
		{"account_add_user"              , USERDEF_RESP_storage_json_account_add_user      , SERVER_storage_json_account_add_user            , GRPC_USER_LEVEL_Administrator   },
		{"account_del_user"              , USERDEF_RESP_storage_json_account_del_user      , SERVER_storage_json_account_del_user            , GRPC_USER_LEVEL_Administrator   },
		{"account_modify_user"           , USERDEF_RESP_storage_json_account_modify_user   , SERVER_storage_json_account_modify_user         , GRPC_USER_LEVEL_Administrator   },
		{"channel_get"                   , USERDEF_RESP_storage_json_channel_get           , SERVER_storage_json_channel_get                 , GRPC_USER_LEVEL_Administrator   },
		{"channel_add"                   , USERDEF_RESP_storage_json_channel_add           , SERVER_storage_json_channel_add                 , GRPC_USER_LEVEL_Administrator   },
		{"channel_remove"                , USERDEF_RESP_storage_json_channel_remove        , SERVER_storage_json_channel_remove              , GRPC_USER_LEVEL_Administrator   },
		{"channel_modify"                , USERDEF_RESP_storage_json_channel_modify        , SERVER_storage_json_channel_modify              , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_discovery"           , USERDEF_RESP_storage_json_broadcast_discovery   , SERVER_storage_json_broadcast_discovery         , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_get_inet"            , USERDEF_RESP_storage_json_broadcast_get_inet    , SERVER_storage_json_broadcast_get_inet          , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_eth_set"             , USERDEF_RESP_storage_json_broadcast_eth_set     , SERVER_storage_json_broadcast_eth_set           , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_ppp_set"             , USERDEF_RESP_storage_json_broadcast_ppp_set     , SERVER_storage_json_broadcast_ppp_set           , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_wifi_connect"        , USERDEF_RESP_storage_json_broadcast_wifi_connect, SERVER_storage_json_broadcast_wifi_connect      , GRPC_USER_LEVEL_Administrator   },
		{"broadcast_wifi_list_ap"        , USERDEF_RESP_storage_json_broadcast_wifi_list_ap, SERVER_storage_json_broadcast_wifi_list_ap      , GRPC_USER_LEVEL_Administrator   },
		{"storage_get_info"              , USERDEF_RESP_storage_json_storage_get_info      , SERVER_storage_json_storage_get_info            , GRPC_USER_LEVEL_Administrator   },
		{"storage_start_intial_disk"     , USERDEF_RESP_storage_json_storage_start_intial_disk, SERVER_storage_json_storage_start_intial_disk   , GRPC_USER_LEVEL_Administrator   },
		{"storage_get_disk_initial_rate" , USERDEF_RESP_storage_json_storage_get_disk_initial_rate, SERVER_storage_json_storage_get_disk_initial_rate, GRPC_USER_LEVEL_Administrator   },
		{"storage_get_record_fragments"  , USERDEF_RESP_storage_json_storage_get_record_fragments, SERVER_storage_json_storage_get_record_fragments, GRPC_USER_LEVEL_Administrator   },
		{"stream_get_service"            , USERDEF_RESP_storage_json_stream_get_service    , SERVER_storage_json_stream_get_service          , GRPC_USER_LEVEL_Administrator   },
		{NULL, NULL, NULL}
};

int CLIENT_REQ_storage_json_account_get_users(grpc_t *grpc, PARAM_REQ_storage_json_account_get_users *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "account_get_users");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_storage_json_account_get_users(grpc_t *grpc, PARAM_RESP_storage_json_account_get_users *resp)
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

int CLIENT_storage_json_account_get_users(grpc_t *grpc, PARAM_REQ_storage_json_account_get_users *req, PARAM_RESP_storage_json_account_get_users *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_account_get_users(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_account_get_users(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_account_get_users(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_account_get_users req;
	PARAM_RESP_storage_json_account_get_users resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_storage_json_account_get_users(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_account_add_user(grpc_t *grpc, PARAM_REQ_storage_json_account_add_user *req)
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

int CLIENT_RESP_storage_json_account_add_user(grpc_t *grpc, PARAM_RESP_storage_json_account_add_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_account_add_user(grpc_t *grpc, PARAM_REQ_storage_json_account_add_user *req, PARAM_RESP_storage_json_account_add_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_account_add_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_account_add_user(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_account_add_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_account_add_user req;
	PARAM_RESP_storage_json_account_add_user resp;
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
	ret = USERDEF_storage_json_account_add_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_account_del_user(grpc_t *grpc, PARAM_REQ_storage_json_account_del_user *req)
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

int CLIENT_RESP_storage_json_account_del_user(grpc_t *grpc, PARAM_RESP_storage_json_account_del_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_account_del_user(grpc_t *grpc, PARAM_REQ_storage_json_account_del_user *req, PARAM_RESP_storage_json_account_del_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_account_del_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_account_del_user(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_account_del_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_account_del_user req;
	PARAM_RESP_storage_json_account_del_user resp;
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
	ret = USERDEF_storage_json_account_del_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_account_modify_user(grpc_t *grpc, PARAM_REQ_storage_json_account_modify_user *req)
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

int CLIENT_RESP_storage_json_account_modify_user(grpc_t *grpc, PARAM_RESP_storage_json_account_modify_user *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_account_modify_user(grpc_t *grpc, PARAM_REQ_storage_json_account_modify_user *req, PARAM_RESP_storage_json_account_modify_user *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_account_modify_user(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_account_modify_user(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_account_modify_user(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_account_modify_user req;
	PARAM_RESP_storage_json_account_modify_user resp;
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
	ret = USERDEF_storage_json_account_modify_user(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_channel_get(grpc_t *grpc, PARAM_REQ_storage_json_channel_get *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "channel_get");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_storage_json_channel_get(grpc_t *grpc, PARAM_RESP_storage_json_channel_get *resp)
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

int CLIENT_storage_json_channel_get(grpc_t *grpc, PARAM_REQ_storage_json_channel_get *req, PARAM_RESP_storage_json_channel_get *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_channel_get(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_channel_get(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_channel_get(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_channel_get req;
	PARAM_RESP_storage_json_channel_get resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_storage_json_channel_get(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_channel_add(grpc_t *grpc, PARAM_REQ_storage_json_channel_add *req)
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

int CLIENT_RESP_storage_json_channel_add(grpc_t *grpc, PARAM_RESP_storage_json_channel_add *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_channel_add(grpc_t *grpc, PARAM_REQ_storage_json_channel_add *req, PARAM_RESP_storage_json_channel_add *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_channel_add(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_channel_add(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_channel_add(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_channel_add req;
	PARAM_RESP_storage_json_channel_add resp;
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
	ret = USERDEF_storage_json_channel_add(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_channel_remove(grpc_t *grpc, PARAM_REQ_storage_json_channel_remove *req)
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

int CLIENT_RESP_storage_json_channel_remove(grpc_t *grpc, PARAM_RESP_storage_json_channel_remove *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_channel_remove(grpc_t *grpc, PARAM_REQ_storage_json_channel_remove *req, PARAM_RESP_storage_json_channel_remove *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_channel_remove(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_channel_remove(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_channel_remove(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_channel_remove req;
	PARAM_RESP_storage_json_channel_remove resp;
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
	ret = USERDEF_storage_json_channel_remove(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_channel_modify(grpc_t *grpc, PARAM_REQ_storage_json_channel_modify *req)
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

int CLIENT_RESP_storage_json_channel_modify(grpc_t *grpc, PARAM_RESP_storage_json_channel_modify *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_channel_modify(grpc_t *grpc, PARAM_REQ_storage_json_channel_modify *req, PARAM_RESP_storage_json_channel_modify *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_channel_modify(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_channel_modify(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_channel_modify(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_channel_modify req;
	PARAM_RESP_storage_json_channel_modify resp;
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
	ret = USERDEF_storage_json_channel_modify(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_broadcast_discovery(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_discovery *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "broadcast_discovery");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_storage_json_broadcast_discovery(grpc_t *grpc, PARAM_RESP_storage_json_broadcast_discovery *resp)
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

int CLIENT_storage_json_broadcast_discovery(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_discovery *req, PARAM_RESP_storage_json_broadcast_discovery *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_broadcast_discovery(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_broadcast_discovery(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_broadcast_discovery(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_broadcast_discovery req;
	PARAM_RESP_storage_json_broadcast_discovery resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_storage_json_broadcast_discovery(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_get_inet *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "broadcast_get_inet");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_storage_json_broadcast_get_inet(grpc_t *grpc, PARAM_RESP_storage_json_broadcast_get_inet *resp)
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

int CLIENT_storage_json_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_get_inet *req, PARAM_RESP_storage_json_broadcast_get_inet *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_broadcast_get_inet(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_broadcast_get_inet(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_broadcast_get_inet(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_broadcast_get_inet req;
	PARAM_RESP_storage_json_broadcast_get_inet resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_storage_json_broadcast_get_inet(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_eth_set *req)
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

int CLIENT_RESP_storage_json_broadcast_eth_set(grpc_t *grpc, PARAM_RESP_storage_json_broadcast_eth_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_eth_set *req, PARAM_RESP_storage_json_broadcast_eth_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_broadcast_eth_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_broadcast_eth_set(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_broadcast_eth_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_broadcast_eth_set req;
	PARAM_RESP_storage_json_broadcast_eth_set resp;
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
	ret = USERDEF_storage_json_broadcast_eth_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_ppp_set *req)
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

int CLIENT_RESP_storage_json_broadcast_ppp_set(grpc_t *grpc, PARAM_RESP_storage_json_broadcast_ppp_set *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_ppp_set *req, PARAM_RESP_storage_json_broadcast_ppp_set *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_broadcast_ppp_set(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_broadcast_ppp_set(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_broadcast_ppp_set(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_broadcast_ppp_set req;
	PARAM_RESP_storage_json_broadcast_ppp_set resp;
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
	ret = USERDEF_storage_json_broadcast_ppp_set(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_wifi_connect *req)
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

int CLIENT_RESP_storage_json_broadcast_wifi_connect(grpc_t *grpc, PARAM_RESP_storage_json_broadcast_wifi_connect *resp)
{
	__GENERATE_FUNC_DEBUG__();

	if (grpc->error.errcode != 0)
		return grpc->error.errcode;
	return 0;
}

int CLIENT_storage_json_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_wifi_connect *req, PARAM_RESP_storage_json_broadcast_wifi_connect *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_broadcast_wifi_connect(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_broadcast_wifi_connect(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_broadcast_wifi_connect(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_broadcast_wifi_connect req;
	PARAM_RESP_storage_json_broadcast_wifi_connect resp;
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
	ret = USERDEF_storage_json_broadcast_wifi_connect(grpc, &req, &resp);
	if (ret != 0)
		return ret;

	return 0;
}
int CLIENT_REQ_storage_json_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_wifi_list_ap *req)
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

int CLIENT_RESP_storage_json_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_RESP_storage_json_broadcast_wifi_list_ap *resp)
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

int CLIENT_storage_json_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_storage_json_broadcast_wifi_list_ap *req, PARAM_RESP_storage_json_broadcast_wifi_list_ap *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_broadcast_wifi_list_ap(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_broadcast_wifi_list_ap(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_broadcast_wifi_list_ap(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_broadcast_wifi_list_ap req;
	PARAM_RESP_storage_json_broadcast_wifi_list_ap resp;
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
	ret = USERDEF_storage_json_broadcast_wifi_list_ap(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_storage_get_info(grpc_t *grpc, PARAM_REQ_storage_json_storage_get_info *req)
{
	__GENERATE_FUNC_DEBUG__();

	grpc->root = cJSON_CreateObject();
	cJSON_AddStringToObject(grpc->root, "method", "storage_get_info");

	grpc_c_send(grpc);

	return 0;
}

int CLIENT_RESP_storage_json_storage_get_info(grpc_t *grpc, PARAM_RESP_storage_json_storage_get_info *resp)
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

int CLIENT_storage_json_storage_get_info(grpc_t *grpc, PARAM_REQ_storage_json_storage_get_info *req, PARAM_RESP_storage_json_storage_get_info *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_storage_get_info(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_storage_get_info(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_storage_get_info(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_storage_get_info req;
	PARAM_RESP_storage_json_storage_get_info resp;
	__GENERATE_FUNC_DEBUG__();
	memset(&req, 0, sizeof(req));
	memset(&resp, 0, sizeof(resp));

	ret = USERDEF_storage_json_storage_get_info(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_storage_json_storage_start_intial_disk *req)
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

int CLIENT_RESP_storage_json_storage_start_intial_disk(grpc_t *grpc, PARAM_RESP_storage_json_storage_start_intial_disk *resp)
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

int CLIENT_storage_json_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_storage_json_storage_start_intial_disk *req, PARAM_RESP_storage_json_storage_start_intial_disk *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_storage_start_intial_disk(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_storage_start_intial_disk(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_storage_start_intial_disk(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_storage_start_intial_disk req;
	PARAM_RESP_storage_json_storage_start_intial_disk resp;
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
	ret = USERDEF_storage_json_storage_start_intial_disk(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_storage_json_storage_get_disk_initial_rate *req)
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

int CLIENT_RESP_storage_json_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_RESP_storage_json_storage_get_disk_initial_rate *resp)
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

int CLIENT_storage_json_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_storage_json_storage_get_disk_initial_rate *req, PARAM_RESP_storage_json_storage_get_disk_initial_rate *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_storage_get_disk_initial_rate(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_storage_get_disk_initial_rate(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_storage_get_disk_initial_rate(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_storage_get_disk_initial_rate req;
	PARAM_RESP_storage_json_storage_get_disk_initial_rate resp;
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
	ret = USERDEF_storage_json_storage_get_disk_initial_rate(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_storage_json_storage_get_record_fragments *req)
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

int CLIENT_RESP_storage_json_storage_get_record_fragments(grpc_t *grpc, PARAM_RESP_storage_json_storage_get_record_fragments *resp)
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

int CLIENT_storage_json_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_storage_json_storage_get_record_fragments *req, PARAM_RESP_storage_json_storage_get_record_fragments *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_storage_get_record_fragments(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_storage_get_record_fragments(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_storage_get_record_fragments(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_storage_get_record_fragments req;
	PARAM_RESP_storage_json_storage_get_record_fragments resp;
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
	ret = USERDEF_storage_json_storage_get_record_fragments(grpc, &req, &resp);
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
int CLIENT_REQ_storage_json_stream_get_service(grpc_t *grpc, PARAM_REQ_storage_json_stream_get_service *req)
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

int CLIENT_RESP_storage_json_stream_get_service(grpc_t *grpc, PARAM_RESP_storage_json_stream_get_service *resp)
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

int CLIENT_storage_json_stream_get_service(grpc_t *grpc, PARAM_REQ_storage_json_stream_get_service *req, PARAM_RESP_storage_json_stream_get_service *resp)
{
	int ret;
	__GENERATE_FUNC_DEBUG__();

	CLIENT_REQ_storage_json_stream_get_service(grpc, req);
	ret = grpc_c_recv(grpc);
	if (0 == ret)
	{
		ret = CLIENT_RESP_storage_json_stream_get_service(grpc, resp);
	}

	return ret;
}

int SERVER_storage_json_stream_get_service(grpc_t *grpc)
{
	int ret;
	PARAM_REQ_storage_json_stream_get_service req;
	PARAM_RESP_storage_json_stream_get_service resp;
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
	ret = USERDEF_storage_json_stream_get_service(grpc, &req, &resp);
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
