#include <stdio.h>
#include <stdbool.h>

int main()
{
//--------------------------------
    int num11 = 9527;
    int num12 = 15937;
    double res1a = num11 * num12;
    double num13 = 1.0;
    int res1i = num11 * num12 * num13;
    double res1d = num11 * num12 * num13;
    printf("Valor de número11 (int): %d\n", num11);
    printf("Valor de número12 (int): %d\n", num12);
    printf("Valor de número13 (double): %lf\n", num13);
    printf("Resultado (double) (num11 * num12): %lf CORRECTO\n", res1a);
    printf("Resultado (int) (num11 * num12 * num13): %d CORRECTO\n", res1i);
    printf("Resultado (double) (num11 * num12 * num13): %lf CORRECTO\n", res1d);
    //--------------------------------
    int num21 = 9527;
    int num22 = 15937;
    float res2a = num21 * num22;
    float num23 = 1.0;
    int res2i = num21 * num22 * num23;
    double res2d = num21 * num22 * num23;
    printf("Valor de número21 (int): %d\n", num21);
    printf("Valor de número22 (int): %d\n", num22);
    printf("Valor de número23 (float): %f\n", num23);
    printf("Resultado (float) (num21 * num22): %f ERROR\n", res2a);
    printf("Resultado (int) (num21 * num22 * num23): %d ERROR\n", res2i);
    printf("Resultado (double) (num21 * num22 * num23): %lf ERROR\n", res2d);
//-------------------------------
}
/*
El tipo float no puede representar a todos los valores del tipo int.
El tipo float sólo utiliza 32 bits para representar los números en formato de punto
flotante, de los cuales, se utilizan 8 bits para el exponente, y 24 bits para la mantisa.
El tipo int utiliza también 32 bits en formato complemento-a-dos para representar los
números enteros.
Por lo tanto, los 24 bits de la mantisa del tipo float no son suficientes para representar
a todos los numeros enteros de tipo int, ya que son necesarios 32 bits, por lo que se
produce una pérdida de precisión en la conversión entre numeros de tipo int y números
de tipo float. El número 16777215 es el mayor número int que puede representar el
tipo float sin pérdida de precisión.
*/