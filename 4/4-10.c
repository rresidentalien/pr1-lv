#include <stdio.h>

int main() {
    int n, i, indexNajmanji, indexNajveci;
    float najmanji, najveci, temp;

    do {
        scanf("%d", &n);
    }while (n <= 3 || n >= 13);

    float polje[n];
    for (i = 0; i < n; ++i) {
            scanf("%f", &polje[i]);
    }

    najveci = polje[0];
    najmanji = polje[0];
    indexNajveci = 0;
    indexNajmanji = 0;

    for (i = 0; i < n; ++i) {
        if (polje[i] > najveci) {
            najveci = polje[i];
            indexNajveci = i;
        }
        if (polje[i] < najmanji) {
            najmanji = polje[i];
            indexNajmanji = i;
        }
    }

    temp = polje[indexNajveci];
    polje[indexNajveci] = polje[indexNajmanji];
    polje[indexNajmanji] = temp;

    printf("Novo polje: \n");
    for (i = 0; i < n; ++i) {
        printf("%.2f ", polje[i]);
    }

    return 0;
}