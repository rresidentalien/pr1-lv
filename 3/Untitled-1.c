#include <stdio.h>
int main() {
    int a = 0;
    char br;
    do {
        printf("Unesi q: ");
        scanf(" %c", &br);
        ++a;
    }while (br!='q');
    printf("pokusaj %d", a);
}