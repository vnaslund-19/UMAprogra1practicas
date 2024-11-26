#include <stdio.h>

enum
{
    MAX_CHARS = 63
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

void    leer_pedido(Pedido *pedido)
{
    printf("Introduzca codigo del producto: ");
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

void    mostrar_pedido(Pedido *pedido)
{
    printf("\nCodigo del producto: %d\n", pedido->cod);

    printf("Nombre del producto: %s\n", pedido->nom);

    printf("Precio del producto: %lg\n", pedido->pre);

    printf("Cantidad pedida: %d\n", pedido->can);

    printf("Fecha del pedido: %d %d %d\n", pedido->fec.d, pedido->fec.m, pedido->fec.a);
}

int main()
{
    Pedido pedido;

    leer_pedido(&pedido);
    mostrar_pedido(&pedido);
    printf("\nEl precio total del pedido es: %lg\n", pedido.pre * pedido.can);
}
