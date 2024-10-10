#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("Introduzca un numero: ");

    scanf(" %d", &n);
    
    if (n < 0)
        printf("Error.\n");
    else
    {
        for (int i = 1; i <= n; i++)
            sum += i;
        printf("La suma es: %d\n", sum);
    }
}