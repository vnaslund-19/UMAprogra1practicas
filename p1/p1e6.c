#include <stdio.h>

int main(void)
{
    double  salary, bruto;
    int     years;

    printf("Introduzca Sueldo Base y Antigüedad: ");
    scanf("%lg %d", &salary, &years);

    bruto = salary + 60 * (years / 5) + 6 * (years % 5);
    printf("El salario bruto es: %lg\n", bruto);
    printf("El salario neto es: %lg\n", bruto * 0.75);
}
