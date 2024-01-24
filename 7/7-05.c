/*Omogu´citi korisniku unos 3 < m ≤ 18 elemenata u polje cijelih brojeva. Odrediti i
na ekran ispisati broj s najve´cim zbrojem znamenki. Koristiti pokazivaˇcku notaciju
za pristup elementima polja.*/

#include <stdio.h>

int sumaZnamenki(int num) {
    int suma = 0;
    while (num != 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

int main() {
    int m;
    do{
        scanf("%d", &m);
    }while (m <= 3 || m > 18);

    int polje[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d", &polje[i]);
    }

    int maxSuma = 0;
    int *maxNumPtr = NULL;
    int trenutniBroj;

    for (int i = 0; i < m; ++i) {
        trenutniBroj = sumaZnamenki(polje[i]);
        if (trenutniBroj > maxSuma) {
            maxSuma = trenutniBroj;
            maxNumPtr = &polje[i];
        }
    }

    printf("%d", *maxNumPtr);

    return 0;
}