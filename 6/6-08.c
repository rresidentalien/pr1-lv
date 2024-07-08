/*Napisati funkciju koja za predani joj cijeli broj raˇcuna i vra´ca zbroj faktorijela
znamenki. Primjerice, za argument 234 funkcija bi trebala izraˇcunati i vratiti
vrijednost 2! + 3! + 4! = 32. U svrhu testiranja u funkciji main() pozvati napisanu
funkciju s 123 te potom s −321 kao argumentom i ispisati na ekran povratnu
vrijednost.*/

#include <stdio.h>
#include <math.h>

int faktorijel(int x) {
    int i, broj = 1;

    for (i=1; i<x+1; ++i) {
        broj *= i;
    }

    return broj;
}

int faktorijelZnamenki(int y) {
    y = abs(y);
    int znamenka, zbroj = 0;

    while (y != 0) {
        znamenka = y % 10;
        zbroj += faktorijel(znamenka);
        y = y / 10;
    }

    return zbroj;
}

int main() {
    printf("%d\n", faktorijelZnamenki(123));
    printf("%d", faktorijelZnamenki(-321));

    return 0;
}