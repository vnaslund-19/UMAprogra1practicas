#include <stdio.h>
#include <stdbool.h>

int leer_y_contar()
{
    int     dir_changes = 0;
    int     num, prev = 0, current = 0, max = 0;
    bool    rising = false, falling = false, first = true;


    printf("Introduzca sucesion de enteros hasta cero: ");
    scanf(" %d", &num);
    while (num != 0)
    {
        if (prev != 0 && ((rising && num < prev) || (falling && num > prev)))
            dir_changes++;

        if (prev != 0 && num > prev && !rising)
        {
            rising = true;
            falling = false;
            first = false;
        }
        else if (prev != 0 && num < prev && !falling)
        {
            falling = true;
            rising = false;
            if (first)
            {
                dir_changes++;
                first = false;
            }
        }

        if (dir_changes == 2)
        {
            dir_changes = 0;
            current = 2;
        }
        else
            current++;

        if (current > max)
            max = current;

        prev = num;
        scanf(" %d", &num);
    }
    return (max);
}

void    mostrar_resultado(int res)
{
    printf("Mayor Montaña: %d\n", res);
}

int main()
{
    mostrar_resultado(leer_y_contar());
}