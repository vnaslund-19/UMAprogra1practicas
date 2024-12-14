#include <stdio.h>
#include <stdlib.h>

enum
{
    MAXCARS = 16
};

void    mostrar_buffer(int szbytes, const void* buffer)
{
    printf("[ ");

    const char* fin = (const char*)buffer + szbytes;
    for (const char *p = buffer; p < fin - 1; ++p)
    {
        printf("%#hhx, ", *p);
    }
    printf("%#hhx ]\n", *(fin - 1));
}

void    cifrar_buffer(int clave, int szbytes, void* dst, const void* org)
{
    const char* fin = (const char*)org + szbytes;
    char *d = dst;

    for (const char *p = org; p < fin; ++p)
    {
        *d = *p + clave;
        ++d;
    }
}

void    descifrar_buffer(int clave, int szbytes, void* dst, const void* org)
{
    const char* fin = (const char*)org + szbytes;
    char *d = dst;

    for (const char *p = org; p < fin; ++p)
    {
        *d = *p - clave;
        ++d;
    }
}

void    prueba_1()
{
    printf("----------------------------------\n");
    printf("-- Prueba-1 ----------------------\n");
    printf("----------------------------------\n");

    int clave;
    printf("Introduce clave: ");
    scanf(" %d", &clave);

    char texto[MAXCARS] = {};
    printf("Introduce texto: ");
    scanf(" %15[^\n]", texto);
    
    printf("Texto original:    %s\n", texto);
    printf("Buffer original:   ");
    mostrar_buffer(MAXCARS, texto);

    char    buffer1[MAXCARS];

    cifrar_buffer(clave, MAXCARS, buffer1, texto);
    printf("Buffer cifrado:    ");
    mostrar_buffer(MAXCARS, buffer1);

    char    buffer2[MAXCARS];
    descifrar_buffer(clave, MAXCARS, buffer2, buffer1);
    printf("Buffer descifrado: ");
    mostrar_buffer(MAXCARS, buffer2);
    printf("Texto descifrado:  %s\n", buffer2);
}

void    prueba_2()
{
    printf("----------------------------------\n");
    printf("-- Prueba-2 ----------------------\n");
    printf("----------------------------------\n");

    int clave;
    printf("Introduce clave: ");
    scanf(" %d", &clave);

    int nelms;
    printf("Introduce número de elementos: ");
    scanf(" %d", &nelms);

    if (nelms > 0)
    {
    int buff_size = nelms * sizeof(int);

    int *arr = calloc(nelms, sizeof(int));
    printf("Introduce %d numeros: ", nelms);
    
    for (int *p = arr; p < arr + nelms; ++p)
    {
        scanf(" %d", p);
    }

    printf("Datos originales:  ");
    printf("[ ");

    for (int *p = arr; p < arr + nelms - 1; ++p)
    {
        printf("%d, ", *p);
    }
    printf("%d ]\n", *(arr + nelms - 1));

    printf("Buffer original:   ");
    mostrar_buffer(buff_size, arr);

    int    *buffer1 = malloc(buff_size);

    cifrar_buffer(clave, buff_size, buffer1, arr);
    free(arr);
    printf("Buffer cifrado:    ");
    mostrar_buffer(buff_size, buffer1);

    int    *buffer2 = malloc(buff_size);
    descifrar_buffer(clave, buff_size, buffer2, buffer1);
    free(buffer1);
    printf("Buffer descifrado: ");
    mostrar_buffer(buff_size, buffer2);
    
    printf("Datos descifrados: ");
    printf("[ ");
    
    for (int *p = buffer2; p < buffer2 + nelms - 1; ++p)
    {
        printf("%d, ", *p);
    }
    printf("%d ]\n", *(buffer2 + nelms - 1));
    free(buffer2);
    }
}

int main()
{
    prueba_1();
    prueba_2();
    printf("----------------------------------\n");
}

