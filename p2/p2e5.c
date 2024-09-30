#include <stdio.h>

int main(void)
{
    char c;

    printf("Introduzca un carácter: ");

    scanf(" %c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("Es letra\n");
    else if (c == '.')
        printf("Es punto\n");
    else
        printf("Error\n");
}