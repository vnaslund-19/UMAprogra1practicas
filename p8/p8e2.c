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
    for (int *p = datos->elm; p < datos->elm + datos->nelms; ++p)
    {
        scanf(" %d", p);
    }
}

double  calc_media(int *elm, int nelms)
{
    int sum = 0;

    for (int *p = elm; p < elm + nelms; ++p)
    {
        sum += *p;
    }

    return ((double)sum / nelms);
}

void    calcular(Datos *datos)
{
    double  media = calc_media(datos->elm, datos->nelms);
    int     sum = 0;

    for (int *p = datos->elm; p < datos->elm + datos->nelms; ++p)
    {
        if (*p >= media)
            sum += *p;
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