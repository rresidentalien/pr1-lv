#include <stdio.h>
int main() {
    int n, i, j, brojDjelitelja;
    int naj = 0;
    int broj = 0;
            
    do {
        printf("Upisi broj veci od 2: ");
        scanf("%d", &n);
    } while (n <= 2);
            
    for (i = 1; i <= n; ++i) {
        brojDjelitelja = 0;        
        for (j = 1; j <= i / 2; ++j) {
            if (i % j == 0) {
                ++brojDjelitelja;
            }
        }        
        if (brojDjelitelja > naj) {
            naj = brojDjelitelja;
            broj = i;
        }
    }
            
    printf("Broj s najvise djelitelja: %d", broj);
    printf("\nDjelitelji: ");        
    for (i = 1; i <= broj; ++i) {
        if (broj % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}