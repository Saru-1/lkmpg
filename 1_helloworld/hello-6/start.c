/*
 * start.c - Illustration of multi field modules
 */
#include<linux/kernel.h>/*for pr_info()*/
#include<linux/module.h>/*Needed by all modules*/

int init_module(void)
{
	pr_info("Hello,world-this is the kernel speaking\n");
	return 0;
}

MODULE_LICENSE("GPL");

