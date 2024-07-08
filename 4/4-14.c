#include <stdio.h>

int main() {
    int m, i, j;
    float suma = 0;
    int brojac = 0;

    do {
        scanf("%d", &m);
    } while (m <= 3 || m >= 16 || m % 2 == 0);

    float polje[m][m];
    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%f", &polje[i][j]);
        }
    }

    int sredisnji = m / 2;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) {
            if (i != sredisnji && j != sredisnji) {
                suma += polje[i][j];
                ++brojac;
            }
        }
    }

    float sredina = suma / brojac;
    polje[sredisnji][sredisnji] = sredina;

    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) {
            printf("%.2f ", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}