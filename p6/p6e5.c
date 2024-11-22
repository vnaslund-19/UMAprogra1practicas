#include <stdio.h>

enum
{
    NELMS = 10
};

void    leer(int nelms, int arr[nelms])
{
    printf("Introduzca 10 numeros enteros: ");

    for (int i = 0; i < nelms; i++)
    {
        scanf(" %d", &arr[i]);
    }
}

int    buscar(int nelms, const int arr[nelms], int num)
{
    int pos = -1;

    for (int i = 0; i < nelms && pos == -1; i++)
    {
        if (arr[i] == num)
            pos = i;
    }

    return (pos);
}


int main()
{
    int arr[NELMS];
    int num;

    printf("Introduzca el numero a buscar: ");
    scanf(" %d", &num);
    leer(NELMS, arr);

    int pos = buscar(NELMS, arr, num);
    if (pos == -1)
    {
        printf("El numero %d NO esta en la coleccion\n", num);
    }
    else
    {
        printf("El numero %d SI esta en la coleccion, en la posicion %d\n", num, pos);
    }
}
