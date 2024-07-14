/*Napisati funkciju.
U svrhu testiranja u funkciji main() deklarirati polje od 10 elemenata i naknadno
omogu´citi korisniku njegovo popunjavanje. Iskoristiti to polje u pozivu navedene
funkcije i ispisati na ekran povratnu vrijednost.*/

#include <stdio.h>
#include <math.h>

float funkcija(int *x, float n) {
    float suma = 0;
    int i;
    for (i=2; i < n-1; ++i) {
        suma += fabs(x[i-1] - pow(x[i+1], 2)) + pow(x[i], 3);
    }
    float fx = 1/n * suma;

    return fx;
}

int main() {
    int polje[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &polje[i]);
    }
    
    printf("%.2f", funkcija(polje, 10));

    return 0;
}