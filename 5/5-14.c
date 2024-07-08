/*Omogu´citi korisniku unos jednog stringa od maksimalno 80 znakova. Potom,
dodatno mu omogu´citi unos jednog znaka. Zamijeniti tim znakom sve znakove
u stringu ˇcija je ASCII vrijednost manja od aritmetiˇcke sredine svih znakova. Na
kraju, na ekran ispisati izmijenjeni string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje[80];
    char znak;
    int i, broj = 0, duljina, sredina;

    printf("Unesi polje znakova: ");
    scanf("%80[^\n]", polje);
    printf("Unesi znak: ");
    scanf(" %c", &znak);

    duljina = strlen(polje);

    for (i=0; i < duljina; ++i) {
        broj += polje[i];
    }

    sredina = broj / duljina;

    for (i=0; i<strlen(polje); ++i) {
        if (polje[i] < sredina) {
            polje[i] = znak;
        }
    }

    printf("Novo polje: %s", polje);
}