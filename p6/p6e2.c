#include <stdio.h>

enum
{
    MAX_ELEMS = 5
};

double  buscar_mayor(int nelms, const double lista[nelms])
{
    double  max = lista[0];
    for (int i = 1; i < nelms; i++)
    {
        if (lista[i] > max)
        {
            max = lista[i];
        }
    }
    return (max);
}

void    leer(int nelms, double lista[nelms])
{
    printf("Introduzca 5 numeros: ");

    for (int i = 0; i < nelms; i++)
    {
        scanf(" %lg", &lista[i]);
    }
}

void    mostrar(int nelms, const double lista[nelms])
{
    printf("El mayor elemento de la lista es: %lg\n", buscar_mayor(nelms, lista));

    printf("Lista:");
    for (int i = 0; i < nelms; i++)
    {
        printf(" %lg", lista[i]);
    }
    printf("\n");
}

int main()
{
    double  arr[MAX_ELEMS];
    leer(MAX_ELEMS, arr);
    mostrar(MAX_ELEMS, arr);
}
