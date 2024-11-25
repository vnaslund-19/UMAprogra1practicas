#include <stdio.h>
#include <stdbool.h>

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

int encontrar_mayor_que_minimo(int nelms, const int arr[nelms])
{
    int min = arr[0];
    int mayor = 0;
    bool    encontrado = false;
    
    for (int i = 0; i < nelms && !encontrado; i++)
    {
        if (arr[i] > min)
        {
            mayor = arr[i];
            encontrado = true;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    if (encontrado == false)
    {
        mayor = arr[0];
    }
    return (mayor);
}

int main()
{
    int arr[NELMS];
    leer(NELMS, arr);

    int resultado = encontrar_mayor_que_minimo(NELMS, arr);
    printf("El elemento %d es mayor que el mínimo de la lista\n", resultado);
}
