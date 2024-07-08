/*Omogu´citi korisniku unos jedne reˇcenice od maksimalno 220 znakova. Odrediti
i na ekran ispisati srednju vrijednost svih znakova (njihovih ASCII vrijednosti) u
stringu osim razmaka i toˇcki koje treba preskoˇciti prilikom izraˇcuna.*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje[220];
    int i, djelitelj = 0, vrijednost = 0, srednjaVrijednost;

    printf("Unesi rečenicu od najviše 220 znakova: ");
    scanf("%[^\n]", polje);

    int duljina = strlen(polje);
    for (i = 0; i < duljina; ++i) {
        if (polje[i] != ' ' && polje[i] != '.') {
            ++djelitelj;
            vrijednost += polje[i];
        }
    }

    srednjaVrijednost = vrijednost / djelitelj;
    printf("Srednja vrijednost svih znakova je: %d", srednjaVrijednost);

    return 0;
}