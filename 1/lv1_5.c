#include <stdio.h>
int main()
{
    char a,b;
    scanf("%c %c", &a, &b);
    printf("%c %c \n", b, a);
    printf("%d %o %x \n", a,a,a);
    printf("%d %o %x", b,b,b);
    return 0;
}