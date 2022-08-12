1.Command to compile dts overlay :
	dtc -@ -I dts -O dtb -o testoverlay.dtbo testoverlay.dts
2.make
3.Load the device tree overlay using the command:
	sudo dtoverlay testoverlay.dtbo
4.Look into proc to check if the new device "my_device" is added
	sudo ls /proc/device-tree/
5.Check label and name:
	sudo cat /proc/device-tree/my_device/label
	sudo cat /proc/device-tree/my_device/name
6.Load kernal module:
	sudo insmod dt_probe.ko
7.Check if its loadded:
	sudo dmesg | tail
8.Unload kernal module:
	sudo rmmod dt_probe
9.Check if its unloaded:
	sudo dmesg | tail
	

