#include <stdio.h>

int main() {
    int i, a;
    float j = 0;

    for (i = 0; i < 10; ++i) {
        scanf("%d", &a);
        if (a%2==0) {
            ++j;
        }
    }
    
    printf("%.2f%%", j/10*100);

    return 0;
}