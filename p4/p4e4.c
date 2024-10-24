#include <stdio.h>
#include <stdbool.h>

bool    is_perfect(int n)
{
    int sum = 0;
    
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return (n == sum);
}

int main(void)
{
    int num, perf = 0;

    printf("Introduce valor inicial: ");
    scanf(" %d", &num);

    for (int i = num; perf == 0; i++)
    {
        if (is_perfect(i))
            perf = i;
    }
    printf("Numero perfecto: %d\n", perf);
}