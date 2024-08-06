#include <linux/module.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/uaccess.h>
#include <linux/device.h>

#define  BUFFER_SIZE 1024 
#define DRIVER_NAME "LULUDRIVER"
char buffer[BUFFER_SIZE];
dev_t devID;
struct class * LULUCLASS ;
struct device * LULUdevice ;
struct cdev LULUcdev;

// prototypes
ssize_t luluread(struct file *files, char __user *buff, size_t size, loff_t *loff);
ssize_t luluwrite(struct file *files, const char __user *buff, size_t size, loff_t *loff);
int luluopen (struct inode * inode , struct file *filep);
int luluclose (struct inode * inode , struct file *filep);

// file operators struct
struct file_operations LULUfops = {
    .owner = THIS_MODULE ,
    .read = luluread ,
    .write = luluwrite ,
    .release = luluclose ,
    .open = luluopen ,
};
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
// open operator function implementations
int luluopen (struct inode * inode , struct file *filep){
    
    printk("hello lulu from open \n");
    return 0 ;

}
// close operator function implementations
int luluclose (struct inode * inode , struct file *filep){
    printk("hello lulu from close \n");
    return 0 ;
}
// module init function 
static int __init dev_init(void)
{   
    // Allocate ID to device 
    if(alloc_chrdev_region(&devID , 0,1 ,DRIVER_NAME) < 0){
        printk("device couldn't be allocated ya lulu\n");
        return -1 ;
    }
    else{
        
        printk("Major %d , Minaor %d\n" , MAJOR(devID) , MINOR(devID));
    }
    // create directory in /sys/class & check it created
    // THIS_MODULE  is a macro provided by the kernel that points to the module object for the current module. It is used to track information about the module, such as its usage count, initialization, and cleanup functions.
    LULUCLASS = class_create(THIS_MODULE,"LULUCLASS");
    if (IS_ERR(LULUCLASS) )
    {
        printk("directory couldn't be created ya lulu !\n");
    }

   //create entry under /dev -> mapped under /sys/my_class
    LULUdevice = device_create(LULUCLASS , NULL , devID ,  NULL , "dev");
    if (IS_ERR(LULUdevice )) {
    printk("device couldn't be created ya lulu !\n");
    }

    //register device file in VFS 
      cdev_init(&LULUcdev , &LULUfops);
      cdev_add(&LULUcdev , devID , 1);


    // indicate where am i 
	printk("Hello lulu !\n");
	return 0;
}

// module exit function
static void __exit dev_exit(void)
{
    //delete device 
    device_destroy(LULUCLASS, devID);
    // remove directory 
    class_destroy(LULUCLASS);
    // Deallocate ID to device 
    unregister_chrdev_region(devID,1);


    // indicate where am i 
	printk("bye bye lulu\n");
}

module_init(dev_init);
module_exit(dev_exit);
// because kernel care 
MODULE_LICENSE("GPL"); 
MODULE_AUTHOR("LULU");