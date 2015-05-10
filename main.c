#include <stdio.h>

// ac_test should act as a proxy for printf
int ac_test(const char *__format, ...);

int main(int argc, char **argv) {
  ac_test("Hello World!\n");
  return 0;
}
