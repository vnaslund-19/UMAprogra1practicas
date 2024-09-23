const double PI = 3.1416; 

#include <stdio.h>

int main(void)
{
    double  val_deg, val_rad;

    printf("Introduzca el angulo (grados): ");
    scanf("%lg", &val_deg);

    val_rad = val_deg / (180/PI);
    printf("El angulo en radianes es: %lg\n", val_rad);
}