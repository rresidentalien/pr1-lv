#include <stdio.h>

int main() {
    int a, i;
    int prost = 1;
    scanf("%d", &a);

    for (i=2; i<=a/2; ++i) {
        if (a%i == 0) {
            prost = 0;
            break;
        }
    }
    
    if (prost == 1) {
        printf("Prost je");
    }
    else if (prost == 0) {
        printf("Nije prost");
    }

    return 0;
}