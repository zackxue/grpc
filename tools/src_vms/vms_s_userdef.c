//Need user to modify this file.
#include "vms.h"


int USERDEF_vms_account_get_users(grpc_t *grpc, PARAM_REQ_vms_account_get_users *req, PARAM_RESP_vms_account_get_users *resp)
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

int USERDEF_vms_account_add_user(grpc_t *grpc, PARAM_REQ_vms_account_add_user *req, PARAM_RESP_vms_account_add_user *resp)
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

int USERDEF_vms_account_del_user(grpc_t *grpc, PARAM_REQ_vms_account_del_user *req, PARAM_RESP_vms_account_del_user *resp)
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

int USERDEF_vms_account_modify_user(grpc_t *grpc, PARAM_REQ_vms_account_modify_user *req, PARAM_RESP_vms_account_modify_user *resp)
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

int USERDEF_vms_alarmin_start(grpc_t *grpc, PARAM_REQ_vms_alarmin_start *req, PARAM_RESP_vms_alarmin_start *resp)
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

int USERDEF_vms_alarmin_stop(grpc_t *grpc, PARAM_REQ_vms_alarmin_stop *req, PARAM_RESP_vms_alarmin_stop *resp)
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

int USERDEF_vms_alarmin_get_param(grpc_t *grpc, PARAM_REQ_vms_alarmin_get_param *req, PARAM_RESP_vms_alarmin_get_param *resp)
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

int USERDEF_vms_alarmin_set_param(grpc_t *grpc, PARAM_REQ_vms_alarmin_set_param *req, PARAM_RESP_vms_alarmin_set_param *resp)
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

int USERDEF_vms_alarmin_b_onduty(grpc_t *grpc, PARAM_REQ_vms_alarmin_b_onduty *req, PARAM_RESP_vms_alarmin_b_onduty *resp)
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

int USERDEF_vms_alarmin_b_alarming(grpc_t *grpc, PARAM_REQ_vms_alarmin_b_alarming *req, PARAM_RESP_vms_alarmin_b_alarming *resp)
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

int USERDEF_vms_alarm_get_param(grpc_t *grpc, PARAM_REQ_vms_alarm_get_param *req, PARAM_RESP_vms_alarm_get_param *resp)
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

int USERDEF_vms_alarm_set_param(grpc_t *grpc, PARAM_REQ_vms_alarm_set_param *req, PARAM_RESP_vms_alarm_set_param *resp)
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

int USERDEF_vms_ai_get_param(grpc_t *grpc, PARAM_REQ_vms_ai_get_param *req, PARAM_RESP_vms_ai_get_param *resp)
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

int USERDEF_vms_ai_set_param(grpc_t *grpc, PARAM_REQ_vms_ai_set_param *req, PARAM_RESP_vms_ai_set_param *resp)
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

int USERDEF_vms_ao_get_param(grpc_t *grpc, PARAM_REQ_vms_ao_get_param *req, PARAM_RESP_vms_ao_get_param *resp)
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

int USERDEF_vms_ao_set_param(grpc_t *grpc, PARAM_REQ_vms_ao_set_param *req, PARAM_RESP_vms_ao_set_param *resp)
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

int USERDEF_vms_connection_get_list(grpc_t *grpc, PARAM_REQ_vms_connection_get_list *req, PARAM_RESP_vms_connection_get_list *resp)
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

int USERDEF_vms_connection_breakoff(grpc_t *grpc, PARAM_REQ_vms_connection_breakoff *req, PARAM_RESP_vms_connection_breakoff *resp)
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

int USERDEF_vms_dev_get_hwinfo(grpc_t *grpc, PARAM_REQ_vms_dev_get_hwinfo *req, PARAM_RESP_vms_dev_get_hwinfo *resp)
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

int USERDEF_vms_dev_get_info(grpc_t *grpc, PARAM_REQ_vms_dev_get_info *req, PARAM_RESP_vms_dev_get_info *resp)
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

int USERDEF_vms_dev_set_info(grpc_t *grpc, PARAM_REQ_vms_dev_set_info *req, PARAM_RESP_vms_dev_set_info *resp)
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

int USERDEF_vms_dev_stime(grpc_t *grpc, PARAM_REQ_vms_dev_stime *req, PARAM_RESP_vms_dev_stime *resp)
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

int USERDEF_vms_dev_gtime(grpc_t *grpc, PARAM_REQ_vms_dev_gtime *req, PARAM_RESP_vms_dev_gtime *resp)
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

int USERDEF_vms_dev_ntp_set(grpc_t *grpc, PARAM_REQ_vms_dev_ntp_set *req, PARAM_RESP_vms_dev_ntp_set *resp)
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

