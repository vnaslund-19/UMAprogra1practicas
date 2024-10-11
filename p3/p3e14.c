#include <stdio.h>

const int NUM_TO_FIND = 12;

int main()
{
    int num, prim = 0, ult = 0, pos = 1;

    printf("Introduzca una secuencia de números terminada en cero:\n");
    scanf(" %d", &num);

    while (num != 0)
    {
        if (num == NUM_TO_FIND)
        {
            if (prim == 0)
                prim = pos;
            ult = pos;
        }
        pos++;
        scanf(" %d", &num); 
    }
    printf("Primera posicion: %d\nUltima posicion: %d\n", prim, ult);
}