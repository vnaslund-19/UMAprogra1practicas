#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Introduzca los dos numeros enteros: ");

    scanf(" %d %d", &n1, &n2);

    if (n1 % n2 == 0)
        printf("%d si es divisor de %d\n", n2, n1);
    else if (n2 % n1 == 0)
        printf("%d si es divisor de %d\n", n1, n2);
    else
        printf("No son divisibles\n");
}