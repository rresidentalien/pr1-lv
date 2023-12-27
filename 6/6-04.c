/*Napisati funkciju koja u predanom joj broju pronalazi i vra´ca razliku najve´ce i
najmanje znamenke. U svrhu testiranja u funkciji main() pozvati funkciju s brojem
26931 kao argumentom i na ekran ispisati povratnu vrijednost.*/

#include <stdio.h>

int razlika(int x) {
    int najmanji=9, najveci=0, trenutniBroj, razlika;

    while (x!=0) {
        trenutniBroj = x%10;
        if (trenutniBroj > najveci) {
            najveci = trenutniBroj;
        }
        if (trenutniBroj < najmanji) {
            najmanji = trenutniBroj;
        }

        x = x/10;
    }

    razlika = najveci - najmanji;

    return razlika;
}

int main() {
    printf("Razlika najvece i najmanje znamenke: %d", razlika(26931));
}