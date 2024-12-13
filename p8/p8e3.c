#include <stdio.h>
#include <stdlib.h>

enum
{
    C_IN = 4
};

typedef struct Datos
{
    int     capacidad;
    int     nelms;
    int*    elm;
}   Datos;

void    leer(Datos *datos)
{
    datos->elm = malloc(C_IN * sizeof(int));
    datos->capacidad = C_IN;
    datos->nelms = 0;
    
    printf("Introduzca secuencia de números (negativo para fin): ");
    
    int n;
    scanf(" %d", &n);

    while (n >= 0)
    {
        if (datos->nelms >= datos->capacidad)
        {
            datos->capacidad *= 2;
            datos->elm = realloc(datos->elm, datos->capacidad * sizeof(int));
        }
        datos->elm[datos->nelms] = n;
        ++datos->nelms;
        scanf(" %d", &n);
    }
}

double  calc_media(int  *elm, int nelms)
{
    int sum = 0;

    for (int i = 0; i < nelms; i++)
    {
        sum += elm[i];
    }

    return ((double)sum / nelms);
}

void    calcular(Datos *datos)
{
    double  media = calc_media(datos->elm, datos->nelms);
    int     sum = 0;

    for (int i = 0; i < datos->nelms; i++)
    {
        if (datos->elm[i] >= media)
            sum += datos->elm[i];
    }
    printf("Resultado: %d\n", sum);
}

int main()
{
    Datos datos;

    leer(&datos);
    calcular(&datos);
    free(datos.elm);
}