#include <stdio.h>

int main(void)
{
    int n;

    printf("Introduzca un numero entero: ");

    scanf(" %d", &n);

    if (n % 3 == 0 || n % 4 == 0 || n % 5 == 0)
        printf("SI es multiplo\n");
    else
        printf("No es multiplo\n");
}