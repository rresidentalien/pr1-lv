/*Omogu´citi korisniku unos jednog stringa od maksimalno 110 znakova. Potom
zamijeniti svako malo slovo ekvivalentnim velikim slovom i obrnuto. Na kraju,
ispisati string na ekran. [Nije dozvoljeno koristiti funkcije standardne biblioteke za
ostvarivanje zamjene slova.]*/

#include <stdio.h>

int main() {
    char polje[111];
    int i = 0;

    printf("Unesi polje: ");
    fgets(polje, 111, stdin);

    while (polje[i] != '\0') {
        if (polje[i] >= 'a' && polje[i] <= 'z') {
            polje[i] = polje[i] - 32;
        } 
        else if (polje[i] >= 'A' && polje[i] <= 'Z') {
            polje[i] = polje[i] + 32;
        }
        ++i;
    }

    printf("Zamijenjeno polje: %s", polje);

    return 0;
}