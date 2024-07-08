/*Deklarirati cjelobrojno polje od 40 elemenata. Popuniti polje medusobno razliˇcitim
pseudo-sluˇcajnim brojevima iz [−30, 70]. Ispisati popunjeno polje na ekran.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));

    int polje[40], i, j;

    for (i=0; i<40; ++i) {
        polje[i] = (rand() % 101) - 30;
        for (j=0; j<i; ++j) {
            if (polje[i]==polje[j]) {
                --i;
                break;
            }
        }
    }

    printf("Polje: ");
    for (i=0; i<40; ++i) {
        printf("%d ", polje[i]);
    }

    return 0;
}