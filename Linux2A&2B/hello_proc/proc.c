#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/seq_file.h>
#include <linux/proc_fs.h>

static int hello_proc_show(struct seq_file* m, void* v){
	seq_printf(m, "This is a test for proc file!\n");
	return 0;
}

static int hello_proc_open(struct inode* inode, struct file* file){
	return single_open(file, hello_proc_show, NULL);
};

static const struct file_operations hello_proc_fops = {
	.owner = THIS_MODULE,
	.open = hello_proc_open,
	.read = seq_read
};

static int __init hello_init(void){
	struct proc_dir_entry* entry;
	entry = proc_create("hello", 0, NULL, &hello_proc_fops);
	if (!entry){
		printk(KERN_INFO"Creating proc_read_entry failed!\n");
		return -1;
	} else {
		printk(KERN_INFO"Creating proc_read_entry finished!\n");
		return 0;
	}
}

static void __exit hello_exit(void){
	remove_proc_entry("hello", NULL);
	printk(KERN_INFO"Removing proc_read_entry finished!\n");
}

MODULE_LICENSE("GPL");

module_init(hello_init);
module_exit(hello_exit);
