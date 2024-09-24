#include <stdio.h>

int main(void)
{
    int input, mi, ki, by;

    printf("Introduzca una cantidad de Bytes: ");
    scanf(" %d", &input);

    mi = input / (1024*1024);
    ki = (input / 1024) % 1024;
    by = input % 1024;

    printf("%d Bytes corresponden a;\n\tMibytes = %d\n\tKibytes = %d\n\tBytes = %d\n", input, mi, ki, by);
}
