#include <stdio.h>

int main() {
    int n, i, min, max;
    do{
        scanf("%d", &n);
    }while (n <=5 || n > 15);

    float polje[n];
    for (i=0; i<n; ++i){
        scanf("%f", &polje[i]);
    }

    min = polje[0];
    max = polje[0];

    for (i=0; i<n; ++i) {
        if (polje[i] < min) {
            min = polje[i];
        }
        if (polje[i] > max) {
            max = polje[i];
        }
    }

    for (i=0; i<n; ++i) {
        polje[i] = (polje[i] - min) / (max - min);
        printf("%.2f ", polje[i]);
    }

    return 0;
}