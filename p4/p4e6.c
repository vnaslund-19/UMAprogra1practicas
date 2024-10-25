#include <stdio.h>
#include <stdbool.h>

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

bool    is_friend(int a, int b)
{
    bool    is_friend = false;
    
    if (sum_of_divisors(a) == b && sum_of_divisors(b) == a)
        is_friend = true;
    return (is_friend);
}

int main()
{
    int l, u;

    printf("Introduzca un intervalo (dos numeros): ");
    scanf(" %d %d", &l, &u);

    if (l > 0 && u > l)
    {
        for (int i = l; i <= u; i++)
        {
            for (int j = i + 1; j <= u; j++)
            {
                if (is_friend(i, j))
                    printf("Amigos: %d, %d\n", i, j);
            }
        }
    }
    else
    {
        printf("Error\n");
    }
}