rm -rf `ls|grep -v "set.sh"`
sleep 1
cmake .. -DCROSS_COMPILE=arm-hisiv100nptl-linux-
