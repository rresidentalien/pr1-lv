/*Napisati funkciju koja u predanom joj stringu postavlja sve znakove koji nisu
slova u pseudo-sluˇcajno generirano veliko ili malo slovo. U svrhu testiranja u
funkciji main() dinamiˇcki zauzeti memoriju za 50 podataka tipa char (u potpunosti
rukovati zauzetom memorijom). Omogu´citi korisniku unos stringa u dobiveno
polje (osigurati da se ne premaˇsi njegova veliˇcina) te ga iskoristi u pozivu napisane
funkcije. Naknadno ispisati string na ekran.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void zamjenaNeSlova(char* str) {
    srand(time(NULL));
    int i = 0;
    while (str[i] != '\0') {
        if (!isalpha(str[i])) {
            str[i] = rand() % 2 == 0 ? toupper('A' + rand() % 26) : tolower('A' + rand() % 26);
        }
        ++i;
    }
}

int main() {
    char* str = (char*)malloc(51 * sizeof(char));
    fgets(str, 51, stdin);

    zamjenaNeSlova(str);

    printf("%s", str);

    free(str);

    return 0;
}