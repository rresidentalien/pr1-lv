/*Omogu´citi korisniku unos cijelog broja 5 < n ≤ 20. Potom, n puta generirati
pseudo-sluˇcajan broj t iz [10, 1000] ⊂ Z te dinamiˇcki zauzeti memoriju za t poda-
taka tipa double. Svaki puta dobiveno polje popuniti pseudo-sluˇcajnim brojevima
iz [−10, 0] ⊂ R, prona´ci najmanji i najve´ci elemenat te ispisati apsolutnu vrijednost
njihove razlike na ekran. U potpunosti rukovati zauzetom memorijom.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int n;
    do{
        scanf("%d", &n);
    }while (n <= 5 || n > 20);

    srand(time(NULL));

    double* podaci = NULL; 

    for (int i = 0; i < n; ++i) {
        double t = rand() % 991 + 10;
        podaci = (double*)malloc(t * sizeof(double));

        for (i = 0; i < n; ++i) {
            double broj = (double)(rand() % 11) - 10;
            podaci[i] = broj;
        }
    }

    double min = podaci[0];
    double max = podaci[0];

    for (int i = 1; i < n; ++i) {
        if (podaci[i] < min) {
            min = podaci[i];
        }
        if (podaci[i] > max) {
            max = podaci[i];
        }
    }

    printf("%.2lf", fabs(max - min));

    free(podaci);
    return 0;
}