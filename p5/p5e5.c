#include <stdio.h>

void leer(int *n)
{
    printf("Introduce el numero de filas: ");
    scanf(" %d", n);

    while (*n < 1 || *n > 9)
    {
        printf("Error. Introduce el numero de filas: ");
        scanf(" %d", n);
    }
}

int incremento_circular(int valor, int limite)
{
    int res;

    if (valor + 1 < limite)
        res = valor + 1;
    else
        res = 0;
    return (res);
}

void    fig(int n)
{
    int next_num;

    for (int i = 0; i < n; i++)
    {
        next_num = i;
        for (int j = 0; j < n; j++)
        {
            printf("%d ", next_num);
            next_num = incremento_circular(next_num, n);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    leer(&n);
    fig(n);
}

