#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("Introduzca tres números enteros: ");

    scanf(" %d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
        printf("El numero mayor es: %d\n", n1);
    else if (n2 > n1 && n2 > n3)
        printf("El numero mayor es: %d\n", n2);
    else if (n3 > n1 && n3 > n2)
        printf("El numero mayor es: %d\n", n3);
    else
        printf("No existe un único número mayor\n");
}