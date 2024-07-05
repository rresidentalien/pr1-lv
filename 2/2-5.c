#include <stdio.h>

int main() {

    printf("sizeof(1000) = %d\n", sizeof(1000));
    printf("sizeof(10.5) = %d\n", sizeof(10.5));
    printf("sizeof(0x2F) = %d\n", sizeof(0x2F));
    printf("sizeof('A') = %d\n", sizeof('A'));

    /*za one koji zele znati vise:
    sizeof() vraca vrijednost tipa size_t koja je unsigned - bez predznaka - pozitivna. 
    format specifier za size_t je %zu, ali s obzirom da su sve vrijednosti zadane u zadatku pozitivne i ne prelaze max vrijednost integera, mozemo ostaviti i %d

    iako je 'A' znak (a navikli smo da char ima 1 bajt), C jezik tretira znakovne konstante kao integere i zbog toga ce vam se ovdje ispisati 4 bajta.
    da ste rjesili zadatak tako sto ste prvo deklarirali sve konstante kao npr. const char a = 'A' (sto je isto dobar nacin rjesavanja ovog zadatka), tada bi sizeof(a) vracao uobicajeni 1 bajt.
    */

    return 0;
}