int USERDEF_vms_dev_ntp_get(grpc_t *grpc, PARAM_REQ_vms_dev_ntp_get *req, PARAM_RESP_vms_dev_ntp_get *resp)
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

int USERDEF_vms_dev_reboot(grpc_t *grpc, PARAM_REQ_vms_dev_reboot *req, PARAM_RESP_vms_dev_reboot *resp)
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

int USERDEF_vms_dev_factory_default(grpc_t *grpc, PARAM_REQ_vms_dev_factory_default *req, PARAM_RESP_vms_dev_factory_default *resp)
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

int USERDEF_vms_ifconfig_get_inet(grpc_t *grpc, PARAM_REQ_vms_ifconfig_get_inet *req, PARAM_RESP_vms_ifconfig_get_inet *resp)
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

int USERDEF_vms_ifconfig_eth_set(grpc_t *grpc, PARAM_REQ_vms_ifconfig_eth_set *req, PARAM_RESP_vms_ifconfig_eth_set *resp)
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

int USERDEF_vms_ifconfig_ppp_set(grpc_t *grpc, PARAM_REQ_vms_ifconfig_ppp_set *req, PARAM_RESP_vms_ifconfig_ppp_set *resp)
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

int USERDEF_vms_ifconfig_wifi_connect(grpc_t *grpc, PARAM_REQ_vms_ifconfig_wifi_connect *req, PARAM_RESP_vms_ifconfig_wifi_connect *resp)
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

int USERDEF_vms_ifconfig_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vms_ifconfig_wifi_list_ap *req, PARAM_RESP_vms_ifconfig_wifi_list_ap *resp)
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

int USERDEF_vms_image_get_param(grpc_t *grpc, PARAM_REQ_vms_image_get_param *req, PARAM_RESP_vms_image_get_param *resp)
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

int USERDEF_vms_image_set_param(grpc_t *grpc, PARAM_REQ_vms_image_set_param *req, PARAM_RESP_vms_image_set_param *resp)
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

int USERDEF_vms_log_get(grpc_t *grpc, PARAM_REQ_vms_log_get *req, PARAM_RESP_vms_log_get *resp)
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

int USERDEF_vms_log_clear(grpc_t *grpc, PARAM_REQ_vms_log_clear *req, PARAM_RESP_vms_log_clear *resp)
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

int USERDEF_vms_mdetect_set_param(grpc_t *grpc, PARAM_REQ_vms_mdetect_set_param *req, PARAM_RESP_vms_mdetect_set_param *resp)
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

int USERDEF_vms_mdetect_get_param(grpc_t *grpc, PARAM_REQ_vms_mdetect_get_param *req, PARAM_RESP_vms_mdetect_get_param *resp)
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

int USERDEF_vms_mdetect_balarming(grpc_t *grpc, PARAM_REQ_vms_mdetect_balarming *req, PARAM_RESP_vms_mdetect_balarming *resp)
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

int USERDEF_vms_chnosd_get_param(grpc_t *grpc, PARAM_REQ_vms_chnosd_get_param *req, PARAM_RESP_vms_chnosd_get_param *resp)
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

int USERDEF_vms_chnosd_set_param(grpc_t *grpc, PARAM_REQ_vms_chnosd_set_param *req, PARAM_RESP_vms_chnosd_set_param *resp)
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

int USERDEF_vms_privacy_get_param(grpc_t *grpc, PARAM_REQ_vms_privacy_get_param *req, PARAM_RESP_vms_privacy_get_param *resp)
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

int USERDEF_vms_privacy_set_param(grpc_t *grpc, PARAM_REQ_vms_privacy_set_param *req, PARAM_RESP_vms_privacy_set_param *resp)
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

int USERDEF_vms_ptz_move_start(grpc_t *grpc, PARAM_REQ_vms_ptz_move_start *req, PARAM_RESP_vms_ptz_move_start *resp)
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

int USERDEF_vms_ptz_move_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_move_stop *req, PARAM_RESP_vms_ptz_move_stop *resp)
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

int USERDEF_vms_ptz_fi_start(grpc_t *grpc, PARAM_REQ_vms_ptz_fi_start *req, PARAM_RESP_vms_ptz_fi_start *resp)
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

int USERDEF_vms_ptz_fi_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_fi_stop *req, PARAM_RESP_vms_ptz_fi_stop *resp)
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

int USERDEF_vms_ptz_preset_set(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_set *req, PARAM_RESP_vms_ptz_preset_set *resp)
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

int USERDEF_vms_ptz_preset_locate(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_locate *req, PARAM_RESP_vms_ptz_preset_locate *resp)
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

