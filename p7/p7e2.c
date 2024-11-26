#include <stdio.h>

enum
{
    MAX_CHARS = 63,
    MAX_PED = 20
};

typedef struct Fecha
{
    int d;
    int m;
    int a;
}   Fecha;

typedef struct Pedido
{
    int     cod;
    char    nom[MAX_CHARS + 1];
    double  pre;
    int     can;
    Fecha   fec;
}   Pedido;

typedef struct LPedidos
{
    int nelms;
    Pedido pedidos[MAX_PED];
}   LPedidos;


void    leer_pedido(Pedido *pedido)
{
    printf("\nIntroduzca codigo del producto: ");
    scanf(" %d", &pedido->cod);

    printf("Introduzca nombre del producto: ");
    scanf(" %63[^\n]", pedido->nom);

    printf("Introduzca precio del producto: ");
    scanf(" %lg", &pedido->pre);

    printf("Introduzca cantidad pedida: ");
    scanf(" %d", &pedido->can);

    printf("Introduzca fecha del pedido: ");
    scanf(" %d %d %d", &pedido->fec.d, &pedido->fec.m, &pedido->fec.a);
}

void    leer_pedidos(LPedidos *lpedidos)
{
    printf("Introduzca total de pedidos: ");
    scanf(" %d", &lpedidos->nelms);

    if (lpedidos->nelms > 20)
        lpedidos->nelms = 20;
    else if (lpedidos->nelms < 0)
        lpedidos->nelms = 0;

    for (int i = 0; i < lpedidos->nelms; i++)
    {
        leer_pedido(&lpedidos->pedidos[i]);
    }
}

void    mostrar_pedido(Pedido *pedido)
{
    printf("\nCodigo del producto: %d\n", pedido->cod);

    printf("Nombre del producto: %s\n", pedido->nom);

    printf("Precio del producto: %lg\n", pedido->pre);

    printf("Cantidad pedida: %d\n", pedido->can);

    printf("Fecha del pedido: %d %d %d\n", pedido->fec.d, pedido->fec.m, pedido->fec.a);
}

void    mostrar_pedidos(LPedidos *lpedidos)
{
    printf("\nPedidos:\n");

    for (int i = 0; i < lpedidos->nelms; i++)
    {
        mostrar_pedido(&lpedidos->pedidos[i]);
    }
}

double  calc_precio_total(LPedidos *lpedidos)
{
    double  sum = 0;

    for (int i = 0; i < lpedidos->nelms; i++)
    {
        sum += lpedidos->pedidos[i].pre * lpedidos->pedidos[i].can;
    }
    return (sum);
}

int main()
{
    LPedidos lpedidos;

    leer_pedidos(&lpedidos);
    mostrar_pedidos(&lpedidos);
    printf("\nEl precio total del pedido es: %lg\n", calc_precio_total(&lpedidos));
}
