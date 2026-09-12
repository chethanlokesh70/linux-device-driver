#include <linux/module.h>
#include <linux/init.h>

MODULE_AUTHOR("Chethan");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Module param");

static int states = 1;
module_param(states, int, 0644);
static int __init parammodule_init(void){
	for(int i=0; i<states; i++){
		printk("Moduel param: loaded the module");
	}
	return 0;
}

static void __exit parammodule_exit(void){
	printk("Module param: module existed");
}

module_init(parammodule_init);
module_exit(parammodule_exit);
