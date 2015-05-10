#include <stdio.h>

void *p = printf;

asm(".globl _ac_test\n\t"
    "_ac_test:\n\t"
    "jmp *_p\n\t"
    ".section .drectve\n\t"
    ".ascii \" -export:\\\"ac_test\\\"\"\n\t"
    ".section .text\n\t");
