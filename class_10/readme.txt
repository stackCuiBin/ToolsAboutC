1，编译报错
Error: unsupported instruction `mov'

问题原因：
在64位系统下去编译32位的目标文件，这样是非法的。

解决方案：
用”-m32”强制用32位ABI去编译，即可编译通过。

$gcc -fno-builtin -m32 -o test.o -c test.c


2，链接报错
ld: i386 architecture of input file `TinyHelloWorld.o' is incompatible with i386:x86-64 output

问题原因：
输入目标文件`test.o’是32位系统的，然而我们的平台是64位的（默认链接脚本位于/usr/lib/ldscripts下，x86_64平台默认链接64位可执行文件用的是elf_x86_64.x，链接32位可执行文件用的是elf32_x86_64.x），如果直接ld肯定不匹配，所以需要指定链接脚本与输入目标文件对应的。

解决方案：
链接的时候加上“-m elf_i386”，因为输入目标文件为i386平台。

$ld -static -m elf_i386 -T test.lds -o test.out test.o

