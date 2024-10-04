#include <stdio.h>

int main()
{
    int n, p;

    printf("Introduzca la cantidad: ");
    scanf(" %d", &n);

    switch (n)
    {
        case 1:
            p = 100;
            break;
        case 2:
            p = 2 * 95;
            break;
        case 3:
            p = 3 * 90;
            break;
        default:
            p = n * 85;
            break;
    }
    printf("El importe es: %d\n", p);
}
