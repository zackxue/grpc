#!/bin/sh

#find json/ -name \*.json |xargs ./gengrpc ipc
#	cp generate/* ../generate/ -rf
#exit

IPCJSON='
	json/account.json
	json/alarm.json
	json/audio.json
	json/connect.json
	json/devinfo.json
	json/ifconfig.json
	json/image.json
	json/log.json
	json/mdetect.json
	json/osd.json
	json/privacy.json
	json/ptz.json
	json/record.json
	json/storage.json
	json/stream.json
	'

./gengrpc ipc $IPCJSON
rm src_ipc/ -rf
mv generate/ src_ipc/

VDSJSON='
	json/account.json
	json/connect.json
	json/devinfo.json
	json/ifconfig.json
	json/screen.json
	json/vsourse.json
	'
./gengrpc vds $VDSJSON
rm src_vds/ -rf
mv generate/ src_vds/


VMSJSON='
	json/account.json
	json/alarm.json
	json/audio.json
	json/connect.json
	json/devinfo.json
	json/ifconfig.json
	json/image.json
	json/log.json
	json/mdetect.json
	json/osd.json
	json/privacy.json
	json/ptz.json
	json/record.json
	json/storage.json
	json/stream.json
	json/screen.json
	json/vsourse.json
	json/channel.json
	json/discovery.json
	json/storage_server.json
	json/stream_server.json
	'
./gengrpc vms $VMSJSON
rm src_vms/ -rf
mv generate/ src_vms/


#storage server json
STORAGESERVERJSON='
	json/account.json
	json/channel.json
	json/discovery.json
	json/storage_server.json
	json/stream_server.json
	'
./gengrpc storage_json $STORAGESERVERJSON
rm src_storage_server -rf
mv generate/ src_storage_server/

