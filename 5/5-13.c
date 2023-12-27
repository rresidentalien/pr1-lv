/*Omogu´citi korisniku unos dva stringa od maksimalno 20 znakova. Spojiti ta dva
stringa u jedan novi string te ga potom ispisati na ekran. [Nije dozvoljeno koristiti
funkcije standardne biblioteke za ostvarivanje spajanja stringova.]*/
#include <stdio.h>

int main() {
    char polje1[20], polje2[20], polje12[40];
    int i, j;

    printf("Unesite prvo polje: ");
    fgets(polje1, 20, stdin);

    printf("Unesite drugo polje: ");
    fgets(polje2, 20, stdin);

    for (i = 0; polje1[i] != 10; ++i) {
        polje12[i] = polje1[i];
    }

    for (j = 0; polje2[j] != 10; ++j) {
        polje12[i + j] = polje2[j];
    }

    printf("Spojeni string: %s", polje12);

    return 0;
}