#include <stdio.h>

enum
{
    NELMS = 10
};

void leer(int nelms, int arr[nelms])
{
    printf("Introduzca 10 números enteros: ");
    for (int i = 0; i < nelms; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void invertir_arr(int nelms, int arr[nelms])
{
    for (int i = 0; i < nelms/2; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[nelms - 1 - i];
        arr[nelms - 1 - i] = tmp;
    }
}

void    mostrar(int nelms, int arr[nelms])
{
    for (int i = 0; i < nelms; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[NELMS];
    leer(NELMS, arr);
    printf("Esos numeros en orden original son:");
    mostrar(NELMS, arr);
    invertir_arr(NELMS, arr);
    printf("Esos numeros en orden inverso son:");
    mostrar(NELMS, arr);
    invertir_arr(NELMS, arr);
    printf("Esos numeros en orden original son:");
    mostrar(NELMS, arr);
}
