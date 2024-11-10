#include <stdio.h>
#include <stdbool.h>

void    mostrar_mount(int res)
{
    printf("Mayor Montaña: %d\n", res);
}

void    mostrar_valle(int res)
{
    printf("Mayor Valle: %d\n", res);
}

void leer_y_contar()
{
    //int     neg_dir_changes = 0, pos_dir_changes;
    int     num, prev = 0, mount = 0, max_mount = 0, valle = 0, max_valle = 0;
    bool    rising = false, falling = false, first = true;


    printf("Introduzca sucesion de enteros hasta cero: ");
    scanf(" %d", &num);
    while (num != 0)
    {
        if (prev != 0 && num > prev && !rising)
        {
            rising = true;
            falling = false;
            if (first)
            {
                first = false;
            }
            else
            {
                mount = 1;
            }
        }
        else if (prev != 0 && num < prev && !falling)
        {
            falling = true;
            rising = false;
            if (first)
            {
                first = false;
            }
            else
            {
                valle = 1;
            }        
        }

        mount++;
        valle++;

        if (mount > max_mount)
            max_mount = mount;
        if (valle > max_valle)
            max_valle = valle;

        prev = num;
        scanf(" %d", &num);
    }
    mostrar_mount(max_mount);
    mostrar_valle(max_valle);
}

int main()
{
    leer_y_contar();
}