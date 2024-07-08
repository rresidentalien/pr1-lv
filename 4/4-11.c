#include <stdio.h>

int main() {
    int m, n, i, j;
    float suma, sredina;

    do {
        scanf("%d", &m);
    }while (m < 3 || m >= 13);
    do {
        scanf("%d", &n);
    }while (n < 2 || n >= 15);

    float polje[m][n];
    for (i=0; i<m; ++i) {
        for (j=0; j<n; ++j) {
            scanf("%f", &polje[i][j]);
        }
    }

    for (j=0; j<n; ++j) {
        suma = 0;
        for (i=0; i<m; ++i) {
            suma += polje[i][j];
        }
        sredina = (float)suma / m;
        printf("Aritmeticka sredina stupca %d: %.2f\n", j+1, sredina);
    }

    return 0;
}