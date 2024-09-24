
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1, num2;
    printf("Introduzca el primer número entero: ");
    scanf(" %d", &num1);
    printf("Introduzca el segundo número entero: ");
    scanf(" %d", &num2);
    int suma = num1 + num2;
    printf("Primer número: %d\n", num1);
    printf("Segundo número: %d\n", num2);
    printf("Resultado (num1 + num2): %d\n", suma);
}

// El rango del int es de -2147483648 a 2147483647, por eso hay comportamiento raro