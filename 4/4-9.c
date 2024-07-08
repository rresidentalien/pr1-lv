#include <stdio.h>

int main() {
    int m, i, j;
    printf("Unesi dimenzije matrice: ");
    do {
        scanf("%d", &m);
    }while (m <= 3 || m >= 13);

    float polje[m][m];

    for (i=0; i<m; ++i) {
        for (j=0; j<m; ++j) {
            scanf("%f", &polje[i][j]);
        }
    }

    printf("Elementi ispod sporedne dijagonale i iznad glavne dijagonale veci od 0: ");
    for (i=0; i<m; ++i) {
        for (j=0; j<m; ++j) {
            if (i + j > m - 1 && i - j < 0 && polje[i][j] > 0) {
                printf("%.2f ", polje[i][j]);
            }
        }
    }

    return 0;
}