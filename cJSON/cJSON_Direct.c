#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>
#include <ctype.h>
#include "cJSON.h"

#include "cJSON_Direct.h"

#define KEY_ADDR(obj, offset)  (((unsigned char *)obj) + offset)

#define KEY_ADDR_U8(obj, offset) ((unsigned char *)KEY_ADDR(obj, offset))
#define KEY_ADDR_U16(obj, offset) ((unsigned short *)KEY_ADDR(obj, offset))
#define KEY_ADDR_U32(obj, offset) ((unsigned int *)KEY_ADDR(obj, offset))
#define KEY_ADDR_FLOAT(obj, offset) ((float *)KEY_ADDR(obj, offset))
#define KEY_ADDR_DOUBLE(obj, offset) ((double *)KEY_ADDR(obj, offset))

#define json_assert(x,express) do{\
		if (!(x))\
		{\
			printf("[%s] json_assert failed\n", __FUNCTION__);\
			express;\
		}\
	}while(0)


static void _cjson2obj(json_kinfo_t *kinfo, cJSON *json, void *obj)
{
	int i,j,cnt;
	cJSON *sub, *item;

	for (i=0;kinfo[i].key != NULL;i++)
	{
		sub = cJSON_GetObjectItem(json,kinfo[i].key);
		if (!sub)
			continue;
		switch(kinfo[i].type)
		{
		default:
			break;
		case KEY_TYPE_U8:
			*KEY_ADDR_U8(obj, kinfo[i].offset) = sub->valueint;
			break;
		case KEY_TYPE_U16:
			*KEY_ADDR_U16(obj, kinfo[i].offset) = sub->valueint;
			break;
		case KEY_TYPE_U32:
			*KEY_ADDR_U32(obj, kinfo[i].offset) = sub->valueint;
			break;
		case KEY_TYPE_FLOAT:
			*KEY_ADDR_FLOAT(obj, kinfo[i].offset) = sub->valuedouble;
			break;
		case KEY_TYPE_DOUBLE:
			*KEY_ADDR_DOUBLE(obj, kinfo[i].offset) = sub->valuedouble;
			break;
		case KEY_TYPE_STRING:
			memcpy(KEY_ADDR_U8(obj, kinfo[i].offset), sub->valuestring, kinfo[i].ksize);
			//set the last byte be '\0', to avoid no string end.
			KEY_ADDR_U8(obj, kinfo[i].offset) [kinfo[i].ksize-1] = '\0';
			break;
		case KEY_TYPE_STRING_PTR:
		{
			char *temp = strdup(sub->valuestring);
			*KEY_ADDR_U32(obj, kinfo[i].offset) = (unsigned int)temp;
		}
			break;
		case KEY_TYPE_ARRAY:
			cnt = cJSON_GetArraySize(sub);
			switch(kinfo[i].arraytype)
			{
			default:
				printf(" %d Not Support\n", kinfo[i].arraytype);
				break;
			case KEY_TYPE_STRING:
				for (j=0;j<cnt && j<kinfo[i].arraycnt;j++)
				{
					int strMaxLen = (kinfo[i].ksize / kinfo[i].arraycnt);
					item = cJSON_GetArrayItem(sub, j);
					memcpy(KEY_ADDR_U8(obj, kinfo[i].offset) + j * strMaxLen, item->valuestring, strMaxLen);
					//set the last byte be '\0', to avoid no string end.
					(KEY_ADDR_U8(obj, kinfo[i].offset) + j * strMaxLen)[strMaxLen-1] = '\0';
				}
				break;
			case KEY_TYPE_STRING_PTR:
				for (j=0;j<cnt && j<kinfo[i].arraycnt;j++)
				{
					int strMaxLen = (kinfo[i].ksize / kinfo[i].arraycnt);
					item = cJSON_GetArrayItem(sub, j);
					{
						char *temp = strdup(item->valuestring);
						*(KEY_ADDR_U32(obj, kinfo[i].offset) + j) = (unsigned int)temp;
					}
				}
				break;
			case KEY_TYPE_U8:
				for (j=0;j<cnt && j<kinfo[i].arraycnt;j++)
				{
					item = cJSON_GetArrayItem(sub, j);
					if (item)
						KEY_ADDR_U8(obj, kinfo[i].offset)[j] = item->valueint;
				}
				break;
			case KEY_TYPE_U16:
				for (j=0;j<cnt && j<kinfo[i].arraycnt;j++)
				{
					item = cJSON_GetArrayItem(sub, j);
					if (item)
						KEY_ADDR_U16(obj, kinfo[i].offset)[j] = item->valueint;
				}
				break;
			case KEY_TYPE_U32:
				for (j=0;j<cnt && j<kinfo[i].arraycnt;j++)
				{
					item = cJSON_GetArrayItem(sub, j);
					if (item)
						KEY_ADDR_U32(obj, kinfo[i].offset)[j] = item->valueint;
				}
				break;
			case KEY_TYPE_FLOAT:
				for (j=0;j<cnt && j<kinfo[i].arraycnt;j++)
				{
					item = cJSON_GetArrayItem(sub, j);
					if (item)
						KEY_ADDR_FLOAT(obj, kinfo[i].offset)[j] = item->valuedouble;
				}
				break;
			case KEY_TYPE_DOUBLE:
				for (j=0;j<cnt && j<kinfo[i].arraycnt;j++)
				{
					item = cJSON_GetArrayItem(sub, j);
					if (item)
						KEY_ADDR_DOUBLE(obj, kinfo[i].offset)[j] = item->valuedouble;
				}
				break;
			case KEY_TYPE_OBJECT:
				for (j=0;j<cnt && j<kinfo[i].arraycnt;j++)
				{
					item = cJSON_GetArrayItem(sub, j);
					if (item)
						_cjson2obj(kinfo[i].sub_key, item, KEY_ADDR_U8(obj, kinfo[i].offset) + (kinfo[i].sub_key->csize * j));
				}
				break;
			}
			break;
		case KEY_TYPE_OBJECT:
			_cjson2obj(kinfo[i].sub_key, sub, KEY_ADDR_U8(obj, kinfo[i].offset));
			break;
		}
	}
}

