#include <stdio.h>

int binarnaPretvorba(int dekadskiBroj) {
    int polje[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int i = 0, j = 0;

    while (dekadskiBroj != 0) {
        polje[i] = dekadskiBroj % 2;
        dekadskiBroj /= 2;
        ++i;
    }

    for (j=7; j>=0; --j) {
        printf("%d", polje[j]);
    }
}

int main() {
    int broj;
    do {
        printf("Unesi broj: ");
        scanf("%d", &broj);
    }while (broj > 128 || broj < 1);

    binarnaPretvorba(broj);
}