/*Napisati funkciju koja elemente predanog joj polja cijelih brojeva mijenja na sljede´ci
naˇcin: elemente manje od aritmetiˇcke sredine svih elemenata polja zamijenjuje s
tom istom aritmetiˇckom sredinom. Korak izraˇcuna aritmetiˇcke sredine elemenata
polja izdvojiti u zasebnu funkciju. U svrhu testiranja u funkciji main() omogu´citi
korisniku unos 3 < n ≤ 16 elemenata u polje cijelih brojeva. Iskorisiti popunjeno
polje u pozivu napisane funkcije te ispisati izmijenjeno polje na ekran. Koristiti
iskljuˇcivo pokazivaˇcku notaciju za pristup elementima polja.*/

#include <stdio.h>

float sredina(int* arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += arr[i];
    }
    return (float)suma / n;
}

void zamjenaElemenata(int* arr, int size) {
    float average = sredina(arr, size);
    for (int i = 0; i < size; i++) {
        if (arr[i] < average) {
            arr[i] = average;
        }
    }
}

int main() {
    int n;
    do{
        scanf("%d", &n);
    }while (n <= 3 || n > 16);

    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    zamjenaElemenata(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
