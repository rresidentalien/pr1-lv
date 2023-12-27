#include <stdio.h>
int main() {
    int n, i, zbroj = 0;
    float sredina;
    do {
        scanf("%d", &n);
    }while (n <= 2 || n > 12);

    int polje[n];
    for (i=0; i<n; ++i) {
        scanf("%d", &polje[i]);
    }

    for (i=0; i<n; ++i) {
        if (polje[i] > 0) {
            zbroj += polje[i];
        }
    }

    sredina = (float)zbroj / n;

    for (i=0; i<n; ++i) {
        if (polje[i] < sredina) {
            polje[i] = sredina;
        }
    }

    printf("Novo polje: \n");
    for (i=0; i<n; ++i) {
        printf("%d ", polje[i]);
    }

    return 0;
}