#include <stdio.h>

int main()
{
    char c;
    int tot = 0;
    printf("Introduzca el texto terminado en un punto:\n");
    scanf("%c", &c); // lectura del primer carácter

    while (c != '.')
    {
        printf("%d ", c);
        scanf("%c", &c);
        tot++;
    }
    printf("\nNumero de caracteres leidos: %d\n", tot);
}
