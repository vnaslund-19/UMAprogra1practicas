#include <stdio.h>

double ft_pow(double base, int exp)
{
    double res = 1;

    for (int i = 0; i < exp; i++)
    {
        res *= base;
    }
    return (res);
}

int fact(int n)
{
    int res = 1;

    for (int i = n; i > 1; --i)
    {
        res *= i;
    }
    return (res);
}

double calc(double x, int div)
{
    return (ft_pow(x, div) / fact(div));
}

double  taylor(double x)
{
    double res = 1;

    for (int i = 1; i < 7; i++)
    {
        res += calc(x, i);
    }
    return (res);
}

int main()
{
    double x;

    printf("Introduzca el valor de X [0..1]: ");
    scanf(" %lg", &x);
    if (x >= 0 && x <=1)
        printf("Serie: %lg\n", taylor(x));
    else
        printf("Error\n");
}
