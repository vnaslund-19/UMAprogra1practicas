#include <stdio.h>

int main(void)
{
    char a, b, c, d;

    printf("Introduzca una palabra de 4 letras minúsculas: ");
    scanf("%c %c %c %c", &a, &b, &c, &d);
    printf("La palabra [%c%c%c%c] transformada es [%c%c%c%c]\n", a, b, c, d, a - 32, b - 32, c - 32, d - 32);
}
