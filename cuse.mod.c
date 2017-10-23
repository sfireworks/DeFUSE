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
	{ 0x9b71540f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9a52276c, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x318ac0bd, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xa0848f74, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x29aaacdc, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x33edcfd7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xa705e66, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d8124b9, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0xdcbe7a52, __VMLINUX_SYMBOL_STR(fuse_dev_free) },
	{ 0x35c89f08, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0x1bd97787, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x44ecf45, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x313fbb0a, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0x9d428246, __VMLINUX_SYMBOL_STR(fuse_dev_alloc) },
	{ 0xbb0acd19, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x742d9b84, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x68e2f8ee, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xe1b1ccf2, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x775c8554, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xb5ea31d9, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc3f5028a, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xbb5c65ec, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x8af0e8ab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x978568c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x98f456aa, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x67b1e256, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x4ee30cf8, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x3f4386c5, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0x30a81beb, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0xef95af7b, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0x4f8869d9, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x197af149, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x6850110b, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xbd66bd8e, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x2a0323a8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x54f36866, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf1e6ed4, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "B86A325E657933BDC0A9B8D");