int USERDEF_vms_ptz_preset_delete(grpc_t *grpc, PARAM_REQ_vms_ptz_preset_delete *req, PARAM_RESP_vms_ptz_preset_delete *resp)
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

int USERDEF_vms_ptz_presets_get(grpc_t *grpc, PARAM_REQ_vms_ptz_presets_get *req, PARAM_RESP_vms_ptz_presets_get *resp)
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

int USERDEF_vms_ptz_patrol_create(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_create *req, PARAM_RESP_vms_ptz_patrol_create *resp)
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

int USERDEF_vms_ptz_patrol_delete(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_delete *req, PARAM_RESP_vms_ptz_patrol_delete *resp)
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

int USERDEF_vms_ptz_patrols_get(grpc_t *grpc, PARAM_REQ_vms_ptz_patrols_get *req, PARAM_RESP_vms_ptz_patrols_get *resp)
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

int USERDEF_vms_ptz_patrol_get_nodes(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_get_nodes *req, PARAM_RESP_vms_ptz_patrol_get_nodes *resp)
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

int USERDEF_vms_ptz_patrol_add_node(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_add_node *req, PARAM_RESP_vms_ptz_patrol_add_node *resp)
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

int USERDEF_vms_ptz_patrol_del_node(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_del_node *req, PARAM_RESP_vms_ptz_patrol_del_node *resp)
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

int USERDEF_vms_ptz_patrol_set_speed(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_set_speed *req, PARAM_RESP_vms_ptz_patrol_set_speed *resp)
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

int USERDEF_vms_ptz_patrol_set_stay_seconds(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_set_stay_seconds *req, PARAM_RESP_vms_ptz_patrol_set_stay_seconds *resp)
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

int USERDEF_vms_ptz_patrol_locate(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_locate *req, PARAM_RESP_vms_ptz_patrol_locate *resp)
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

int USERDEF_vms_ptz_patrol_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_patrol_stop *req, PARAM_RESP_vms_ptz_patrol_stop *resp)
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

int USERDEF_vms_ptz_scan_set_left(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_left *req, PARAM_RESP_vms_ptz_scan_set_left *resp)
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

int USERDEF_vms_ptz_scan_set_right(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_right *req, PARAM_RESP_vms_ptz_scan_set_right *resp)
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

int USERDEF_vms_ptz_scan_start(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_start *req, PARAM_RESP_vms_ptz_scan_start *resp)
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

int USERDEF_vms_ptz_scan_stop(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_stop *req, PARAM_RESP_vms_ptz_scan_stop *resp)
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

int USERDEF_vms_ptz_scan_set_speed(grpc_t *grpc, PARAM_REQ_vms_ptz_scan_set_speed *req, PARAM_RESP_vms_ptz_scan_set_speed *resp)
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

int USERDEF_vms_record_get(grpc_t *grpc, PARAM_REQ_vms_record_get *req, PARAM_RESP_vms_record_get *resp)
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

int USERDEF_vms_record_set(grpc_t *grpc, PARAM_REQ_vms_record_set *req, PARAM_RESP_vms_record_set *resp)
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

int USERDEF_vms_storage_get_info(grpc_t *grpc, PARAM_REQ_vms_storage_get_info *req, PARAM_RESP_vms_storage_get_info *resp)
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

int USERDEF_vms_storage_format(grpc_t *grpc, PARAM_REQ_vms_storage_format *req, PARAM_RESP_vms_storage_format *resp)
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

int USERDEF_vms_stream_get_param(grpc_t *grpc, PARAM_REQ_vms_stream_get_param *req, PARAM_RESP_vms_stream_get_param *resp)
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

int USERDEF_vms_stream_get_params(grpc_t *grpc, PARAM_REQ_vms_stream_get_params *req, PARAM_RESP_vms_stream_get_params *resp)
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

int USERDEF_vms_stream_set_param(grpc_t *grpc, PARAM_REQ_vms_stream_set_param *req, PARAM_RESP_vms_stream_set_param *resp)
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

int USERDEF_vms_stream_get_ability(grpc_t *grpc, PARAM_REQ_vms_stream_get_ability *req, PARAM_RESP_vms_stream_get_ability *resp)
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

int USERDEF_vms_stream_snapshot(grpc_t *grpc, PARAM_REQ_vms_stream_snapshot *req, PARAM_RESP_vms_stream_snapshot *resp)
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

int USERDEF_vms_screen_get_ability(grpc_t *grpc, PARAM_REQ_vms_screen_get_ability *req, PARAM_RESP_vms_screen_get_ability *resp)
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

int USERDEF_vms_screen_get_display(grpc_t *grpc, PARAM_REQ_vms_screen_get_display *req, PARAM_RESP_vms_screen_get_display *resp)
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

