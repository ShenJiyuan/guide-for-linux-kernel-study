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
	{ 0x865c676b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5f709500, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x5f75848e, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x829e4cf8, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xe55eaacc, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x3daa2ab2, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xa7fa6c7a, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6ffd3d57, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x37b4b767, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8e5bb2e8, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4c7e157c, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x74a436c4, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0xdbee606e, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DD5EDADDA3B2A95BF078D5F");
