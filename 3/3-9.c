#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a+b > c && a+c > b && b+c > a) {
        if (a == b && a == c && b == c) {
            printf("Jednakostranican trokut");
        }
        else if (a == b || a == c || b == c) {
            printf("Jednakokracan trokut");
        }
        else if (a != b != c) {
            printf("Raznostranican trokut");
        }
    }
    else {
        printf("Nije trokut");
    }
    
    return 0;
}