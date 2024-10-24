#include <stdio.h>

int sum_of_divisors(int n)
{
    int sum = 0;
    
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return (sum);
}

int main()
{
    int a, b;

    printf("Introduzca dos numeros: ");
    scanf(" %d %d", &a, &b);

    printf("El resultado es: %d y %d ", a, b);
    if (sum_of_divisors(a) == b && sum_of_divisors(b) == a)
        printf("son amigos\n");
    else
        printf("no son amigos\n");
}