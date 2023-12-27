/*Deklarirati polje realnih brojeva od 120 elemenata. Popuniti polje 
pseudo-sluˇcuajnim brojevima iz [−100, 10] \ [−50, 0] (vrijednosti iz [−50, 0] 
nisu dozvoljene). Ispisati popunjeno polje na ekran. Dodatno, stvoriti 
pseudo-sluˇcajan broj iz [−25, −1] ⊂ R
te svaki element polja postaviti na njega s vjerojatnosti od 38.5%.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int polje[120];
    int i, broj;

    printf("Polje: ");
    for (i=0; i<120; ++i) {
        do{
            polje[i] = (rand() % 111 ) - 100;
        }while (polje[i] > -51 && polje[i] < 1);
        printf("%d ", polje[i]);
    }

    broj = (rand() % 25) -26;
    printf("\nBroj: %d", broj);

    printf("\nNovo polje: ");
    for (i=0; i<120; ++i) {
        if (rand() % 1000 < 385) {
            polje[i] = broj;
        }
        printf("%d ", polje[i]);
    }

    return 0;
}