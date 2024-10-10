#include <stdio.h>

int main(void)
{
    int n, pre, sum = 0;

    printf("Introduzca numero de modelos de coche: ");
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Introduzca precio modelo %d: ", i);
        scanf(" %d", &pre);
        sum += pre;
    }
    printf("El valor medio de los 4 modelos de coche asciende a: %lg €\n", (double)sum / n);
}