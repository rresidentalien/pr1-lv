/*Omogu´citi korisniku unos jednog stringa od maksimalno 100 znakova. Potom,
prepisati ga u novi string, ali obrnuto. Ispisati oba stringa na ekran.*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje[100], polje2[100];
    int i;

    printf("Unesi polje:");
    fgets(polje, 100, stdin);

    printf("\nPolje: %s", polje);

    printf("\nNovo polje: ");
    for (i=0; i<strlen(polje); ++i) {
        polje2[i] = polje[strlen(polje)-i-1];
        printf("%c", polje2[i]);
    }

    return 0;
}