void *cjson_string2object(json_kinfo_t *kinfo, char *string, void *obj)
{
	cJSON *json = cJSON_Parse(string);

	if (obj == NULL)
		obj = malloc(kinfo[0].csize);
	json_assert(json, return NULL);
	_cjson2obj(kinfo, json, obj);
	cJSON_Delete(json);
	return obj;
}

/**
 *@brief 
 *@param kinfo 输入 结构体信息，用于识别结构体各成员
 *@param string 输入 要转化的字符串
 *@param obj_array 输出 结构体数组的指针。如果为NULL，会自动分配内存，需要释放
 *@param maxCnt 输入 最多能装载的obj的个数
 *@param cnt 输出 实际得到的obj的个数
 *
 *@return obj。失败时返回NULL
 *
 */
void *cjson_string2object_array(json_kinfo_t *kinfo, char *string, void *obj_array, int maxCnt, int *cnt)
{
	cJSON *json = cJSON_Parse(string);
	cJSON *sub;
	int i;

	json_assert(json, return NULL);
	*cnt = cJSON_GetArraySize(json);

	if (obj_array == NULL)
	{
		obj_array = malloc(kinfo[0].csize * (*cnt));
		json_assert(obj_array, return NULL);
	}
	else if (*cnt > maxCnt)
		*cnt = maxCnt;

	for (i=0;i<*cnt;i++)
	{
		sub = cJSON_GetArrayItem(json,i);
		_cjson2obj(kinfo, sub, (char *)obj_array + (kinfo->csize * i));
	}
	return obj_array;
}

