#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#ifdef CONFIG_MYFUNC
#include "myfunc.h"
#endif

int main(void)
{
	int a = 3, b = 4;
	while(1){
		printk("Hello World!\n\r");
		printk("a is %d, b is %d, the sum is %d\n\r", a, b, sum(a,b));
		k_msleep(1000);
	}
}
