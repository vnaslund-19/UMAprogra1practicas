#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Introduzca un numero: ");
        scanf(" %d", &n);
    }
    while (n <= 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
                printf("x");
            else
                printf("o");
        }
        printf("\n");
    }
}