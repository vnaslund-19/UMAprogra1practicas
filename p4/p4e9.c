#include <stdio.h>

void print_n_times(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}

void    print_num_line(int line)
{
    for (int i = 1; i <= line; i++)
    {
        printf("%d", i);
    }

    for (int i = line - 1; i > 0; i--)
    {
        printf("%d", i);
    }
}

void    print_num_triangle(int n)
{
    int leading_spaces = n - 1;

    for (int i = 1; i <= n; i++)
    {
        print_n_times(' ', leading_spaces);
        leading_spaces--;
        print_num_line(i);
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Introduzca el numero de filas (menor de 10): ");
    scanf(" %d", &n);

    while (n < 0 || n > 9)
    {
        printf("Error. Introduzca el numero de filas (menor de 10): ");
        scanf(" %d", &n);
    }

    print_n_times('-', n*2 - 1);
    printf("\n");

    print_num_triangle(n);

    print_n_times('-', n*2 - 1);
    printf("\n");
}
