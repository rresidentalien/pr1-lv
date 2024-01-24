/*Omogu´citi korisniku unos 4 ≤ m < 19 vrijednosti u polje cijelih brojeva. Odrediti i
na ekran ispisati razliku elementa s najve´com i elementa s najmanjom vrijednosti.
Koristiti pokazivaˇcku notaciju za pristup elementima polja.*/

#include <stdio.h>

int main() {
    int m, razlika;
    do{
        scanf("%d", &m);
    }while (m < 4 || m >= 19);

    int polje[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d", &polje[i]);
    }

    int min = *polje;
    int max = *polje;
    for (int i = 1; i < m; ++i) {
        if (*(polje + i) < min) {
            min = *(polje + i);
        }
        if (*(polje + i) > max) {
            max = *(polje + i);
        }
    }

    razlika = max - min;
    printf("%d", razlika);

    return 0;
}