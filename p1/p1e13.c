#include <stdio.h>

int main(void)
{
    double nt, np, cal;

    printf("Introduzca la nota de teoria: ");
    scanf(" %lg", &nt);

    printf("Introduzca la nota de practicas: ");
    scanf(" %lg", &np);

    cal = nt * 0.7 + np * 0.3;

    printf("La calificacion es: %lg\n", cal);
}
