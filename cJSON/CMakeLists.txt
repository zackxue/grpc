

#INCLUDE_DIRECTORIES(${IPCAM_SOURCE_DIR}/porting/include)
PROJECT(CJSONLIB)

SET(CJSONSRC 
				cJSON.c
				cJSON_Direct.c
	)

ADD_LIBRARY(cJSON STATIC ${CJSONSRC})

#ADD_EXECUTABLE(cjson 
#		test.c)

#TARGET_LINK_LIBRARIES(cjson
#		cJSON
#		m
#		)
		