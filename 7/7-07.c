/*Napisati funkciju koja predani joj string pretvara u odgovaraju´ci cijeli broj kojeg
vra´ca. Ukoliko string ne predstavlja slijed znakova koji predstavlja cijeli broj,
funkcija vra´ca vrijednost INT MAX. Primjerice, za string ”-1234”, funkcija bi trebala
vratiti cjelobrojnu vrijednost −1234. U svrhu testiranja u funkciji main() omogu´citi
korisniku unos stringa od maksimalno 6 znakova u prethodno deklarirano polje
odgovaraju´ce veliˇcine. Iskoristiti navedeni string u pozivu napisane funkcije i na
ekran ispisati povratnu vrijednost.*/

#include <stdio.h>
#include <stdlib.h> //za strtol
#include <limits.h> //za INT_MAX

int stringToInt(char* str) {
    char* pointer;
    long broj = strtol(str, &pointer, 10);
    
    if (*pointer != '\0') {
        return INT_MAX;
    }
    
    return (int)broj;
}

int main() {
    char str[7];
    scanf("%6s", str);
    
    int num = stringToInt(str);
    printf("%d", num);
    
    return 0;
}