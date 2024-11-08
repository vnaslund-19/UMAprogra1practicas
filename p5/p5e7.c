#include <stdio.h>
#include <stdbool.h>

void    leer(int *ub, int *lb)
{
    printf("Introduzca un numero: ");
    scanf(" %d", lb);
    printf("Introduzca un numero: ");
    scanf(" %d", ub);
}

void    swap(int *n1, int *n2)
{
    int tmp;

    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

bool    is_prime(int n)
{
    bool    res = true;

    for (int i = n/2; res && i > 1; i--)
    {
        if (n % i == 0)
            res = false;
    }
    return (res);
}

void    mostrar(int n1, int n2)
{
    printf("%d = %d + %d\n", n1+n2, n1, n2);
}

void    error(int n)
{
    printf("Error en Conjetura de Goldbach para : %d\n", n);
}

bool    find_primes(int n)
{
    int p1 = 0, p2 = 0;

    for (int i = 2; i <= n/2 && !p1; i++)
    {
        for (int j = i; j < n && !p1; j++)
        {
            if (is_prime(i) && is_prime(j) && i+j==n)
            {
                p1 = i;
                p2 = j;
            }
        }
    }
    mostrar(p1, p2);
    return (p1);
}

void    goldbach(int lb, int ub)
{
    if (lb >= 4)
        printf("El resultado es:\n");
    if (lb % 2 != 0)
        lb++;
    for (int i = lb; i <= ub; i+=2)
    {
        if (i < 4 || !find_primes(i))
        {
            error(i);
        }
    }
}

int main()
{
    int ub, lb;

    leer(&ub, &lb);
    
    if (ub < lb)
        swap(&ub, &lb);
    goldbach(lb, ub);
}

