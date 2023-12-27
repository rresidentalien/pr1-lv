#include <stdio.h>
int main() {
    int i, j;
    int poljeA[3][4];
    int poljeB[3][4];

    printf("Unesi matricu A: ");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            scanf("%d", &poljeA[i][j]);
        }
    }

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            poljeB[i][j] = poljeA[i][3 - j];
        }
    }

    printf("\nMatrica B: ");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%d ", poljeB[i][j]);
        }
        printf("\n");
    }

    return 0;
}