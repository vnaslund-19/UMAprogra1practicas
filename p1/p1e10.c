#include <stdio.h>

int main(void)
{
    int h1, m1, h2, m2, tot1, tot2, d;

    printf("Introduzca primer instante (horas y minutos): ");
    scanf(" %d %d", &h1, &m1);

    printf("Introduzca segundo instante (horas y minutos): ");
    scanf(" %d %d", &h2, &m2);

    tot1 = h1 * 60 + m1;
    tot2 = h2 * 60 + m2;

    d = tot2 - tot1;

    printf("La diferencia es: %d horas y %d minutos\n", d / 60, d % 60);
}
