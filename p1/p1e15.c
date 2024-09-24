#include <stdio.h>

int main(void)
{
    char d1, d2, d3;
    int  num, num_x_2;

    printf("Introduzca un número entero (100 <= x < 500): ");
    scanf(" %d", &num);

    num_x_2 = num * 2;
    d1 = '0' + num_x_2/100;
    d2 = '0' + ((num_x_2/10) % 10);
    d3 = '0' + num_x_2 % 10;

    printf("Número: %d\n", num);
    printf("Doble: %d\n", num_x_2);

    printf("Digito 1: %c\n", d1);
    printf("Digito 2: %c\n", d2);
    printf("Digito 3: %c\n", d3);
}