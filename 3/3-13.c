#include <stdio.h>

int main() {
    int bodovi;
    float udio;
    do {
        scanf("%d", &bodovi);
    }while (bodovi<0 || bodovi>28);
    
    udio = (bodovi/28.0)*20;
    printf("Ivica ima %.2f bodova", udio);

    return 0;
}