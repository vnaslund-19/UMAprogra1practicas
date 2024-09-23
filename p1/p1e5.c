const double PI = 3.1416; 

#include <stdio.h>

int main(void)
{
    int     deg, min, sec;
    double  res;
    printf("Introduzca el angulo (grados minutos segundos): ");
    scanf("%d %d %d", &deg, &min, &sec);

    res = deg / (180/PI) + min / (180/PI * 60) + sec / (180/PI * 60 * 60);
    printf("El angulo en radianes es: %lg\n", res);
}