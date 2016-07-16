#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x326c498d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf0387257, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x911d679a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xac645ec0, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x7c9c3a6c, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xa827ae45, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xa0abd719, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x8329e6f0, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5baac484, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xf5a57f1a, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4fe6cc2f, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6097597b, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x8958f2a6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xf6fbb640, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xc3fa6a59, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x9c3dd8f, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x5363e290, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x16be6c54, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xd68a2223, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x33bad8a9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x738803e6, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x5b8f537d, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c3da471, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xd3d86578, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x49b18c6e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x867911a1, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x955868e0, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xec57edf2, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x214e9397, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xe44b3939, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x39b8aa26, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x99016892, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x1168f13, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xa1a5b38a, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1AD202B1FECB895F7BE8E46");
