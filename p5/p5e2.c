#include <stdio.h>
#include <stdbool.h>

int ft_pow(int base, int exp)
{
    int res = 1;

    for (int i = 0; i < exp; i++)
    {
        res *= base;
    }
    return (res);
}

void elim_ult_dig(int *n)
{
    *n /= 10;
}

void elim_prim_dig(int *n, int digitos, int prim_dig)
{
    *n -= ft_pow(10, digitos - 1) * prim_dig;
}

int prim_dig(int n, int digitos)
{
    return(n / (ft_pow(10, digitos - 1)));
}

int ultimo_dig(int n)
{
    return (n % 10);
}

int count_digs(int num)
{
    int i = 0;
    while (num != 0)
    {
        num /= 10;
        i++;
    }
    return (i);
}

void imprimir(int n1, int n2)
{
    printf("%d + %d = %d, ", n1, n2, n1 + n2);
}

void mostrar_resultados(int num)
{
    int dig_count = count_digs(num);
    int prim;

    printf("El resultado es: ");
    while (dig_count > 1)
    {
        prim = prim_dig(num, dig_count);
        imprimir(ultimo_dig(num), prim);
        elim_prim_dig(&num, dig_count, prim);
        elim_ult_dig(&num);
        dig_count -= 2;
    }
    if (dig_count == 1)
        printf("%d\n", num);
    else
        printf("\n");
}

void    leer(int *n)
{
    printf("Introduzca numero: ");
    scanf(" %d", n);
}

int main()
{
    int n;

    leer(&n);
    mostrar_resultados(n);
}