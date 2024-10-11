#include <stdio.h>

int main()
{
    int n;
    double pi = 2;

    printf("Introduzca el numero de fracciones: ");
    scanf(" %d", &n);

    while (n <= 0)
    {
        printf("Error. Introduzca el numero de fracciones: ");
        scanf(" %d", &n);
    }

    for (int i = 2; i < n+2; i++)
    {
        if (i % 2 == 0)
            pi *= (double)i / (i - 1);
        else
            pi *= (double)(i-1) / i;
    }
    printf("El valor de PI con %d fracciones es: %lg\n", n, pi);
}
