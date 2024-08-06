#include <linux/module.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>


static int __init hello_init(void)
{
	printk("Hello lulu !\n");

	return 0;
}

static void __exit hello_exit(void)
{
	printk("bye bye lulu\n");
}

module_init(hello_init);
module_exit(hello_exit);
// because kernel care 
MODULE_LICENSE("GPL");