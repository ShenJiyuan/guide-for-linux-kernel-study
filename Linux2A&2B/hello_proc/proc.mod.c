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
	{ 0x39863e02, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x5f709500, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5f75848e, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xdad4037b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xceb06154, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E30F462A45D0FAB0BEC12DB");
