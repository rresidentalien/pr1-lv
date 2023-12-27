/*Omogu´citi korisniku unos jednog stringa od maksimalno 80 znakova. Potom,
dodatno mu omogu´citi unos jednog znaka. Zamijeniti tim znakom sve znakove
u stringu ˇcija je ASCII vrijednost manja od aritmetiˇcke sredine svih znakova. Na
kraju, na ekran ispisati izmijenjeni string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje[80];
    char znak;
    int i, broj=0, djelitelj, sredina;

    printf("Unesi polje znakova: ");
    fgets(polje, 80, stdin);
    printf("Unesi znak: ");
    scanf("%s", &znak);

    djelitelj = strlen(polje);

    for (i=0; i<strlen(polje); ++i) {
        broj = broj + polje[i];
    }

    sredina = broj / djelitelj;

    for (i=0; i<strlen(polje); ++i) {
        if (polje[i] < sredina) {
            polje[i] = sredina;
        }
    }

    printf("Novo polje: %c", polje);
}