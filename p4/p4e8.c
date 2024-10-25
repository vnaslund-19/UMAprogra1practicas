#include <stdio.h>

void print_n_times(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}

void    print_romb(int n)
{
    int leading_spaces = n - 1;

    for (int i = 1; i <= n; i++)
    {
        print_n_times(' ', leading_spaces);
        leading_spaces--;
        for (int j = 0; j < i - 1; j++)
        {
            printf("* ");
        }
        printf("*");
        printf("\n");
    }

    leading_spaces = 1;
    for (int i = n-1; i > 0; i--)
    {
        print_n_times(' ', leading_spaces);
        leading_spaces++;
        for (int j = 0; j < i - 1; j++)
        {
            printf("* ");
        }
        printf("*");
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Introduzca un numero: ");
    scanf(" %d", &n);

    print_n_times('-', n*2 - 1);
    printf("\n");

    print_romb(n);

    print_n_times('-', n*2 - 1);
    printf("\n");
}
