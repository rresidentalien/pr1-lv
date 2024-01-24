/*Deklarirati i inicijalizirati cjelobrojnu varijablu te pokazivaˇc na nju. Ispisati joj
vrijednost i adresu. Ukoliko je pozitivna, udvostruˇciti joj vrijednost, a u suportnom
je prepoloviti te joj ponovo ispisati vrijednost i adresu. Rukovati s vrijednosti
varijable iskljuˇcivo posredstvom pokazivaˇca.*/

#include <stdio.h>

int main() {
    int varijabla = 10;
    int *ptr = &varijabla;

    printf("Vrijednost: %d\n", *ptr);
    printf("Adresa: %p\n", ptr);

    if (*ptr > 0) {
        *ptr *= 2;
    } else {
        *ptr /= 2;
    }

    printf("Nova vrijednost: %d\n", *ptr);
    printf("Nova adresa: %p\n", ptr);

    return 0;
}
