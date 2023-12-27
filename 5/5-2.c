/*Deklarirati cjelobrojno polje od 50 elemenata. Popuniti polje pseudo-sluˇcuajnim
brojevima iz [−100, 100] i ga ispisati na ekran. Udvostruˇciti vrijednost svakog
elementa polja s vjerojatnosti od 22% te ga, potom, ponovno ispisati na ekran.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int polje[50];
    int i;

    printf("Originalno polje: ");
    for (i=0; i<50; ++i) {
        polje[i] = (rand() % 201) - 100;
        printf("%d ", polje[i]);
    }

    printf("\nNovo polje: ");
    for (i=0; i<50; ++i) {
        if (rand() % 100 < 22) {
            polje[i] *= 2;
        }
        printf("%d ", polje[i]);
    }

    return 0;
}