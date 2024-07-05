#include <stdio.h>

int main() {
    int broj, i, min, max;
    
    for (i=0; i<10; ++i) {
        scanf("%d", &broj);
        if (i==0 || broj<min) {
            min=broj;
        }
        if (i==0 || broj>max) {
            max=broj;
        }
    }
    printf("Najmanji broj: %d", min);
    printf("\nNajveci broj: %d", max);

    return 0;
}