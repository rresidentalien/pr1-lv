/*Omogu´citi korisniku unos jedne reˇcenice od maksimalno 220 znakova. Odrediti
i na ekran ispisati srednju vrijednost svih znakova (njihovih ASCII vrijednosti) u
stringu osim razmaka i toˇcki koje treba preskoˇciti prilikom izraˇcuna.*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje[220];
    int i, djelitelj=0, vrijednost=-10, srednjaVrijednost;

    printf("Unesi rečenicu od najviše 220 znakova: ");
    fgets(polje, 220, stdin);

    for (i=0; i<strlen(polje); ++i) {
        if (polje[i] !=' ' && polje[i]!='.') {
            ++djelitelj;
            vrijednost = vrijednost+polje[i];
        }
    }

    srednjaVrijednost = vrijednost / djelitelj;
    printf("Srednja vrijednost svih znakova je: %d", srednjaVrijednost);

    return 0;
}