/*Napisati funkciju koja u predanom cijelom broju pronalazi i vra´ca prvu znamenku.
U svrhu testiranja u funkciji main() omogu´citi korisniku popunjavanje cjelobroj-
nog polja od 10 elemenata, pozvati funkciju za svaki element tog polja te izraˇcunati
i na ekran ispisati srednju vrijednost prvih znamenki svih elemenata tog polja.*/

#include <stdio.h>
#include <math.h>

int prvaZnamenka(int broj) {
    int trenutna = 0;

    while (broj != 0) {
        trenutna;
        trenutna = broj % 10;
        broj /= 10;
    }

    return abs(trenutna);
}

int main() {
    int polje[10], i, suma=0;
    float sredina;

    for (i=0; i<10; ++i) {
        printf("Unesi %d. element polja: ", i+1);
        scanf("%d", &polje[i]);
    }

    for (i=0; i<10; ++i) {
        suma += prvaZnamenka(polje[i]);
    }

    sredina = suma / 10.0;
    printf("Sredina prvih znamenki elemenata niza: %.2f", sredina);
    
    return 0;
}