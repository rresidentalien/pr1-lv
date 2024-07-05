#include <stdio.h>

int main() {
    int broj, i, max;

    for (i=1; i<=5; ++i) {
        do{
            printf("Unesi broj iz intervala [-100, 50>: ");
            scanf("%d", &broj);
        }while (broj<-100 || broj>=50);

        if (i == 1 || broj > max) {
            max = broj;
        }
    }

    printf("Najveci broj je %d", max);

    return 0;
}