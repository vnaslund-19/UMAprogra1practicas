#include <stdio.h>

int main()
{
    int n_og, n, pares = 0;

    printf("Introduzca un numero (>= 0): ");
    scanf(" %d", &n);

    n_og = n;
    if (n < 0)
        printf("Error, numero negativo\n");
    else if (n == 0)
        pares = 1;
    else
    {
        while (n)
        {
            if (n % 2 == 0)
                pares++;
            n /= 10;
        }
    }
    if (pares != 1 && n_og >= 0)
        printf("El numero %d tiene %d digitos pares\n", n_og, pares);
    else if (n_og >= 0)
        printf("El numero %d tiene %d digito par\n", n_og, pares);
}
