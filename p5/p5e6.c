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

int fact_dec_2(int n)
{
    int res = 1;

    for (int i = n; i > 1; i -= 2)
    {
        res *= i;
    }
    return (res);
}

double calc(double x, int div)
{
    return ((ft_pow(x, div) * fact_dec_2(div - 2)) / (fact_dec_2(div - 1) * div));
}

double  taylor(double x)
{
    double res = x, val = 1;

    for (int div = 3; val >= 0.001; div += 2)
    {
        val = calc(x, div);
        res += val;
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

