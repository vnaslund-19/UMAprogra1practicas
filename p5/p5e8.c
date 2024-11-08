#include <stdio.h>
#include <stdbool.h>

bool    encontrar_abc()
{
    bool    found = false;
    char    c;
    int     count = 0;

    printf("Introduzca una frase hasta punto: ");
    scanf(" %c", &c);
    while (c != '.')
    {
        if (count == 0 && c == 'a')
            count++;
        else if (count == 1 && c == 'b')
            count++;
        else if (count == 2 && c == 'c')
            found = true;
        else
            count = 0;
        scanf(" %c", &c);
    }

    return (found);
}

void    mostrar_resultado(bool found)
{
    printf("La secuencia 'abc' ");

    if (found)
        printf("SI");
    else
        printf("NO");

    printf(" aparece en la frase de entrada\n");
}

int main()
{
    bool    res = encontrar_abc();
    mostrar_resultado(res);
}