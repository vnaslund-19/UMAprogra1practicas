#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum
{
    MAX_CHARS = 64
};

int buscar(char p1[MAX_CHARS], char p2[MAX_CHARS])
{
    int len1 = strlen(p1);
    int len2 = strlen(p2);
    int pos = -1;

    for (int i = 0; i <= len2 - len1 && pos == -1; i++)
    {
        if (strncmp(p1, &p2[i], len1) == 0)
        {
            pos = i;
        }
    }

    return (pos);
}

void    mostrar(int pos)
{
    if (pos == -1)
    {
        printf("La primera palabra NO es una subcadena contenida en la segunda palabra.\n");
    }
    else
    {
        printf("La primera palabra SI es una subcadena contenida en la segunda palabra, en la posicion %d.\n", pos);
    }
}

int main()
{
    char    p1[MAX_CHARS];
    char    p2[MAX_CHARS];

    printf("Introduzca dos palabras: ");
    scanf(" %63s %63s", p1, p2);

    int pos = buscar(p1, p2);
    mostrar(pos);
}
