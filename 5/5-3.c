/*Kao simulaciju izvlaˇcenja lotto brojeva, stvoriti sedam pseudo-sluˇcajnih brojeva iz
[1, 49] ⊂ Z i ispisati ih na ekran. Osigurati da nije mogu´ce da se isti broj u jednom
izvlaˇcenju pojavi viˇse puta.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int polje[7];
    int i, j;

    for (i=0; i<7; ++i) {
        polje[i] = (rand() % 50);
        for (j=0; j<i; ++j) {
            if (polje[j] == polje[i]) {
                --i;
                break;
            }
        }
    }

    printf("Lotto brojevi: ");
    for (i=0; i<7; ++i) {
        printf("%d ", polje[i]);
    }

    return 0;
}