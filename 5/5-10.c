/*Omogu´citi korisniku unos dva stringa od maksimalno 50 znakova. Ispisati na
ekran onaj string koji ima manje velikih slova. Ako oba imaju jedank broj velikih
slova, ispisati onaj s manje malih slova ili oba ukoliko su i u tom smislu jednaki.*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje1[50], polje2[50];
    int mala1=0, velika1=0, mala2=0, velika2=0;
    int i;

    printf("Unesi prvi string: ");
    scanf("%[^\n]", polje1);

    printf("Unesi drugi string:");
    scanf(" %[^\n]", polje2);

    for (i = 0; i < strlen(polje1); ++i) {
        if (polje1[i] >= 'a' && polje1[i] <= 'z') {
            ++mala1;
        }
        else if (polje1[i] >= 'A' && polje1[i] <= 'Z') {
            ++velika1;
        }
    }
    for (i = 0; i < strlen(polje2); ++i) {
        if (polje2[i] >= 'a' && polje2[i] <= 'z') {
            ++mala2;
        }
        else if (polje2[i] >= 'A' && polje2[i] <= 'Z') {
            ++velika2;
        }
    }

    if (velika1 < velika2) printf("Polje 1: %s", polje1);
    else if (velika1 > velika2) printf("Polje 2: %s", polje2);
    else {
        if (mala1 < mala2) printf("Polje 1: %s", polje1);
        else if (mala1 > mala2) printf("Polje 2: %s", polje2);
        else {
            printf("Polje 1: %s", polje1);
            printf("\nPolje 2: %s", polje2);
        }
    }

    return 0;
}