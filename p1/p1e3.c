#include <stdio.h>

int main(void)
{
    int     val1, val2;

    printf("Introduzca un número entero: ");
    scanf("%d", &val1);
    printf("Introduzca otro número entero: ");
    scanf("%d", &val2);

    printf("El valor del primer número introducido es: %d\n", val1);
    printf("El valor del segundo número introducido es: %d\n", val2);
}

// Si se introduce algo no numerico el scanf no interpreta el resultado y deja la informacion en el buffer
// luego se leen los bits y se interpretan como un numero