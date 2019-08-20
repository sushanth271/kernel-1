#include <linux/init.h>
#include <linux/module.h>

int simple_kernel_entry(void)
{
	printk(KERN_ALERT "Inside %s function \n", __FUNCTION__);
	return 0;
}

void simple_kernel_exit(void)
{
	printk(KERN_ALERT "Inside %s function \n", __FUNCTION__);
}

module_init(simple_kernel_entry);
module_exit(simple_kernel_exit);

