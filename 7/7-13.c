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
    srand(time(NULL));
    
    int n;
    do{
        scanf("%d", &n);
    }while (n <= 5 || n > 20);

    double* podaci = NULL;
    double min, max;

    for (int i = 0; i < n; ++i) {
        int t = (rand() % 991) + 10;
        podaci = (double*)malloc(t * sizeof(double));
       
        podaci[0] = (double)(rand() % 11) - 10;
        min = podaci[0];
        max = podaci[0];

        for (int j = 1; j < t; ++j) {
            podaci[j] = (double)(rand() % 11) - 10;
            if (podaci[j] < min) {
                min = podaci[j];
            }
            if (podaci[j] > max) {
                max = podaci[j];
            }
        }
        printf("%.2lf ", fabs(max - min));

        free(podaci);
    }

    return 0;
}