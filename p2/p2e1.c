#include <stdio.h>

int main(void)
{
    int num;

    printf("Introduzca un número entero: ");
    scanf(" %d", &num);

    if (num >= 0)
        printf("El número %d no es negativo\n", num);
    else
        printf("El número %d sí es negativo\n", num);
}