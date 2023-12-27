/*Omogu´citi korisniku unos jednog stringa od maksimalno 60 znakova. Potom,
prebrojati sve samoglasnike u stringu. Ako je broj samoglasnika q, zamijeniti sve
znakove u stringu ˇcija je ASCII vrijednost ve´ca od r = max{32, 2q} sa znakom ˇcija
je ASCII vrijednost jednaka r. Na kraju, na ekran ispisati izmijenjeni string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char polje[60];
    printf("Unesite string: ");
    fgets(polje, 60, stdin);
        
    int q = 0, r = 0, samoglasnici = 0;
        
    for (int i = 0; i < strlen(polje); ++i) {
        if (polje[i] == 'a' || polje[i] == 'e' || polje[i] == 'i' || polje[i] == 'o' || polje[i] == 'u' ||
            polje[i] == 'A' || polje[i] == 'E' || polje[i] == 'I' || polje[i] == 'O' || polje[i] == 'U') {
            ++samoglasnici;
        }
    }
        
    q = samoglasnici;
    r = (32 > 2 * q) ? 32 : 2 * q;
        
    for (int i = 0; i < strlen(polje); i++) {
        if (polje[i] > r) {
            polje[i] = r;
        }
    }
        
    printf("Izmijenjeni string: %s", polje);
        
    return 0;
}