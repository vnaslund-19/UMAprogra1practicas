#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Introduzca un numero: ");
        scanf(" %d", &n);
    }
    while (n <= 0);

    for (int i = 0; i < n; i++)
        printf("x");
    printf("\n");
}