/*Omogu´citi korisniku unos cijelog broja 9 < n ≤ 200. Potom, dinamiˇcki zauzeti me-
moriju n podataka tipa double te popuniti tako dobiveno polje pseudo-sluˇcajnim
brojevima iz [−300, 300]. Nasumiˇcno odabrati ⌊n/2⌋ elementa (nasumiˇcno gene-
rirati indekse elemenata bez ponavljanja) te izraˇcunati i na ekran ispisati njihovu
aritmetiˇcku sredinu.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n;
    do{
        scanf("%d", &n);
    }while (n <= 9 || n > 200);

    double* polje = (double*)malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        polje[i] = (double)(rand() % 601) - 300;
    }

    int brojElemenata = n / 2;
    int* odabraniIndeksi = (int*)malloc(brojElemenata * sizeof(int));
    int i, j;

    for (i = 0; i < brojElemenata; ++i) {
        int indeks;
        int nemaPonavljanja;
        do {
            indeks = rand() % n;
            nemaPonavljanja = 1;
            for (j = 0; j < i; ++j) {
                if (odabraniIndeksi[j] == indeks) {
                    nemaPonavljanja = 0;
                    break;
                }
            }
        }while (!nemaPonavljanja);
        odabraniIndeksi[i] = indeks;
    }

    double suma = 0.0;
    for (int i = 0; i < brojElemenata; ++i) {
        suma += polje[odabraniIndeksi[i]];
    }

    double sredina = suma / brojElemenata;
    printf("%.3lf\n", sredina);

    free(polje);
    free(odabraniIndeksi);
    return 0;
}