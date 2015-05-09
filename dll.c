#include <stdio.h>

void *p = printf;

// based on stuff I found in the wine configure.ac
// https://github.com/wine-mirror/wine/blob/master/configure.ac#L1979

asm(".globl _ac_test\n\t"
    ".def _ac_test; .scl 2; .type 32; .endef\n\t"
    "_ac_test: .cfi_startproc\n\t"
    "jmp *_p\n\t"
    ".cfi_endproc\n\t");

// this doesn't help it:
// extern void ac_test();
