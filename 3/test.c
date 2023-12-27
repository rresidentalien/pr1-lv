#include <stdio.h>

int main() {
    char c1, c2, c3;
    printf("Unesi tri znaka: ");
    scanf("%c %c %c", &c1, &c2, &c3);

    char najmanji = c1;
    if (c2 < najmanji) {
        najmanji = c2;
    }
    if (c3 < najmanji) {
        najmanji = c3;
    }

    printf("Najmanji znak: %c\n", najmanji);

    if (c1 != najmanji) {
        printf("Hex. od c1/najmanji: %x", c1 / najmanji);
    }
    if (c2 != najmanji) {
        printf("\nHex. od c2/najmanji: %x", c2 / najmanji);
    }
    if (c3 != najmanji) {
        printf("\nHex. od  c3/najmanji: %x", c3 / najmanji);
    }

    return 0;
}