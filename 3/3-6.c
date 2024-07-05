#include <stdio.h>

int main() {
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);

    int manji;
    if (a < b) {
        manji = a;
    }
    else {
        manji = b;
    }
    if (c < manji) {
        manji = c;
    }

    //manji = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    if (manji != a) printf("%x ", a - manji);
    if (manji != b) printf("%x ", b - manji);
    if (manji != c) printf("%x", c - manji);

    return 0;
}