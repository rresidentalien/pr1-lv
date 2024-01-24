/*Napisati funkciju koja predano joj polje realnih brojeva popunjava pseudo-sluˇcajnim
brojevima iz [−2n, 2n] \ [−n, 0] (vrijednosti iz [−n, 0] nisu dozvoljene), gdje je n
veliˇcina polja. U svrhu testiranja u funkciji main() dinamiˇcki zauzeti memoriju za
800 podataka tipa float (u potpunosti rukovati zauzetom memorijom). Iskoristiti
dobiveno polje pri pozivu napisane funkcije i naknadno ispisati elemente polja na
ekran.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pupuniPolje(float* array, int n) {
    srand(time(NULL));
    float broj;
    for (int i = 0; i < n; ++i) {
        do{
            broj = ((float)(rand() % (4 * n))) - (2 * n);
        }while (broj >= -n && broj <= 0);

        array[i] = broj;
    }
}

int main() {
    int velicina = 800;
    float* polje = (float*)malloc(velicina * sizeof(float));
    
    pupuniPolje(polje, velicina);
    for (int i = 0; i < velicina; ++i) {
        printf("%.2f ", polje[i]);
    }

    free(polje);

    return 0;
}