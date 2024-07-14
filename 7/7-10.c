/*Napisati funkciju koja raˇcuna i vra´ca zbroj ASCII vrijednosti znakova prednog joj
stringa. U svrhu testiranja u funkciji main() omogu´citi korisniku unos stringa
od maksimalno 60 znakova u prethodno deklarirano polje odgovaraju´ce veliˇcine.
Potom, iskoristiti navedni string u pozivu napisane funkcije te ispisati na ekran
odgovaraju´cu poruku je li dobiveni zbroj dijeljiv s duljinom stringa ili nije.*/

#include <stdio.h>
#include <string.h>

int sumaASCIIvrijednosti(const char* str) {
    int suma = 0;
    int duzina = strlen(str);
    
    for (int i = 0; i < duzina; ++i) {
        suma += (int)str[i];
    }
    
    return suma;
}

int main() {
    char str[61];
    
    fgets(str, sizeof(str), stdin);
    
    int suma = sumaASCIIvrijednosti(str);
    
    if (suma % strlen(str) == 0) {
        printf("Dobiveni zbroj je dijeljiv s duljinom stringa.\n");
    } 
    else {
        printf("Dobiveni zbroj nije dijeljiv s duljinom stringa.\n");
    }
    
    return 0;
}