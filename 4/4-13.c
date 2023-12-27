#include <stdio.h>
int main() {
    int m, n, i, j, zbroj = 0;
    float sredina;
    do {
        scanf("%d", &m);
    }while (m < 2 || m >= 12);
    do {
        scanf("%d", &n);
    }while (n <= 4 || n > 10);

    int polje[m][n];

    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &polje[i][j]);
        }
    }

    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            zbroj += polje[i][j];
        }
        sredina = (float)zbroj / n;
        printf("\nAritmeticka sredina reda %d: %.2f\n", i + 1, sredina);

        zbroj = 0;
    }

    return 0;
}