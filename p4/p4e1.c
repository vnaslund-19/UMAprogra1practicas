#include <stdio.h>

void    leer(int* a, int* b)
{
    printf("Introduce dos numeros enteros mayores que cero: ");
    scanf(" %d %d", a, b);

    while (*a <= 0 || *b <= 0)
    {
        printf("Error. Introduce dos numeros enteros mayores que cero: ");
        scanf(" %d %d", a, b);
    }
}

void    intercambiar(int* a, int* b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ordenar(int* a, int* b)
{
    if (*a > *b)
        intercambiar(a, b);
}

double factorial(int n)
{
    int res = 1;

    for (int i = n; i > 0; --i)
    {
        res *= i;
    }
    return (res);
}

double  potencia(int base, int exp)
{
    int res = 1;

    for (int i = 0; i < exp; i++)
    {
        res *= base;
    }
    return (res);
}

double  termino(int a, int b)
{
    return (potencia(b, a) / factorial(a));
}

void    mostrar(double t)
{
    printf("El resultado es: %lg\n", t);
}

int main(void)
{
    int a, b;

    leer(&a, &b);
    ordenar(&a, &b);
    mostrar(termino(a, b));
}