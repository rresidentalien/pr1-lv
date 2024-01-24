/*Napisati funkciju koja vra´ca vrijednost −1 ukoliko predani joj string sadrˇzi viˇse
malih slova u odnosu na velika, a u obratnom sluˇcaju vra´ca vrijednost 1. Ukoliko
string ne sadrˇzi niti jedno slovo ili sadrˇzi jednak broj malih i velikih slova funk-
cija vra´ca vrijednost 0. U svrhu testiranja u funkciji main() omogu´citi korisniku
unos stringa od maksimalno 100 znakova u prethodno deklarirano polje odgova-
raju´ce veliˇcine. Iskoristiti navedeni string u pozivu napisane funkcije i na ekran
ispisati povratnu vrijednost. Koristiti iskljuˇcivo pokazivaˇcku notaciju za pristup
elementima polja.*/

#include <stdio.h>

int provjeraSlova(char *str) {
    int malaSlova = 0;
    int velikaSlova = 0;

    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            ++malaSlova;
        } else if (*str >= 'A' && *str <= 'Z') {
            ++velikaSlova;
        }
        ++str;
    }

    if (malaSlova > velikaSlova) {
        return -1;
    } else if (malaSlova < velikaSlova) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    printf("%d", provjeraSlova(str));

    return 0;
}