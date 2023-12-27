#include <stdio.h>
int main() {
    int m, i, j, x;

    do{
        printf("Upisi m: ");
        scanf("%d", &m);
    } while (m < 3 || m >= 9);

    int polje[m][m];

    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%d", &polje[i][j]);
        }
    }

    do {
        printf("Upisi x: ");
        scanf("%d", &x);
    } while (x <= 0 || x > 1);

    for (i = 0; i < m; ++i) {
        polje[i][m - i - 1] *= x;
        polje[i][i] = polje[i][m - i - 1];
    }

    printf("Nova matrica:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) {
            printf("%d ", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    

