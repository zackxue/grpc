#THESE VAR should be setted like this:
#cmake -DCROSS_COMPILE=arm-linux-
#CROSS_COMPILE compiler prefix, such as "arm-linux-"



set(CMAKE_C_COMPILER ${CROSS_COMPILE}gcc)  
set(CMAKE_CXX_COMPILER ${CROSS_COMPILE}g++)  

cmake_minimum_required (VERSION 2.6)

SET(PROJECTNAME GRPC)

PROJECT (${PROJECTNAME})

SET(TOP_BINARY_DIR ${${PROJECTNAME}_BINARY_DIR})
SET(TOP_SOURCE_DIR ${${PROJECTNAME}_SOURCE_DIR})

MESSAGE(STATUS "This is config path "${CONFIG_PATH})
MESSAGE(STATUS "This is BINARY dir " ${TOP_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir "${TOP_SOURCE_DIR})
MESSAGE(STATUS "CROSS_COMPILE is "${CROSS_COMPILE})

#SET(CMAKE_INSTALL_PREFIX $ENV{HOME}/progs)
SET(CMAKE_INSTALL_PREFIX /progs)
add_definitions(-Wall -Wno-unused)
add_definitions(-g)
#add_definitions(-ffunction-sections -fdata-sections)

#ADD_SUBDIRECTORY(libs)

INCLUDE_DIRECTORIES(${TOP_SOURCE_DIR}/src)
INCLUDE_DIRECTORIES(${TOP_SOURCE_DIR}/src/generate)
INCLUDE_DIRECTORIES(${TOP_SOURCE_DIR}/cJSON)

if (NOT DEFINED CROSS_COMPILE)
	SET(CROSS_COMPILE x86)
endif()
SET(BOARD ${CROSS_COMPILE})

ADD_SUBDIRECTORY(cJSON)
ADD_SUBDIRECTORY(src)
#ADD_SUBDIRECTORY(test-httpclient)

LINK_DIRECTORIES(
					${TOP_BINARY_DIR}/
					)


ADD_EXECUTABLE(server server.c)
ADD_EXECUTABLE(client client.c)
ADD_EXECUTABLE(tcpclient tcpclient.c)


TARGET_LINK_LIBRARIES(server
#	-static
					grpc
					cJSON
					rt
					pthread
					stdc++
					resolv
					m
					)

TARGET_LINK_LIBRARIES(client
	-static
					grpc
					cJSON
					rt
					pthread
					stdc++
					resolv
					m
					)

TARGET_LINK_LIBRARIES(tcpclient
	-static
					grpc
					cJSON
					rt
					pthread
					stdc++
					resolv
					m
					)
