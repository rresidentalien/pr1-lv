#include <stdio.h>

int main() {
    int i;
    int broj = 0;
    int zbroj = 0;

    printf("Troznamenkasti brojevi sa zadnjom znamenkom djeljivom s 3: ");
    for (i = 100; i <= 999; ++i) {
        if (i % 10 % 3 == 0) {
            printf("%d ", i);
            ++broj;
            zbroj += i;
        }
    }

    float sredina = (float)zbroj / broj;
    printf("\nAritmeticka sredina: %.2f", sredina);

    return 0;
}