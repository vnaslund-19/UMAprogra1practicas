#include <stdio.h>

int fib(int n)
{
    int prev1 = 1, prev2 = 0, res = 0;

    if (n == 1)
    {
        res = 1;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            res = prev1 + prev2;
            prev2 = prev1;
            prev1 = res;
        }
    }
    return (res);
}

void leer(int *n)
{
    printf("Introduzca un numero: ");
    scanf(" %d", n);

    while (*n < 0)
    {
        printf("Error. Introduzca un numero: ");
        scanf(" %d", n);
    }
}

int main()
{
    int n;

    leer(&n);
    printf("fibonnaci(%d): %d\n", n, fib(n));
}
