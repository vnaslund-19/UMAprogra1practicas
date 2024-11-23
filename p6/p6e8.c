#include <stdio.h>

void    leer_y_procesar(int nelms, int arr[nelms])
{
    printf("Introduzca una secuencia de numeros (hasta negativo): ");

    int num;
    scanf(" %d", &num);

    while (num >= 0)
    {
        if (num <= 9)
        {
            ++arr[num];
        }
        scanf(" %d", &num);
    }
}

int  buscar_mayor(int nelms, const int lista[nelms])
{
    int  max = lista[0];
    for (int i = 1; i < nelms; i++)
    {
        if (lista[i] > max)
        {
            max = lista[i];
        }
    }
    return (max);
}

void    mostrar(int nelms, const int arr[nelms])
{
    printf("-------------------\n");

    int max = buscar_mayor(nelms, arr);

    for (int i = max; i > 0; i--)
    {
        for (int j = 0; j < nelms; j++)
        {
            if (arr[j] >= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("-------------------\n");
    printf("0 1 2 3 4 5 6 7 8 9\n");
}

void    init_int_arr(int nelms, int arr[nelms])
{
    for (int i = 0; i < nelms; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    int arr[10];

    init_int_arr(10, arr);
    leer_y_procesar(10, arr);
    mostrar(10, arr);
}
