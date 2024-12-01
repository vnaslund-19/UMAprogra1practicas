#include <stdio.h>
#include <string.h>

enum
{
    MAX_CHARS = 64
};

int ft_atoi(int maxcars, const char str[maxcars])
{
    int len = strlen(str);
    int res = 0;

    for (int i = 0; i < len; i++)
    {
        res *= 10;
        res += str[i] - '0';
    }

    return (res);
}

void    leer(int maxcars, char str[maxcars])
{
    printf("Introduzca un valor numerico: ");
    scanf(" %63s", str);
}

int main()
{
    char str[MAX_CHARS];

    leer(MAX_CHARS, str);
    printf("Entrada: %s\n", str);
    int res = ft_atoi(MAX_CHARS, str);

    printf("Valor: %d\n", res);
    printf("Doble: %d\n", 2*res);
}