
PROJECT(httpclient)


ADD_EXECUTABLE(httpclient httpclient)

TARGET_LINK_LIBRARIES(httpclient
		grpc
		cJSON
		curl
		m
		)

INSTALL (TARGETS httpclient
         RUNTIME DESTINATION ./)

