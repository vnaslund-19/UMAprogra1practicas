#include <stdio.h>
#include <stdbool.h>

bool    x_max(int num, int onum, int onum2)
{
    return (num > onum && num > onum2);
}

bool    x_min(int num, int onum, int onum2)
{
    return (num < onum && num < onum2);
}

bool    leer_y_comprobar()
{
    bool    zigzag = true;
    int     n1 = 0, n2 = 0, n3;

    printf("Introduzca una secuencia de numeros: ");
    scanf(" %d", &n3);
    while (n3 != 0)
    {
        if (n2 != 0 && n1 != 0)
        {
            if (!x_max(n2, n1, n3) && !x_min(n2, n1, n3))
                zigzag = false;
        }
        n1 = n2;
        n2 = n3;
        scanf(" %d", &n3);
    }

    if (n2 == 0 || n1 == n2)
        zigzag = false;

    return (zigzag);
}

void    mostrar_resultado(bool res)
{
    printf("La secuencia introducida ");

    if (res)
        printf("SI");
    else
        printf("NO");

    printf(" es en zigzag\n");
}

int main()
{
    bool    res = leer_y_comprobar();
    mostrar_resultado(res);
}