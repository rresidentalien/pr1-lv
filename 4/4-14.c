#include <stdio.h>
int main() {
    int m, n, i, j;

    do {
        scanf("%d", &m);
    }while (m >= 3 || m >= 16);
    do {
        scanf("%d", &n);
    }while (m % 2 == 0);

    int polje[m][n];
    for (i=0; i<m; ++i) {
        for (j=0; j<n; ++j) {
            scanf("%d", &polje[i][j]);
        }
    }

    int sredisnjiRed = m / 2;
    int sredisnjiStupac = n / 2;
    int suma = 0;
    int brojac = 0;

    for (i=0; i<m; ++i) {
        for (j=0; j<n; ++j) {
            if (i != sredisnjiRed || j != sredisnjiStupac) {
                suma += polje[i][j];
                ++brojac;
            }
        }
    }

    int sredina = suma / brojac;
    polje[sredisnjiRed][sredisnjiStupac] = sredina;

    for (i=0; i<m; ++i) {
        for (j=0; j<n; ++j) {
            printf("%d ", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}