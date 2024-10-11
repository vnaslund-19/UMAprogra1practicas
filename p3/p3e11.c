#include <stdio.h>

int main()
{
    char c;
    int com = 0, tot = 0;
    printf("Introduzca un texto hasta punto: ");
    scanf("%c", &c); // lectura del primer carácter

    while (c != '.')
    {
        if (c == ',')
        {
            com++;
        }
        scanf("%c", &c);
        tot++;
    }
    printf("\nCuenta de caracteres: %d. Cuenta de comas: %d\n", tot, com);
}
