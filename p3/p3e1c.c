#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("Introduzca un numero: ");

    scanf(" %d", &n);
    
    if (n < 0)
        printf("Error.\n");
    else
    {
        int i = 0;
        do 
            sum += i++;
        while (i <= n);
        printf("La suma es: %d\n", sum);
    }
}