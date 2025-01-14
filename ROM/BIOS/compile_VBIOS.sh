#!/bin/bash

echo "COMPILING FOR INCLUSION IN THE BIOS"

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
export PATH=$PATH:$DIR/../../tools/fpga-binutils/mingw32/bin/

  ARCH="riscv64"

echo "using $ARCH"

# Following based on FemtoRV compile scripts https://github.com/BrunoLevy/learn-fpga/tree/master/FemtoRV

$ARCH-elf-gcc -fwhole-program -ffunction-sections -fdata-sections -fno-unroll-loops -Os -fno-builtin -fno-pic -march=rv32imafc_zba_zbb_zbc_zbs_zbkb_zbkx_zifencei -mabi=ilp32f -mshorten-memrefs -mrelax -c -o build/code.o c/VBIOS.c
$ARCH-elf-gcc -Os -fno-pic -march=rv32imafc_zba_zbb_zbc_zbs_zbkb -mabi=ilp32f -c -o build/crt0.o crt0.c
$ARCH-elf-ld -m elf32lriscv -b elf32-littleriscv -Tconfig_c.ld -o build/code.elf build/code.o /usr/lib/gcc/riscv64-elf/12.1.0/rv32imafc/ilp32f/libgcc.a
$ARCH-elf-objcopy -O binary build/code.elf ../VBIOS.bin

