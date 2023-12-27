#include <stdio.h>
int main() {
    const int a = 1000;
    const float b = 10.5;
    const int c = 0x2F;
    const char d = 'A';

    printf("a = %d\n", sizeof(a));
    printf("b = %d\n", sizeof(b));
    printf("c = %d\n", sizeof(c));
    printf("d = %d\n", sizeof(d));
}