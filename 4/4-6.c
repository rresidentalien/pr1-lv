#include <stdio.h>
int main() {
    int q, i;
    do {
        scanf("%d", &q);
    }while (q <= 5 || q > 12);

    float polje[q];
    for (i = 0; i < q; ++i) {
        scanf("%f", &polje[i]);
    }

    for (i=0; i < q; ++i) {
        if (i%2 == 0) {
            polje[i] /= 10;
        }
        else {
            polje[i]/= -10;
        }
    }

    for (i = 0; i < q; ++i) {
        printf("%.2f ", polje[i]);
    }

    return 0;
}