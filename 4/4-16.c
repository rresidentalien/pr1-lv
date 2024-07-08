#include <stdio.h>

int main() {
    int polje[10];
    int prosti[10];
    int i, j;
    int brojProstih = 0;

    for (i = 0; i < 10; ++i) {
        scanf("%d", &polje[i]);
    }

    for (i = 0; i < 10; ++i) {
        if (polje[i] <= 1) {
            prosti[i] = 0;
            continue;
        }
        prosti[i] = 1;
        for (j = 2; j <= polje[i] / 2; ++j) {
            if (polje[i] % j == 0) {
                prosti[i] = 0;
                break;
            }
        }
        if (prosti[i] == 1) {
            brojProstih++;
        }
    }

    printf("U polju ima %d prostih brojeva: ", brojProstih);
    for (i = 0; i < 10; ++i) {
        if (prosti[i] == 1) {
            printf("%d ", polje[i]);
        }
    }

    return 0;
}