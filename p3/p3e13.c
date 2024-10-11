#include <stdio.h>

int main()
{
    int num, max, min, sum = 0, read = 0;
    printf("Introduzca una secuencia de números (separados por espacios) terminada en cero:\n");
    scanf(" %d", &num);
    if (num == 0)
        printf("Secuencia vacia\n");
    else
    {
        max = min = num;
        while (num != 0) 
        {
            if (num > max)
                max = num;
            if (num < min)
                min = num;
            sum += num;
            read++;
            scanf(" %d", &num);
        }
        printf("Mayor: %d\nMenor: %d\nMedia: %lg\n", max, min, (double)sum / read);
    }
}