# modfied-FUSE-kernel
Modified FUSE kernel module to read and write data in kernel, while the user space functions works the same way.  
Thie version of FUSE kernel is used with the example passthrough in libfuse. I have added a string to represent the file data path in kenel. And once the string is transfered to kernel, the struct file * will be constructed and stored in struct fuse_file. Then the read_iter and write_iter can do their job in the kernel without forwarding request to user space. 

## Build Environment
First you need to compile a Linux kernel version 4.8.5, before your compilation, you should remove the FUSE module in the config file;

Second, you can download the code here and compile them to the fuse.ko and cuse.ko module;

Last, install these two module and then you can run your own FUSE file system with improved performance.
