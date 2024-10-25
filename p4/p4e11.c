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

int main()
{
    int n;

    printf("Introduce un numero (>1): ");
    scanf(" %d", &n);

    printf("Los divisores primos de %d son: ", n);
    for (int i = 2; n != 1; i++)
    {
        while (is_prime(i) && n%i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
}
