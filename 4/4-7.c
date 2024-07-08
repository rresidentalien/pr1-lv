#include <stdio.h>

int main() {
    int m, i, j;
    float najmanji, najveci;

    do {
        scanf("%d", &m);
    }while (m <= 3 || m >= 16);

    float polje[m][m];
    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%f", &polje[i][j]);
        }
    }

    najmanji = polje[0][m - 2];
    najveci = polje[1][0];

    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) {
            if (i + j < m - 1 && polje[i][j] < najmanji) {
                najmanji = polje[i][j];
            }
            if (i - j > 0 && polje[i][j] > najveci) {
                najveci = polje[i][j];
            }
        }
    }

    printf("Najmanji broj iznad sporedne dijagonale: %f", najmanji);
    printf("\nNajveci broj ispod glavne dijagonale: %f", najveci);

    return 0;
}