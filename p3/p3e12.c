#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num_a_buscar, num;
    printf("Introduzca el numero entero a buscar (distinto de cero): ");
    scanf(" %d", &num_a_buscar);
    printf("Introduzca una secuencia de numeros enteros terminada en cero:\n");
    scanf(" %d", &num);

    bool found = false;
    while (num != 0)
    {
        if (num == num_a_buscar)
            found = true;
        scanf(" %d", &num); // lectura del número a procesar en la siguiente iteración
    }
// ...
}
