/*Napisati funkciju koja raˇcuna i vra´ca vrijednost y = x3
1 − x1x3
|x2|+10−3 + 5x2
3. U svrhu
testiranja u funkciji main() pozvati napisanu funkciju s 1.2, −4.1 i 2.825 kao argu-
mentima te na ekran ispisati povratnu vrijednost.*/

#include <stdio.h>
#include <math.h>

float izracun (float x1, float x2, float x3) {
    
    float y = pow(x1, 3) - ((x1*x3) / (abs(x2) + pow(10, -3))) + (5 * pow(x3, 2));

    return y;
}

int main() {
    printf("%d", izracun(1.2, -4.1, 2.825));

    return 0;
}