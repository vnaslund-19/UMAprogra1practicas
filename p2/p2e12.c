#include <stdio.h>

int main()
{
    int n1, n2;
    char c;

    printf("Introduzca dos numeros enteros: ");
    scanf(" %d %d", &n1, &n2);

    printf("Introduzca un caracter: ");
    scanf(" %c", &c);

    printf("(01) %d es par: %d\n", n1, n1 % 2 == 0);
    printf("(02) %d tiene tres digitos: %d\n", n1, n1 >= 100 && n1 <= 999);
    printf("(03) %d es divisor de 100: %d\n", n1, 100 % n1 == 0);
    printf("(04) %d pertenece a { 3, 4, 5, 6, 7 }: %d\n", n1, n1 >= 3 && n1 <= 7);
    printf("(05) %d pertenece a { 1, 2, 3, 7, 8, 9 }: %d\n", n1, (n1 >= 1 && n1 <= 3) || (n1 >= 7 && n1 <= 9));
    printf("(06) %d pertenece a { 1, 3, 5, 7, 9 }: %d\n", n1, n1 >= 1 && n1 <= 9 && n1 % 2 == 1);
    printf("(07) %d pertenece a { 2, 5, 6, 7, 8, 9 }: %d\n", n1, (n1 >= 5 && n1 <= 9) || n1 == 2);
    printf("(08) %d pertenece a { 3, 4, 6, 8, 9 }, %d pertenece a { 6, 7, 8, 3 }: %d\n", n1, n2, (n1 == 3 || n1 == 4 || n1 == 6 || n1 == 8 || n1 == 9) && (n2 == 6 || n2 == 7 || n2 == 8 || n2 == 3));
    printf("(09) Ni %d ni %d sean mayores que 10: %d\n", n1, n2, n1 <= 10 && n2 <= 10);
    printf("(10) %d no sea multiplo de %d: %d\n", n1, n2, 7 % 3 != 0);
    printf("(11) %c es una letra mayuscula: %d\n", c, c >= 'A' && c <= 'Z');
    printf("(12) %c es una letra: %d\n", c, (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
    printf("(12) %c es alfanumerico: %d\n", c, (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || ((c >= '0') && (c <= '9')));
}
