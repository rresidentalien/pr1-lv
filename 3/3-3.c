#include <stdio.h>

int main() {
    int i = 0;
    char ocjena;

    do {
        scanf(" %c", &ocjena);
        switch (ocjena) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
                ++i;
                break;
        }
    }while (ocjena !='!');

    printf("%d", i);
    
    return 0;
}