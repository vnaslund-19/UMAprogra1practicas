#include <stdio.h>
#include <stdlib.h>

typedef struct Datos
{
    int     nelms;
    int*    elm;
}   Datos;

void    leer(Datos *datos)
{
    printf("Introduzca total de números: ");
    scanf("%d", &datos->nelms);

    datos->elm = malloc(datos->nelms * sizeof(int));
    
    printf("Introduzca %d números: ", datos->nelms);
    for (int i = 0; i < datos->nelms; i++)
    {
        scanf(" %d", &datos->elm[i]);
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