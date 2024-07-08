/*Napisati funkciju koja za predani joj broj zbraja sve znamenke broja. Ako je zbroj
viˇseznamenkast, proces se ponavlja se dok se ne dode do jednoznamenkastog
zbroja. Primjerice, za argument 987987 funkcija bi trebala vratiti vrijednost 3, jer je
zbroj nakon prvog zbrajanja znamenki 48 (koji je dvoznamenkast), zatim kada se
njegove znamenke zbroje dobije se broj 12 ˇcije se znamenke opet moraju zbrojiti ˇsto
daje vrijednost 3. U svrhu testiranja u funkciji main() pozvati napisanu funkciju s
579859 kao argumentom i na ekran ispisati povratnu vrijednost.*/

#include <stdio.h>

int zbrojZnamenki(int x) {
    int znamenka, zbroj = 0;

    while (x != 0) {
        znamenka = x % 10;
        zbroj += znamenka;
        x /= 10;
    }

    return zbroj;
}

int test(int uneseniBroj) {
    while (uneseniBroj >= 10 || uneseniBroj < 0) {
        uneseniBroj = zbrojZnamenki(uneseniBroj);
    }

    return uneseniBroj;
}

int main() {
    printf("%d", test(579859));

    return 0;
}