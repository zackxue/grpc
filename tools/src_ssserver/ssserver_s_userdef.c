//Need user to modify this file.
#include "ssserver.h"


int USERDEF_ssserver_account_get_users(grpc_t *grpc, PARAM_REQ_ssserver_account_get_users *req, PARAM_RESP_ssserver_account_get_users *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_account_add_user(grpc_t *grpc, PARAM_REQ_ssserver_account_add_user *req, PARAM_RESP_ssserver_account_add_user *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_account_del_user(grpc_t *grpc, PARAM_REQ_ssserver_account_del_user *req, PARAM_RESP_ssserver_account_del_user *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_account_modify_user(grpc_t *grpc, PARAM_REQ_ssserver_account_modify_user *req, PARAM_RESP_ssserver_account_modify_user *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_channel_get(grpc_t *grpc, PARAM_REQ_ssserver_channel_get *req, PARAM_RESP_ssserver_channel_get *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_channel_add(grpc_t *grpc, PARAM_REQ_ssserver_channel_add *req, PARAM_RESP_ssserver_channel_add *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_channel_remove(grpc_t *grpc, PARAM_REQ_ssserver_channel_remove *req, PARAM_RESP_ssserver_channel_remove *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_channel_modify(grpc_t *grpc, PARAM_REQ_ssserver_channel_modify *req, PARAM_RESP_ssserver_channel_modify *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_broadcast_discovery(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_discovery *req, PARAM_RESP_ssserver_broadcast_discovery *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_get_inet *req, PARAM_RESP_ssserver_broadcast_get_inet *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_eth_set *req, PARAM_RESP_ssserver_broadcast_eth_set *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_ppp_set *req, PARAM_RESP_ssserver_broadcast_ppp_set *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_wifi_connect *req, PARAM_RESP_ssserver_broadcast_wifi_connect *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_ssserver_broadcast_wifi_list_ap *req, PARAM_RESP_ssserver_broadcast_wifi_list_ap *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_storage_get_info(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_info *req, PARAM_RESP_ssserver_storage_get_info *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_ssserver_storage_start_intial_disk *req, PARAM_RESP_ssserver_storage_start_intial_disk *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_disk_initial_rate *req, PARAM_RESP_ssserver_storage_get_disk_initial_rate *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_ssserver_storage_get_record_fragments *req, PARAM_RESP_ssserver_storage_get_record_fragments *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}

int USERDEF_ssserver_stream_get_service(grpc_t *grpc, PARAM_REQ_ssserver_stream_get_service *req, PARAM_RESP_ssserver_stream_get_service *resp)
{
#if 1
	__NULL_FUNC_DBG__();
	grpc_s_set_error(grpc, GRPC_ERR_METHOD_NOT_IMPLEMENTED, "Method not implemented");
	return GRPC_ERR_METHOD_NOT_IMPLEMENTED;
#else
	__NULL_FUNC_DBG__();
	int cnt = 1;
	int i;
	resp->users_cnt = cnt;
	resp->users = grpc_malloc(grpc, cnt * sizeof(*resp->users));
	for (i=0;i<cnt;i++)
	{
		resp->users[i].name = grpc_strdup(grpc, "username");
	}

	//grpc_set_error(grpc, 0, );
#endif

	return 0;
}
