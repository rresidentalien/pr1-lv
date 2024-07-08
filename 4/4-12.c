#include <stdio.h>

int main() {
    int n, i;
    int broj = 0;
    float zbroj = 0;
    float sredina;
    do {
        scanf("%d", &n);
    }while (n <= 2 || n > 12);

    float polje[n];
    for (i=0; i<n; ++i) {
        scanf("%f", &polje[i]);
    }

    for (i=0; i<n; ++i) {
        if (polje[i] > 0) {
            zbroj += polje[i];
            ++broj;
        }
    }

    if (broj > 0) sredina = zbroj / broj;
    else sredina = 0;

    for (i=0; i<n; ++i) {
        if (polje[i] < sredina) {
            polje[i] = sredina;
        }
    }

    printf("Novo polje: \n");
    for (i=0; i<n; ++i) {
        printf("%.2f ", polje[i]);
    }

    return 0;
}