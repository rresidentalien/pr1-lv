#include <stdio.h>

int main() {
    int a;
    do {
        scanf("%d", &a);
    }while (a<0);

    while (a!=0) {
        printf("%d", a%10);
        a = a / 10;
        if (a!=0) {
            printf("__");
        }
    }
    
    return 0;
}