#include <stdio.h>

int main(void)
{
    char c1, c2, c3;
    int  num, d1, d2, d3;

    printf("Introduzca tres dígitos: ");
    scanf(" %c %c %c", &c1, &c2, &c3);

    d1 = c1 - '0';
    d2 = c2 - '0';
    d3 = c3 - '0';

    num = d1 * 100 + d2 * 10 + d3;
    printf("valor númerico: %d\n", num);
    printf("valor doble: %d\n", num * 2);
}
