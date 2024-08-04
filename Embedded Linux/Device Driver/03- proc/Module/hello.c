#include <linux/module.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include<linux/proc_fs.h>


// prototypes
ssize_t luluread(struct file *files, char __user *buff, size_t size, loff_t *loff);
ssize_t luluwrite(struct file *files, const char __user *buff, size_t size, loff_t *loff);
// file operators struct
const struct proc_ops proc_file_operations =
{
.proc_read=luluread,
.proc_write=luluwrite

};
// create return 
struct proc_dir_entry *proc_dir;
 
// read operator function implementations 
ssize_t luluread(struct file *files, char __user *buff, size_t size, loff_t *loff)
{
    printk("hello lulu from read\n");
    return 0;

}
// write operator function implementations
ssize_t luluwrite(struct file *files, const char __user *buff, size_t size, loff_t *loff)
{
    printk("hello lulu from write\n");
    return 3;
}

// module init function 
static int __init hello_init(void)
{   
    // create file 
    proc_dir = proc_create("LULUfile", 0666, NULL , &proc_file_operations);
	printk("Hello lulu !\n");

	return 0;
}

// module exit function
static void __exit hello_exit(void)
{
    // remove file 
    proc_remove(proc_dir);
	printk("bye bye lulu\n");
}

module_init(hello_init);
module_exit(hello_exit);
// because kernel care 
MODULE_LICENSE("GPL"); 