#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

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

    

    return 0;
}