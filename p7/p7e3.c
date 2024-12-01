#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum
{
    MAX_CHARS = 64
};

bool es_vocal(char c) 
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void    eliminar_vocales(int maxcars, char texto[maxcars])
{
    int len = strlen(texto);
    int last_added = -1;

    for (int i = 0; i < len; i++)
    {
        if (!es_vocal(texto[i]))
        {
            ++last_added;
            texto[last_added] = texto[i];
        }
    }
    texto[last_added + 1] = '\0';
}

int main()
{
    char    texto[MAX_CHARS];

    printf("Introduzca un texto: ");
    scanf(" %63[^\n]s", texto);
    printf("Texto original: %s\n", texto);
    eliminar_vocales(MAX_CHARS, texto);
    printf("Texto resultado: %s\n", texto);
}