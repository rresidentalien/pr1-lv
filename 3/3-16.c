#include <stdio.h>

int main() {
    int n, i, j, prost;
    do {
        printf("Upisi broj veci od 100: ");
        scanf("%d", &n);
    }while (n <= 100);

    printf("Prosti brojevi u ovom intervalu: ");

    for (i=2; i<=n; ++i) {
        prost = 1;
        for (j=2; j<=i/2; ++j) {
            if (i % j == 0) {
                prost = 0;
                break;
            }
        }
        if (prost==1) {
            printf("%d ", i);
        }
    }

    return 0;
}