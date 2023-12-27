#include <stdio.h>
#include <string.h>

int main() {
    char polje[200], polje2[200];
    int i, j = 0;
    printf("Unesite string: ");
    fgets(polje, 200, stdin);

    char prviZnak = polje[0];

    for (i = 0; i < strlen(polje); ++i) {
        if (polje[i] != prviZnak) {
            polje2[j] = polje[i];
            j++;
        }
    }

    printf("Novi string: %s", polje2);

    return 0;
}