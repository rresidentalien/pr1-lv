/*Omogu´citi korisniku unos stringa od maksimalno 180 znakova. Provjeriti nalazi
li se negdje u stringu znak dvotoˇcke (:), te ako se on pronade potrebno je sve iza tog znaka zapisati u novi string te ga ispisati na ekran. 
Primjerice, za string ”Programiranje 1: Laboratorijska vjeˇzba 5” novi string bi bio ” Laboratorijska vjeˇzba
5”. Ukoliko u stringu nema dvotoˇcke ispisati samo prikladnu poruku na ekran*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje[180];
    printf("Unesite string: ");
    fgets(polje, sizeof(polje), stdin);

    char *pozicija = strchr(polje, ':');

    if (pozicija != NULL) {
        printf("String nakon dvotocke: %s\n", pozicija + 1);
    } else {
        printf("U stringu nema dvotocke.\n");
    }

    return 0;
}