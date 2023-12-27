#include <stdio.h>
#include <math.h>
int main() {
    int x, a;

    printf("unesi x: ");
    scanf("%d", &x);
    printf("\nunesi a: ");
    scanf("%d", &a);

    a = abs(a);

    if (x<a && x>-a) {
        printf("1");
    }
    else {
        printf("0");
    }
}