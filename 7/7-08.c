/*Napisati funkciju koja u predanom joj polju realnih brojeva zamjenjuje mjesta ele-
mentima prve polovice s elementima druge polovice i to na naˇcin da se zamjeni
prvi i zadnji element, zatim drugi i predzadnji i tako dalje. U svrhu testiranja u
funkciji main() omogu´citi korisniku unos 5 < n < 11 elemenata u polje realnih bro-
jeva. Iskorisiti popunjeno polje u pozivu napisane funkcije te ispisati izmijenjeno
polje na ekran.*/

#include <stdio.h>

void zamjenaElemenata(float polje[], int n) {
    int i;
    float temp;
    
    for (i = 0; i < n / 2; ++i) {
        temp = polje[i];
        polje[i] = polje[n - i - 1];
        polje[n - i - 1] = temp;
    }
}

int main() {
    int n;
    do{
        scanf("%d", &n);
    }while (n <= 5 || n >= 11);
    
    float arr[n];
    int i;
    
    for (i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
    }
    
    zamjenaElemenata(arr, n);
    
    for (i = 0; i < n; ++i) {
        printf("%.2f ", arr[i]);
    }
    
    return 0;
}