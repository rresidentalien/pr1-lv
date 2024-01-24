/*Napisati funkciju koja raˇcuna i vra´ca f(x).
U svrhu testiranja u funkciji main() deklarirati polje od 10 elemenata i naknadno
omogu´citi korisniku njegovo popunjavanje. Iskoristiti to polje u pozivu navedene
funkcije i ispisati na ekran povratnu vrijednost.*/

#include <stdio.h>
#include <math.h>

float funkcija (int *x, int n) {
    int suma = 0;
    for (int i = 1; i < n-1; ++i) {
        suma += abs(i * pow(*(x+i+1), 2) - 1);
    }
    int fx = *(x) * suma;

    return fx;
}

int main() {
    int polje[10];
    int i;

    for (i = 0; i < 10; ++i) {
        scanf("%d", &polje[i]);
    }

    printf("%.3f", funkcija(polje, 10));
}