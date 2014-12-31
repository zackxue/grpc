#ifndef _CJSON_DIRECT_H_
#define _CJSON_DIRECT_H_

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum {
	KEY_TYPE_NULL,
	KEY_TYPE_U8,
	KEY_TYPE_U16,
	KEY_TYPE_U32,
	KEY_TYPE_FLOAT,
	KEY_TYPE_DOUBLE,
	KEY_TYPE_STRING,	//数组存储的字符串

	/**
	 * 外部存储的字符串。
	 * 对于cjson_string2object形成的结构体，
	 * 需要调用cjson_string2object_array_free 释放资源
	 *
	 */
	KEY_TYPE_STRING_PTR,	//

	KEY_TYPE_OBJECT,

	/**
		 注意，如果是字符串数组，只支持二维数组，而且不支持外部字符串
		 char stringArray[2][3];// 这种是支持的
		 char *stringArray[2];//这种是不支持的。因为它有外部字符串
	*/
	KEY_TYPE_ARRAY,
	KEY_TYPE_MAX
}key_type_e;


typedef struct key_info_s{
	int csize;					///< 本结构体大小
	key_type_e type;				///< 成员类型
	char *key;					///< 成员名称
	int offset;					///< 成员偏移地址
	int ksize;						///< 成员大小
	struct key_info_s *sub_key;	///< 对于#KEY_TYPE_OBJECT类型，其具体类型定义
	int arraycnt;					///< 对于#KEY_TYPE_ARRAY类型，其个数
	key_type_e arraytype;		///< 对于#KEY_TYPE_ARRAY类型，其成员的类型
}json_kinfo_t;


/*成员在结构体中的偏移地址*/
#define NAME_OFFSET(type,name) ((int)(&(((type *)0)->name)))
#define NAME_SIZE(type,name) (sizeof((((type *)0)->name)))


/**
 *@brief 形成结构体
 *@param ctype 结构体类型
 *@param ktype 成员类型
 *@param kname 成员名
 *@param subkey 如果keytype为#KEY_TYPE_OBJECT，则为其对应结构体的#json_kinfo_t 指针
 *@param arraycnt 对于#KEY_TYPE_ARRAY类型，其个数
 *@param arraytype 对于#KEY_TYPE_ARRAY类型，其成员的类型
 *
 */
#define MAKE_ARRAY_INFO(ctype, ktype, kname, subkey, arraycnt, arraytype) {sizeof(ctype), ktype, #kname, NAME_OFFSET(ctype,kname), NAME_SIZE(ctype,kname), subkey, arraycnt, arraytype}

#define MAKE_KEY_INFO(ctype, ktype, kname, subkey) MAKE_ARRAY_INFO(ctype, ktype, kname, subkey, 0, KEY_TYPE_NULL)
#define MAKE_END_INFO()	{0, KEY_TYPE_NULL, NULL, 0, 0, NULL}


/**
 *@brief 将JSON格式的字符串转化为结构体
 *@param kinfo 输入 结构体信息，用于识别结构体各成员
 *@param string 输入 要转化的字符串
 *@param obj 输出 结构体指针。如果为NULL，会自动分配内存，需要释放
 *
 *@return obj。失败时返回NULL
 *
 */
void *cjson_string2object(json_kinfo_t *kinfo, char *string, void *obj);

/**
 *@brief 将JSON格式的字符串转化为结构体数组
 *@param kinfo 输入 结构体信息，用于识别结构体各成员
 *@param string 输入 要转化的字符串
 *@param obj_array 输出 结构体数组的指针。如果为NULL，会自动分配内存，需要释放
 *@param maxCnt 输入 最多能装载的obj的个数
 *@param cnt 输出 实际得到的obj的个数
 *
 *@return obj。失败时返回NULL
 *
 */
void *cjson_string2object_array(json_kinfo_t *kinfo, char *string, void *obj_array, int maxCnt, int *cnt);

/**
 *@brief 将#cjson_string2object 或 #cjson_string2object_array 转化后的结构体，做必要的释放操作。
 *@param kinfo 输入 结构体信息，用于识别结构体各成员
 *@param obj_array 需要释放的资源
 *@param cnt 输入 实际得到的obj的个数。对于 #cjson_string2object ，cnt为1
 *
 */
void cjson_string2object_array_free(json_kinfo_t *kinfo, void *obj_array, int cnt);

/**
 *@brief 将结构体转化为字符串
 *@param kinfo 输入 结构体信息，用于识别结构体各成员
 *@param obj 输入 要转化的结构体地址
 *
 *@return json格式的字符串。NULL if failed
 *
 *@note 其返回的字符串，需要用free释放
 *
 */
char *cjson_object2string(json_kinfo_t *kinfo, void *obj);

/**
 *@brief 将结构体数组转化为JSON字符串
 *@param kinfo 输入 结构体信息，用于识别结构体各成员
 *@param obj_array 输入 要转化的结构体数组的指针
 *@param cnt 数组个数
 *
 *@return json格式的字符串。NULL if failed
 *
 *@note 其返回的字符串，需要用free释放
 *
 */
char *cjson_object_array2string(json_kinfo_t *kinfo, void *obj_array, int cnt);


#ifdef __cplusplus
}
#endif

#endif

