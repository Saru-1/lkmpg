1.Command to compile dts overlay :<br>
	dtc -@ -I dts -O dtb -o testoverlay.dtbo testoverlay.dts<br>
2.make<br>
3.Load the device tree overlay using the command:<br>
	sudo dtoverlay testoverlay.dtbo<br>
4.Look into proc to check if the new device "my_device" is added<br>
	sudo ls /proc/device-tree/<br>
5.Check label and name:<br>
	sudo cat /proc/device-tree/my_device/label<br>
	sudo cat /proc/device-tree/my_device/name<br>
6.Load kernal module:<br>
	sudo insmod dt_probe.ko<br>
7.Check if its loadded:<br>
	sudo dmesg | tail<br>
8.Unload kernal module:<br>
	sudo rmmod dt_probe<br>
9.Check if its unloaded:<br>
	sudo dmesg | tail<br>
	

