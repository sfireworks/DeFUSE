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
	{ 0x6a5fa363, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0x88009cd8, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x44ecf45, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xe9ea5c27, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x4d6c689, __VMLINUX_SYMBOL_STR(set_wb_congested) },
	{ 0x857c05bf, __VMLINUX_SYMBOL_STR(bdi_set_max_ratio) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xc2f9c045, __VMLINUX_SYMBOL_STR(timespec_to_jiffies) },
	{ 0x978568c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc4bbea5e, __VMLINUX_SYMBOL_STR(replace_page_cache_page) },
	{ 0xca986774, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x5419dd76, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0xe166c885, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x24bca875, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x9a708c7c, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x3bc530f2, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0xdd309455, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0xddbc9ea4, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xb5e0b866, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0xe76fc09d, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x807174bb, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x529abc9c, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x71f919ef, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x62c9c6a7, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x35ea20df, __VMLINUX_SYMBOL_STR(dec_zone_page_state) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x6fd37a2a, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xbaf0854a, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x26b3c701, __VMLINUX_SYMBOL_STR(__wake_up_sync) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x7235e927, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x2170bc10, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0xa3c1ce07, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x8aff696c, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xb779afc0, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x40856da0, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xb1ba7658, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0x89de54cd, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0x1621b7dc, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xf60349db, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x500cdab4, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xec804db2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xdd9099ee, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x19065f85, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf7ce08eb, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x35714b, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2) },
	{ 0xdc13456c, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0xc429e42c, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x2a0323a8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1df0bcf3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x5a03c5aa, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xc3ff3552, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd1d07041, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x1dacbb0a, __VMLINUX_SYMBOL_STR(flock_lock_inode_wait) },
	{ 0xf67d3beb, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x4e9f7070, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6ec9aa73, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x6a265172, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x82a2962e, __VMLINUX_SYMBOL_STR(wb_writeout_inc) },
	{ 0x6e50e033, __VMLINUX_SYMBOL_STR(blk_get_backing_dev_info) },
	{ 0xc34802c2, __VMLINUX_SYMBOL_STR(lru_cache_add_file) },
	{ 0x9ffbfad5, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x57016a65, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xabd2bffe, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xd715c699, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xec65aec6, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x57e0aacc, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfb00334, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0x33edcfd7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x6d30dc0f, __VMLINUX_SYMBOL_STR(sysfs_remove_mount_point) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb3e64537, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xdfc10192, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x3276d5f, __VMLINUX_SYMBOL_STR(finish_no_open) },
	{ 0x9f87e471, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xc2fe01da, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x77c425f4, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xcb6a0127, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x81212c73, __VMLINUX_SYMBOL_STR(iov_iter_get_pages) },
	{ 0x55e13f54, __VMLINUX_SYMBOL_STR(write_inode_now) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x96e117f2, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x4fcecefa, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x218bbdba, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0x15e10199, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x54f36866, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x154f4944, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xd5589093, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x5e17263c, __VMLINUX_SYMBOL_STR(write_cache_pages) },
	{ 0x91027a2d, __VMLINUX_SYMBOL_STR(free_page_put_link) },
	{ 0x2e5a0f88, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x615b4c40, __VMLINUX_SYMBOL_STR(__wake_up_locked) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x967a3b4c, __VMLINUX_SYMBOL_STR(inc_zone_page_state) },
	{ 0x605eaa0e, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x8ec1ea0a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe5d426cc, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x1a0f8f6f, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x84fc6fa3, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x27a4d9d, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0x2230922a, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0xbefaba96, __VMLINUX_SYMBOL_STR(nosteal_pipe_buf_ops) },
	{ 0x31e13c52, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x8a6af65c, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0x61d39ccc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x98f456aa, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x33b84f74, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0xe789ace, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x1afdb9c7, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x1394b221, __VMLINUX_SYMBOL_STR(bdi_register_dev) },
	{ 0xea5be12b, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0xbb5b753a, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0x39007ce9, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x6a998378, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe5ff5db, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x7932fa4f, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x1fa3186c, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xe5ac73ef, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x5727a6c1, __VMLINUX_SYMBOL_STR(shrink_dcache_parent) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x2e59fab2, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xc8bc139f, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x81fbeda1, __VMLINUX_SYMBOL_STR(clear_wb_congested) },
	{ 0x21762394, __VMLINUX_SYMBOL_STR(d_instantiate_no_diralias) },
	{ 0x8af0e8ab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xae4a98ab, __VMLINUX_SYMBOL_STR(read_cache_pages) },
	{ 0xde26ab40, __VMLINUX_SYMBOL_STR(simple_empty) },
	{ 0x9ebc7ef, __VMLINUX_SYMBOL_STR(sync_inode_metadata) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x2dcaf7b3, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5a60a33f, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x46860032, __VMLINUX_SYMBOL_STR(sysfs_create_mount_point) },
	{ 0xdac6b8d4, __VMLINUX_SYMBOL_STR(d_lookup) },
	{ 0x5bc52597, __VMLINUX_SYMBOL_STR(iov_iter_init) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x291d9300, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xdb2e25d5, __VMLINUX_SYMBOL_STR(I_BDEV) },
	{ 0xe4ca026b, __VMLINUX_SYMBOL_STR(blockdev_superblock) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x5726fc32, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x33e8a5b7, __VMLINUX_SYMBOL_STR(finish_open) },
	{ 0x8330bca9, __VMLINUX_SYMBOL_STR(posix_lock_file) },
	{ 0x1bf56b27, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xab62c5f4, __VMLINUX_SYMBOL_STR(truncate_pagecache_range) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x6985c76a, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x98b01d48, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x2a739430, __VMLINUX_SYMBOL_STR(param_set_uint) },
	{ 0xc238fefd, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x69e03cf3, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x6dd3d890, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x4a511e7f, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x9e7840ce, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xf54806d3, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xfb161310, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x630d90b3, __VMLINUX_SYMBOL_STR(__kernel_write) },
	{ 0x1785a474, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x4ba68eda, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xd19f85ca, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb7d003f7, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x2ed2b28c, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x58809cd4, __VMLINUX_SYMBOL_STR(iov_iter_single_seg_count) },
	{ 0x283db45d, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xc77d04bc, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x6af0317c, __VMLINUX_SYMBOL_STR(bdi_register) },
	{ 0xd4e380b4, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xcdb663, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x9680ffbd, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xde243176, __VMLINUX_SYMBOL_STR(pipe_unlock) },
	{ 0xba8ff4cf, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0xe649ec23, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xaccf17b8, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xa0848f74, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xefda8d99, __VMLINUX_SYMBOL_STR(abort_exclusive_wait) },
	{ 0x435a9b0, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x7812c028, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x34926639, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x971463e5, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x950c8700, __VMLINUX_SYMBOL_STR(pipe_lock) },
	{ 0xdca422d8, __VMLINUX_SYMBOL_STR(noop_backing_dev_info) },
	{ 0xde490d0c, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x5067cfa8, __VMLINUX_SYMBOL_STR(posix_test_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5FCF70E158088C3A15E8B2C");
