#include <stdio.h>

enum
{
    NELMS = 10
};

void leer(int nelms, int arr[nelms])
{
    printf("Introduzca 10 números enteros (al menos dos iguales y dos distintos):\n");
    for (int i = 0; i < nelms; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int encontrar_minimo(int nelms, const int arr[nelms])
{
    int min = arr[0];
    for (int i = 1; i < nelms; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int encontrar_mayor_que_minimo(int nelms, const int arr[nelms])
{
    int min = encontrar_minimo(nelms, arr);
    for (int i = 0; i < nelms; i++)
    {
        if (arr[i] > min)
        {
            return arr[i];
        }
    }
    return -1; 
}

int main()
{
    int arr[NELMS];
    leer(NELMS, arr);

    int resultado = encontrar_mayor_que_minimo(NELMS, arr);
    if (resultado != -1)
    {
        printf("El elemento %d es mayor que el mínimo de la lista\n", resultado);
    }
    else
    {
        printf("No se encontró ningún elemento mayor que el mínimo. Verifique las condiciones del array.\n");
    }
}