static cJSON *_obj2cjson(json_kinfo_t *kinfo, cJSON *json, void *obj)
{
	int i,j;
	cJSON *sub;
	unsigned char *addr;

	for (i=0;kinfo[i].key != NULL;i++)
	{
		switch(kinfo[i].type)
		{
		default:
			printf(" %d Not Support\n", kinfo[i].arraytype);
			break;
		case KEY_TYPE_U8:
			cJSON_AddNumberToObject(json,kinfo[i].key, *KEY_ADDR_U8(obj, kinfo[i].offset));
			break;
		case KEY_TYPE_U16:
			cJSON_AddNumberToObject(json,kinfo[i].key, *KEY_ADDR_U16(obj, kinfo[i].offset));
			break;
		case KEY_TYPE_U32:
			cJSON_AddNumberToObject(json,kinfo[i].key, *KEY_ADDR_U32(obj, kinfo[i].offset));
			break;
		case KEY_TYPE_FLOAT:
			cJSON_AddNumberToObject(json,kinfo[i].key, *KEY_ADDR_FLOAT(obj, kinfo[i].offset));
			break;
		case KEY_TYPE_DOUBLE:
			cJSON_AddNumberToObject(json,kinfo[i].key, *KEY_ADDR_DOUBLE(obj, kinfo[i].offset));
			break;
		case KEY_TYPE_STRING:
			cJSON_AddStringToObject(json, kinfo[i].key, (char *)KEY_ADDR_U8(obj, kinfo[i].offset));
			break;
		case KEY_TYPE_STRING_PTR:
			cJSON_AddStringToObject(json, kinfo[i].key, (char *)(*KEY_ADDR_U32(obj, kinfo[i].offset)));
			break;
		case KEY_TYPE_ARRAY:
			switch(kinfo[i].arraytype)
			{
			default:
				printf(" %d Not Support\n", kinfo[i].arraytype);
				sub = NULL;
				break;
			case KEY_TYPE_STRING:
				//printf(" %d Not Support\n", kinfo[i].arraytype);
				/*注意，这里只支持二维数组方式保存的字符串数组*/
				sub = cJSON_CreateArray();
				for (j=0;j<kinfo[i].arraycnt;j++)
				{
					cJSON_AddItemToArray(sub,
						cJSON_CreateString((char *)KEY_ADDR_U8(obj, kinfo[i].offset) + j * (kinfo[i].ksize / kinfo[i].arraycnt)));
				}
				break;
			case KEY_TYPE_STRING_PTR:
				sub = cJSON_CreateArray();
				for (j=0;j<kinfo[i].arraycnt;j++)
				{
					cJSON_AddItemToArray(sub,
						cJSON_CreateString((char *)(*(KEY_ADDR_U32(obj, kinfo[i].offset) + j)))
						);
				}
				break;
			case KEY_TYPE_U8:
				sub = cJSON_CreateArray();
				for (j=0;j<kinfo[i].arraycnt;j++)
				{
					cJSON_AddItemToArray(sub,cJSON_CreateNumber(KEY_ADDR_U8(obj, kinfo[i].offset)[j]));
				}
				break;
			case KEY_TYPE_U16:
				sub = cJSON_CreateArray();
				for (j=0;j<kinfo[i].arraycnt;j++)
				{
					cJSON_AddItemToArray(sub,cJSON_CreateNumber(KEY_ADDR_U16(obj, kinfo[i].offset)[j]));
				}
				break;
			case KEY_TYPE_U32:
				sub = cJSON_CreateIntArray((int*)KEY_ADDR_U32(obj, kinfo[i].offset), kinfo[i].arraycnt);
				break;
			case KEY_TYPE_FLOAT:
				sub = cJSON_CreateFloatArray(KEY_ADDR_FLOAT(obj, kinfo[i].offset), kinfo[i].arraycnt);
				break;
			case KEY_TYPE_DOUBLE:
				sub = cJSON_CreateDoubleArray(KEY_ADDR_DOUBLE(obj, kinfo[i].offset), kinfo[i].arraycnt);
				break;
			case KEY_TYPE_OBJECT:
				if (kinfo[i].sub_key == NULL)
				{
					printf("ERROR: kinfo[i].sub_key should not be NULL\n");
					break;
				}
				sub = cJSON_CreateArray();
				addr = KEY_ADDR_U8(obj, kinfo[i].offset);
				for (j=0;j<kinfo[i].arraycnt;j++)
				{
					cJSON_AddItemToArray(sub, _obj2cjson(kinfo[i].sub_key, cJSON_CreateObject(), addr + (kinfo[i].sub_key->csize * j)));
				}
				break;
			}
			cJSON_AddItemToObject(json, kinfo[i].key, sub);
			break;
		case KEY_TYPE_OBJECT:
			cJSON_AddItemToObject(json, kinfo[i].key, _obj2cjson(kinfo[i].sub_key, cJSON_CreateObject(), KEY_ADDR(obj, kinfo[i].offset)));
			break;
		}
	}
	return json;
}

