// Diseñe un programa que lea del teclado una cantidad de pesetas y muestra en
// pantalla su equivalente en euros, sabiendo que 1 euro equivale a 166.386 pts.

const double euro_coefficient = 166.386; 

#include <stdio.h>

int main(void)
{
    int     val_pes;
    double  val_eur;

    printf("Introduzca la cantidad de pesetas: ");
    scanf("%d", &val_pes);

    val_eur = val_pes/euro_coefficient;
    printf("%d pesetas equivalen a %lf euros\n", val_pes, val_eur);
}