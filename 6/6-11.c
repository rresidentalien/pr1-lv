#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int pseudoSlucajanBroj(int a, int b) {
    int broj;

    broj = (rand() % (b - a + 1)) + a;

    return broj;
}

int main() {
    srand(time(NULL));
    int x, y, i;
    y = (rand() % 301) - 100;
    do {
        x = (rand() % 301) - 100;
    }while(2*x > y);

    for (i = 0; i < 100; ++i) {
        printf("%d ", pseudoSlucajanBroj(x, y));
    }

    return 0;
}