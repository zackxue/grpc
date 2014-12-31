//Need user to modify this file.
#include "vds.h"


int USERDEF_vds_account_get_users(grpc_t *grpc, PARAM_REQ_vds_account_get_users *req, PARAM_RESP_vds_account_get_users *resp)
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

int USERDEF_vds_account_add_user(grpc_t *grpc, PARAM_REQ_vds_account_add_user *req, PARAM_RESP_vds_account_add_user *resp)
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

int USERDEF_vds_account_del_user(grpc_t *grpc, PARAM_REQ_vds_account_del_user *req, PARAM_RESP_vds_account_del_user *resp)
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

int USERDEF_vds_account_modify_user(grpc_t *grpc, PARAM_REQ_vds_account_modify_user *req, PARAM_RESP_vds_account_modify_user *resp)
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

int USERDEF_vds_connection_get_list(grpc_t *grpc, PARAM_REQ_vds_connection_get_list *req, PARAM_RESP_vds_connection_get_list *resp)
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

int USERDEF_vds_connection_breakoff(grpc_t *grpc, PARAM_REQ_vds_connection_breakoff *req, PARAM_RESP_vds_connection_breakoff *resp)
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

int USERDEF_vds_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vds_dev_get_hwinfo *req, PARAM_RESP_vds_dev_get_hwinfo *resp)
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

int USERDEF_vds_dev_get_info(grpc_t *grpc, PARAM_REQ_vds_dev_get_info *req, PARAM_RESP_vds_dev_get_info *resp)
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

int USERDEF_vds_dev_set_info(grpc_t *grpc, PARAM_REQ_vds_dev_set_info *req, PARAM_RESP_vds_dev_set_info *resp)
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

int USERDEF_vds_dev_stime(grpc_t *grpc, PARAM_REQ_vds_dev_stime *req, PARAM_RESP_vds_dev_stime *resp)
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

int USERDEF_vds_dev_gtime(grpc_t *grpc, PARAM_REQ_vds_dev_gtime *req, PARAM_RESP_vds_dev_gtime *resp)
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

int USERDEF_vds_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_set *req, PARAM_RESP_vds_dev_ntp_set *resp)
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

int USERDEF_vds_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vds_dev_ntp_get *req, PARAM_RESP_vds_dev_ntp_get *resp)
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

int USERDEF_vds_dev_reboot(grpc_t *grpc, PARAM_REQ_vds_dev_reboot *req, PARAM_RESP_vds_dev_reboot *resp)
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

int USERDEF_vds_dev_factory_default(grpc_t *grpc, PARAM_REQ_vds_dev_factory_default *req, PARAM_RESP_vds_dev_factory_default *resp)
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

int USERDEF_vds_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vds_ifconfig_get_inet *req, PARAM_RESP_vds_ifconfig_get_inet *resp)
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

int USERDEF_vds_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_eth_set *req, PARAM_RESP_vds_ifconfig_eth_set *resp)
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

int USERDEF_vds_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vds_ifconfig_ppp_set *req, PARAM_RESP_vds_ifconfig_ppp_set *resp)
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

int USERDEF_vds_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_connect *req, PARAM_RESP_vds_ifconfig_wifi_connect *resp)
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

int USERDEF_vds_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vds_ifconfig_wifi_list_ap *req, PARAM_RESP_vds_ifconfig_wifi_list_ap *resp)
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

int USERDEF_vds_screen_get_ability(grpc_t *grpc, PARAM_REQ_vds_screen_get_ability *req, PARAM_RESP_vds_screen_get_ability *resp)
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

int USERDEF_vds_screen_get_display(grpc_t *grpc, PARAM_REQ_vds_screen_get_display *req, PARAM_RESP_vds_screen_get_display *resp)
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

int USERDEF_vds_screen_set_display(grpc_t *grpc, PARAM_REQ_vds_screen_set_display *req, PARAM_RESP_vds_screen_set_display *resp)
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

int USERDEF_vds_screen_get_tour(grpc_t *grpc, PARAM_REQ_vds_screen_get_tour *req, PARAM_RESP_vds_screen_get_tour *resp)
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

int USERDEF_vds_screen_set_tour(grpc_t *grpc, PARAM_REQ_vds_screen_set_tour *req, PARAM_RESP_vds_screen_set_tour *resp)
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

int USERDEF_vds_screen_get_screen(grpc_t *grpc, PARAM_REQ_vds_screen_get_screen *req, PARAM_RESP_vds_screen_get_screen *resp)
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

int USERDEF_vds_screen_set_screen(grpc_t *grpc, PARAM_REQ_vds_screen_set_screen *req, PARAM_RESP_vds_screen_set_screen *resp)
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

int USERDEF_vds_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_add_vs *req, PARAM_RESP_vds_vsource_add_vs *resp)
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

int USERDEF_vds_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_delete_vs *req, PARAM_RESP_vds_vsource_delete_vs *resp)
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

int USERDEF_vds_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vds_vsource_modify_vs *req, PARAM_RESP_vds_vsource_modify_vs *resp)
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

int USERDEF_vds_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vds_vsource_get_chn_status *req, PARAM_RESP_vds_vsource_get_chn_status *resp)
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
