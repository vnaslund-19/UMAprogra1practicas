#include <stdio.h>

int main(void)
{
    int uni;
    double  p1, pf;

    printf("Introduzca la cantidad de unidades adquiridas: ");
    scanf(" %d", &uni);

    printf("Introduzca el precio de una unidad: ");
    scanf(" %lg", &p1);

    pf = uni * p1 * 1.12;

    if (pf > 300)
    {
        printf("Se aplica descuento del 5%%\n");
        printf("El precio total a pagar es: %lg\n", pf * 0.95);
    }
    else
        printf("El precio total a pagar es: %lg\n", pf);
}