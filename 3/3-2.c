#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);

    if (n >= 5 && n <= 25) {
        for (i = 0; i < n; ++i) {
            printf("*");
        }
    }
    return 0;
}