void cjson_string2object_free(json_kinfo_t *kinfo, void *obj)
{
	int i,j;
	cJSON *sub;
	unsigned char *addr;

	for (i=0;kinfo[i].key != NULL;i++)
	{
		switch(kinfo[i].type)
		{
		default:
			break;
		case KEY_TYPE_STRING_PTR:
		{
			char *temp = (char *)(*KEY_ADDR_U32(obj, kinfo[i].offset));
//			printf("test free: %d : %x\n", __LINE__, temp);
			if (temp)
				free(temp);
		}
			break;
		case KEY_TYPE_ARRAY:
			switch(kinfo[i].arraytype)
			{
			default:
				break;
			case KEY_TYPE_STRING_PTR:
				for (j=0;j<kinfo[i].arraycnt;j++)
				{
					char *temp = (char *)(*(KEY_ADDR_U32(obj, kinfo[i].offset) + j));
//					printf("test free: %d : %x\n", __LINE__, temp);
					if (temp)
						free(temp);
				}
				break;
			}
			break;
		}
	}
	return ;
}

/**
 *@brief 将#cjson_string2object 或 #cjson_string2object_array 转化后的结构体，做必要的释放操作。
 *@param kinfo 输入 结构体信息，用于识别结构体各成员
 *@param obj_array 需要释放的资源
 *@param cnt 输入 实际得到的obj的个数。对于 #cjson_string2object ，cnt为1
 *
 */
void cjson_string2object_array_free(json_kinfo_t *kinfo, void *obj_array, int cnt)
{
	int i;
	for (i=0;i<cnt;i++)
	{
		cjson_string2object_free(kinfo, (char *)obj_array + (kinfo->csize * i));
	}
}

char *cjson_object2string(json_kinfo_t *kinfo, void *obj)
{
	cJSON *json = cJSON_CreateObject();
	char *out;

	_obj2cjson(kinfo, json, obj);
	out = cJSON_Print(json);
	cJSON_Delete(json);

	return out;
}

/**
 *@brief 
 *@param kinfo 输入 结构体信息，用于识别结构体各成员
 *@param obj_array 输入 要转化的结构体数组的指针
 *@param cnt 数组个数
 *
 *@return json格式的字符串。NULL if failed
 *
 *@note 其返回的字符串，需要用free释放
 *
 */
char *cjson_object_array2string(json_kinfo_t *kinfo, void *obj_array, int cnt)
{
	cJSON *json = cJSON_CreateArray();
	cJSON *item;
	char *out;
	int i;

	for (i=0;i<cnt;i++)
	{
		item = cJSON_CreateObject();
		_obj2cjson(kinfo, item, (char *)obj_array + (kinfo->csize * i));
		cJSON_AddItemToArray(json,item);
	}

	out = cJSON_Print(json);
	cJSON_Delete(json);
	return out;
}







typedef struct tagRECT
{
	unsigned int		x;
	unsigned int		y;
	unsigned int		w;
	unsigned int		h;
}RECT, *PRECT;


static json_kinfo_t rect_key[] = {
	MAKE_KEY_INFO(RECT, KEY_TYPE_U32, x, NULL),
	MAKE_KEY_INFO(RECT, KEY_TYPE_U32, y, NULL),
	MAKE_KEY_INFO(RECT, KEY_TYPE_U32, w, NULL),
	MAKE_KEY_INFO(RECT, KEY_TYPE_U32, h, NULL),
	MAKE_END_INFO()
};


typedef struct tagMD
{
	int			bEnable;			//是否开启移动检测
	unsigned int	nSensitivity;		//灵敏度
	unsigned int	nThreshold;			//移动检测阈值
	unsigned int	nRectNum;			//移动检测区域个数，最大为4，0表示全画面检测
	RECT		stRect[4];

	unsigned int	nDelay;
	unsigned int	nStart;
	unsigned int	bOutClient;
	unsigned int	bOutEMail;
	unsigned char testlist[5];
	RECT		testObj;
	char name[20];
	char nameList[2][20];
	char *nameptr;
	char *nameptrList[2];
	float flt;
	double db;
	float flta[3];
	double dba[3];
}MD, *PMD;

