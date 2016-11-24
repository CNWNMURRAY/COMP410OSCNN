nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding                        #using the free standing version of C which means there is no standard library on the code I give it.
ld -m elf_i386 -T link.ld -o comp410OS/boot/kernel.bin kasm.o kc.o 
qemu-system-i386 -kernel comp410OS/boot/kernel.bin
#grub-mkrescue -o comp410OS.iso include/

read a


