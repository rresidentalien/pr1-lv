/*Generirati pseudo-sluˇcajni broj iz [1000, 10000] te dinamiˇcki zauzeti memoriju za
toliko podataka tipa double (u potpunosti rukovati zauzetom memorijom). Po-
puniti dobiveno polje pseudo-sluˇcajnim brojevima iz [−5, 20] ⊂ R. Izraˇcunati
aritmetiˇcku sredinu i prona´ci element polja koji joj je najbliˇzi.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double randomBroj() {
    double random = (rand() % 9001) + 1000;

    return random;
}

double sredina(double* polje, int velicina) {
    double suma = 0;
    for (int i = 0; i < velicina; i++) {
        suma += polje[i];
    }

    return suma / velicina;
}

int najbliziElement(double* polje, int velicina, double prosjek) {
    int najblizi = 0;
    double pocetnaVrijednost = fabs(polje[0] - prosjek);
    for (int i = 1; i < velicina; i++) {
        double razlika = fabs(polje[i] - prosjek);
        if (razlika < pocetnaVrijednost) {
            pocetnaVrijednost = razlika;
            najblizi = i;
        }
    }

    return najblizi;
}

int main() {
    srand(time(NULL));

    int size = (int)randomBroj();
    double* array = malloc(size * sizeof(double));

    for (int i = 0; i < size; ++i) {
        array[i] = (rand() % 26) - 5;
    }

    double mean = sredina(array, size);
    int closestIndex = najbliziElement(array, size, mean);
    double closestElement = array[closestIndex];

    printf("Sredina: %.3lf\n", mean);
    printf("Element najblizi sredini: %.3lf\n", closestElement);

    free(array);
    return 0;
}