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

void    mostrar(int nelms, const int arr[nelms])
{
    printf("La frecuencia de cada digito es:\n");

    for (int i = 0; i < nelms; i++)
    {
        printf("%d: %d\n", i, arr[i]);
    }
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
