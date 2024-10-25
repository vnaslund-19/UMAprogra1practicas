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
    int num = line % 10 - 1;

    for (int i = 1; i <= line; i++)
    {
        num = (num + 1) % 10;
        printf("%d", num);
    }

    for (int i = line - 1; i > 0; i--)
    {
        num--;
        if (num < 0)
        {
            num = 9;
        }
        printf("%d", num);
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

    printf("Introduzca numero de filas: ");
    scanf(" %d", &n);

    print_n_times('-', n*2 - 1);
    printf("\n");

    print_num_triangle(n);

    print_n_times('-', n*2 - 1);
    printf("\n");
}

