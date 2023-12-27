/*Omogu´citi korisniku unos jednog stringa od maksimalno 80 znakova. Prona´ci i
na ekran ispisati koliko se puta u njemu pojavljuje slog ”ma”.*/

#include <stdio.h>

int main() {
    char polje[80];
    int i, ucestalost = 0;

    printf("Unesi polje: ");
    fgets(polje, 80, stdin);

    for (i = 0; i < 79; ++i) {
        if (polje[i] == 'm' && polje[i + 1] == 'a') {
            ++ucestalost;
        }
    }

    printf("Ucestalost 'ma': %d", ucestalost);

    return 0;
}