static json_kinfo_t md_key[] = {
	MAKE_KEY_INFO(MD, KEY_TYPE_U32, bEnable, NULL),
	MAKE_KEY_INFO(MD, KEY_TYPE_U32, nSensitivity, NULL),
	MAKE_KEY_INFO(MD, KEY_TYPE_U32, nThreshold, NULL),
	MAKE_KEY_INFO(MD, KEY_TYPE_U32, nRectNum, NULL),
	MAKE_ARRAY_INFO(MD, KEY_TYPE_ARRAY, stRect, rect_key, 4, KEY_TYPE_OBJECT),
	MAKE_KEY_INFO(MD, KEY_TYPE_U32, nStart, NULL),
	MAKE_KEY_INFO(MD, KEY_TYPE_U32, bOutClient, NULL),
	MAKE_KEY_INFO(MD, KEY_TYPE_U32, bOutEMail, NULL),
	MAKE_ARRAY_INFO(MD, KEY_TYPE_ARRAY, testlist, NULL, 5, KEY_TYPE_U8),
	MAKE_KEY_INFO(MD, KEY_TYPE_OBJECT, testObj, rect_key),
	MAKE_KEY_INFO(MD, KEY_TYPE_STRING, name, NULL),
	MAKE_ARRAY_INFO(MD, KEY_TYPE_ARRAY, nameList, NULL, 2, KEY_TYPE_STRING),
	MAKE_KEY_INFO(MD, KEY_TYPE_STRING_PTR, nameptr, NULL),
	MAKE_ARRAY_INFO(MD, KEY_TYPE_ARRAY, nameptrList, NULL, 2, KEY_TYPE_STRING_PTR),
	MAKE_KEY_INFO(MD, KEY_TYPE_FLOAT, flt, NULL),
	MAKE_KEY_INFO(MD, KEY_TYPE_DOUBLE, db, NULL),
	MAKE_ARRAY_INFO(MD, KEY_TYPE_ARRAY, flta, NULL, 3, KEY_TYPE_FLOAT),
	MAKE_ARRAY_INFO(MD, KEY_TYPE_ARRAY, dba, NULL, 3, KEY_TYPE_DOUBLE),
	MAKE_END_INFO()
};

void cjson_direct_test(void)
{
	char *out;
	MD md = 
	{
		1,	//bEnable;	
		30,	//nSensitivity;
		40,	//nThreshold;
		4,	//nRectNum;	
		{
			{1,2,3,4},
			{2,3,4,5},
			{3,4,5,6},
			{4,5,6,7},
		},
		10,	//nDelay;
		10,	//nStart;
		1,	//bOutClient
		1,	//bOutEMail
		{1,2,3,4,5},
		{1,2,3,4},
		"I have a dream",
		{"nameList1", "nameList2"},
		"I have a dream",
		{"nameList1", "nameList2"},
		0.1,
		0.2,
		{2.1,3,2},
		{3.1,4,3}
	};
	MD m2;
	MD m3[3];
	MD m4[3];
	int cnt;

	out = cjson_object2string(md_key,(void *)&md);
	printf("%d: out: \n%s\n", __LINE__, out);
	cjson_string2object(md_key, out, (void *)&m2);
	cjson_string2object_array_free(md_key, &m2, 1);
	printf("%s: %d\n",__FILE__, __LINE__);
	free(out);
	printf("%s: %d\n",__FILE__, __LINE__);
	out = cjson_object2string(md_key,(void *)&m2);
	printf("%d: out: \n%s\n", __LINE__, out);
	free(out);

	m3[0] = md;
	m3[1] = md;
	m3[2] = md;
	out = cjson_object_array2string(md_key,m3,3);
	printf("array out: \n%s\n", out);

	cjson_string2object_array(md_key,out,m4,3,&cnt);
	free(out);
	out = cjson_object_array2string(md_key,m4,3);
	printf("array out: \n%s\n", out);
	cjson_string2object_array_free(md_key, m4, cnt);
	free(out);
}

