/*Napisati funkciju koja raˇcuna i vra´ca povrˇsinu trokuta zadanog duljinama stranica.
Ukoliko predane stranice ne ˇcine trokut funkcija vra´ca vrijednost 0. U funkciji
main() na primjeru prikazati uporabu napisane funkciju. Za izraˇcun povrˇsine
trokuta koristiti Heronovu formulu. Za izračun
korjena koristiti funkciju sqrt() koja je opisana u zaglavnoj datoteci math.h, a ˇciji
je prototip: double sqrt(double x);*/

#include <stdio.h>
#include <math.h>

float povrsina(int a, int b, int c) {
    if (a+b <= c || a+c <= b || b+c <= a) {
        return 0;
    }

    float s = (float)(a+b+c)/2;

    float povrsina = sqrt(s*(s-a)*(s-b)*(s-c));

    return povrsina;
}

int main() {
    int a, b, c;

    printf("Unesite tri stranice trokuta: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%.2f", povrsina(a, b, c));
}