/*
 * hello-4.c Licensing and module Documentation
 */
#include<linux/init.h>/*Needed forthe macros*/
#include<linux/kernel.h>/*Needed for pr_info()*/
#include<linux/module.h>/*Needed by all the modules*/

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SARATH");
MODULE_DESCRIPTION("A sample driver");

static int __init init_hello_4(void)
{
	pr_info("Hello World 4\n");
	return 0;
}
static void __exit cleanup_hello_4(void)
{
	pr_info("Goodbye, World 4\n");
}
module_init(init_hello_4);
module_exit(cleanup_hello_4);
