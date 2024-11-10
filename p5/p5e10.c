#include <stdio.h>
#include <stdbool.h>

int leer_y_contar()
{
    char    c1 = '1', c2;
    int     count = 0, max = 0;

    printf("Introduzca sucesion de ceros y unos hasta punto: ");
    scanf(" %c", &c2);
    while (c2 != '.')
    {
        if (c1 == '1' && c2 == '0')
            count = 1;
        else
            ++count;

        if (count > max)
            max = count;
        c1 = c2;
        scanf(" %c", &c2);
    }
    return (max);
}

void    mostrar_resultado(int res)
{
    printf("Mayor subsucesion ordenada: %d\n", res);
}

int main()
{
    mostrar_resultado(leer_y_contar());
}