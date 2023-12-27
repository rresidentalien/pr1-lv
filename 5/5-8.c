/*Omogu´citi korisniku unos jednog stringa od maksimalno 120 znakova. Odrediti i
na ekran ispisati koliki postotak znakova ˇcine mala, a koliki velika slova.*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje[120];
    int i, mala = 0, velika = 0, ukupnoSlova;
    float malaPostotak, velikaPostotak;

    printf("Unesi polje: ");
    fgets(polje, 120, stdin);

    for (i = 0; i < strlen(polje); ++i) {
        if (polje[i] >= 'A' && polje[i] <= 'Z') {
            ++velika;
        }
        else if (polje[i] >= 'a' && polje[i] <= 'z') {
            ++mala;
        }
    }

    ukupnoSlova = velika + mala;
    velikaPostotak = (float)velika/(float)ukupnoSlova*100;
    malaPostotak = (float)mala/(float)ukupnoSlova*100;
    printf("Postotak velikih slova je %.2f%%, a postotak malih slova je %.2f%%!", velikaPostotak, malaPostotak);

    return 0;
}