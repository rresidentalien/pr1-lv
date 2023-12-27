#include <stdio.h>

int main() {
    double polje[10];
    int i;
    double min, max;

    for (i = 0; i < 10; ++i) {
        printf("Upisi %d. broj: ", i+1);
        scanf("%lf", &polje[i]);
    }

    min = polje[0];
    max = polje[0];

    for (i = 1; i < 10; ++i) {
        if (polje[i] < min) {
            min = polje[i];
        }
        if (polje[i] > max) {
            max = polje[i];
        }
    }

    printf("\nNajmanji broj: %.2lf", min);
    if (min != max) {
        printf("\nNajveci broj: %.2lf", max);
    }

    return 0;
}
