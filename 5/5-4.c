/*Deklarirati cjelobrojno polje od 100 elemenata. Popuniti polje pseudo-sluˇcajnim
brojevima iz [−1010, 1010] koji su djeljivi sa ˇsest. Ispisati popunjeno polje na 
ekran.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int polje[100];
    int i;

    for (i=0; i<100; ++i) {
        do {
            polje[i] = (rand() % 2021) - 1010;
        }while (polje[i] % 6 != 0);
    }

    printf("Polje djeljivo sa sest: ");
    for (i=0; i<100; ++i) {
        printf("%d ", polje[i]);
    }

    return 0;
}