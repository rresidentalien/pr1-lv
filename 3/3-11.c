#include <stdio.h>

int main() {
    char unos;
    int i=0;
    do{
        scanf(" %c", &unos);
        ++i;
    }while (unos!='q');
    
    printf("q je unesen nakon %d puta", i);

    return 0;
}