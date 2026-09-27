#include <linux/module.h>
#include <linux/init.h>




static struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = my_open,
	.release = my_release,
	.read = my_read,
	.write = my_write,
	.unlocked_ioctl = my_ioctl,
};

// -------------------------Module Init/Exit-------------------------------

static int __init my_init(void){
	pr_info("mychardev loaded\n");
	return 0;
}

static void __exit my_exit(void){
	pr_info("mychardev unloaded\n");
}

MODULE_AUTHOR("Chethan");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Day 15 to day 20 practicals");

module_init(my_init);
module_exit(my_exit);


