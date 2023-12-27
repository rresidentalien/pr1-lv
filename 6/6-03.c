/*Napisati funkciju koja raˇcuna i vra´ca aritmetiˇcku sredinu pozitivnih dijelitelja pre-
danog joj cijelog broja. U funkciji main() na primjeru prikazati uporabu napisane
funkcije.*/

#include <stdio.h>

float sredinaDjelitelja(int x) {
    int i;
    float suma=0, djelitelji=0;
    float sredina;

    if (x<0) {
        x = -x; 
    }

    for (i=1; i<x; ++i) {
        if (x%i==0) {
            suma += i;
            ++djelitelji;
        }
    }

    sredina = suma/djelitelji;

    return sredina;
}

int main() {
    int broj;
    printf("Unesite broj: ");
    scanf("%d", &broj);

    printf("Aritmeticka sredina pozitivnih djelitelja je: %.2f", sredinaDjelitelja(broj));
}