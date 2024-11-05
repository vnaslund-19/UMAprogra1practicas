#include <stdio.h>
#include <stdbool.h>

void    leer(int *n, int *m)
{
    printf("Introduzca un intervalo (dos numeros): ");
    scanf(" %d %d", n, m);
}

void    mostrar_coprimos(int n1, int n2)
{
    printf("Coprimos: %d, %d\n", n1, n2);
}

// Lanzar excepciones si n1 es mayor o igual a n2 en todas las funciones
int mcd(int n1, int n2)
{
    int mcd = 0;

    for (int i = n2; mcd == 0; i--)
    {
        if (n2 % i == 0 && n1 % i == 0)
            mcd = i;
    }
    return (mcd);
}

bool    son_comprimos(int n1, int n2)
{
    return (mcd(n1, n2) == 1);
}

void encontrar_comprimos(int lb, int ub)
{
    if (lb >= ub)
    {
        printf("Error\n");
    }
    else
    {
        for (int i = lb; i < ub; i++)
        {
            for (int j = i + 1; j <= ub; j++)
            {
                if (son_comprimos(i, j))
                {
                    mostrar_coprimos(i, j);
                }
            }
        }
    }
}

int main()
{
    int n, m;

    leer(&n, &m);
    encontrar_comprimos(n, m);
}