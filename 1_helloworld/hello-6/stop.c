/*
 * stop.c -Illustration of multi filed modules
 */
#include<linux/kernel.h>/*For pr_info()*/
#include<linux/module.h>/*Required by every module*/

void cleanup_module(void)
{
	pr_info("Short is the life of a kernel module\n");
}
 MODULE_LICENSE("GPL");

