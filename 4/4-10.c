#include <stdio.h>
int main() {
    int n, i, najmanji, najveci, temp;

    do {
        scanf("%d", &n);
    }while (n <= 3 || n >= 16);

    int polje[n];
    for (i = 0; i < n; ++i) {
            scanf("%d", &polje[i]);
    }

    najveci = polje[0];
    najmanji = polje[0];

    for (i = 0; i < n; ++i) {
        if (polje[i] > najveci) {
            najveci = polje[i];
        }
        if (polje[i] < najmanji) {
            najmanji = polje[i];
        }

        if (polje[i] == najveci) {
            polje[i] = najmanji;
        } 
        else if (polje[i] == najmanji) {
            polje[i] = najveci;
        }
    }

    printf("Novo polje: \n");
    for (i = 0; i < n; ++i) {
        printf("%d ", polje[i]);
    }

    return 0;
}