#include <stdio.h>
#include <math.h>

int main() {
    int polje[12];
    int i;
    int zbroj = 0;
    float sredina;

    for (i = 0; i < 12; ++i) {
        printf("Upisi %d. broj: ", i+1);
        scanf("%d", &polje[i]);
        zbroj += abs(polje[i]);
    }

    sredina = (float)zbroj / 12;

    for (i = 0; i < 12; ++i) {
        if (polje[i] > 0) {
            polje[i] = sredina;
        }
    }

    printf("Novo polje:\n");
    for (i = 0; i < 12; ++i) {
        printf("%d ", polje[i]);
    }
    
    return 0;
}
