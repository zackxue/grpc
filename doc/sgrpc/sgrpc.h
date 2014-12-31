/*
 * sgrpc.h
 *
 *  Created on: 2014年10月18日
 *      Author: LiuFengxiang
 *		 Email: lfx@jovision.com
 */

#ifndef SGRPC_H_
#define SGRPC_H_

#ifdef __cplusplus
extern "C" {
#endif

int sgrpc_init();

char *sgrpc_parse_yst(const char *data);

int sgrpc_free_yst(char *resp);

/**
 *@brief 当帐户信息发生变化时，促使其刷新帐户信息
 */
int sgrpc_account_refresh();

#ifdef __cplusplus
}
#endif

#endif /* SGRPC_H_ */
