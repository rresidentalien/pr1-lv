#include <stdio.h>

int main() {
    int polje[20];
    int i;
    
    for (i = 0; i < 20; ++i) {
        printf("Unesi %d. element: ", i + 1);
        do {
            scanf("%d", &polje[i]);
        } while (polje[i] < 0 || polje[i] > 9);
    }

    int brojac[10] = {0};

    for (i = 0; i < 20; ++i) {
        ++brojac[polje[i]];
    }

    for (i = 0; i < 10; ++i) {
        printf("Vrijednost %d se pojavila %d puta.\n", i, brojac[i]);
    }

    return 0;
}