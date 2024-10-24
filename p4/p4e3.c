#include <stdio.h>
#include <stdbool.h>

bool    is_prime(int n)
{
    bool prime = true;

    for (int i = 2; (prime == true) && (i < n); i++)
    {
        if (n % i == 0)
            prime = false;
    }
    return (prime);
}

int main(void)
{
    int count = 0, num;

    printf("Introduzca un número: ");
    scanf(" %d", &num);

    printf("El resultado es: ");
    for (int i = 2; count < num; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
}