/*Napisati funkciju koja prima jedan znak i ako taj znak predstavlja veliko slovo
potrebno ga je vratiti kao malo slovo. U suprotnom vratiti inicijalni (predani)
znak. U svrhu testiranja u funkciji main() pozvati funkciju sa znakom uˇcitanim
s tipkovnice i na ekran ispisati povratnu vrijednost. [ASCII tablicu je mogu´ce
prona´ci na poveznici: http://www.asciitable.com/]*/

#include <stdio.h>

char swap(char slovo) {
    if (slovo >= 'A' && slovo <= 'Z') {
        slovo += 32;
    }

    return slovo;
}

int main() {
    char znak;

    printf("Unesi znak: ");
    scanf(" %c", &znak);

    printf("Novi znak: %c", swap(znak));

    return 0;
}