#include <stdio.h>
int main() {
    int x, g, t, d;

    printf("unesi broj dana: ");
    scanf("%d", &x);

    g = x/365;
    t = (x%365)/7;
    d = x - (g*365 + t*7);

    printf("\n%d dana je jednako %d godina, %d tjedana i %d dana.", x, g, t, d);

    return 0;
}