int USERDEF_vms_screen_set_display(grpc_t *grpc, PARAM_REQ_vms_screen_set_display *req, PARAM_RESP_vms_screen_set_display *resp)
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

int USERDEF_vms_screen_get_tour(grpc_t *grpc, PARAM_REQ_vms_screen_get_tour *req, PARAM_RESP_vms_screen_get_tour *resp)
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

int USERDEF_vms_screen_set_tour(grpc_t *grpc, PARAM_REQ_vms_screen_set_tour *req, PARAM_RESP_vms_screen_set_tour *resp)
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

int USERDEF_vms_screen_get_screen(grpc_t *grpc, PARAM_REQ_vms_screen_get_screen *req, PARAM_RESP_vms_screen_get_screen *resp)
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

int USERDEF_vms_screen_set_screen(grpc_t *grpc, PARAM_REQ_vms_screen_set_screen *req, PARAM_RESP_vms_screen_set_screen *resp)
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

int USERDEF_vms_vsource_add_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_add_vs *req, PARAM_RESP_vms_vsource_add_vs *resp)
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

int USERDEF_vms_vsource_delete_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_delete_vs *req, PARAM_RESP_vms_vsource_delete_vs *resp)
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

int USERDEF_vms_vsource_modify_vs(grpc_t *grpc, PARAM_REQ_vms_vsource_modify_vs *req, PARAM_RESP_vms_vsource_modify_vs *resp)
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

int USERDEF_vms_vsource_get_chn_status(grpc_t *grpc, PARAM_REQ_vms_vsource_get_chn_status *req, PARAM_RESP_vms_vsource_get_chn_status *resp)
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

int USERDEF_vms_channel_get(grpc_t *grpc, PARAM_REQ_vms_channel_get *req, PARAM_RESP_vms_channel_get *resp)
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

int USERDEF_vms_channel_add(grpc_t *grpc, PARAM_REQ_vms_channel_add *req, PARAM_RESP_vms_channel_add *resp)
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

int USERDEF_vms_channel_remove(grpc_t *grpc, PARAM_REQ_vms_channel_remove *req, PARAM_RESP_vms_channel_remove *resp)
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

int USERDEF_vms_channel_modify(grpc_t *grpc, PARAM_REQ_vms_channel_modify *req, PARAM_RESP_vms_channel_modify *resp)
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

int USERDEF_vms_broadcast_discovery(grpc_t *grpc, PARAM_REQ_vms_broadcast_discovery *req, PARAM_RESP_vms_broadcast_discovery *resp)
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

int USERDEF_vms_broadcast_get_inet(grpc_t *grpc, PARAM_REQ_vms_broadcast_get_inet *req, PARAM_RESP_vms_broadcast_get_inet *resp)
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

int USERDEF_vms_broadcast_eth_set(grpc_t *grpc, PARAM_REQ_vms_broadcast_eth_set *req, PARAM_RESP_vms_broadcast_eth_set *resp)
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

int USERDEF_vms_broadcast_ppp_set(grpc_t *grpc, PARAM_REQ_vms_broadcast_ppp_set *req, PARAM_RESP_vms_broadcast_ppp_set *resp)
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

int USERDEF_vms_broadcast_wifi_connect(grpc_t *grpc, PARAM_REQ_vms_broadcast_wifi_connect *req, PARAM_RESP_vms_broadcast_wifi_connect *resp)
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

int USERDEF_vms_broadcast_wifi_list_ap(grpc_t *grpc, PARAM_REQ_vms_broadcast_wifi_list_ap *req, PARAM_RESP_vms_broadcast_wifi_list_ap *resp)
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

int USERDEF_vms_storage_get_info(grpc_t *grpc, PARAM_REQ_vms_storage_get_info *req, PARAM_RESP_vms_storage_get_info *resp)
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

int USERDEF_vms_storage_start_intial_disk(grpc_t *grpc, PARAM_REQ_vms_storage_start_intial_disk *req, PARAM_RESP_vms_storage_start_intial_disk *resp)
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

int USERDEF_vms_storage_get_disk_initial_rate(grpc_t *grpc, PARAM_REQ_vms_storage_get_disk_initial_rate *req, PARAM_RESP_vms_storage_get_disk_initial_rate *resp)
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

int USERDEF_vms_storage_get_record_fragments(grpc_t *grpc, PARAM_REQ_vms_storage_get_record_fragments *req, PARAM_RESP_vms_storage_get_record_fragments *resp)
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

int USERDEF_vms_stream_get_service(grpc_t *grpc, PARAM_REQ_vms_stream_get_service *req, PARAM_RESP_vms_stream_get_service *resp)
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
