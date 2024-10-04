#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x, y, z;

    printf("Introduzca tre numeros enteros: ");
    scanf(" %d %d %d", &x, &y, &z);

    printf("expr_1: %d\n", ! (x > y) && (x < z));
    printf("expr_2: %d\n", ! ((x > y) && (x < z)));
    printf("expr_3: %d\n", ! ((x == y) || (x != z)));
    printf("expr_4: %d\n", ! ((x == y) || ((x < y) && (x > z))));
    printf("expr_5: %d\n", (x == y) || (((x < y) && (x > z)) == false));
    printf("expr_6: %d\n", ((x != y) && (y < z)) || (((x == y) || (x > z)) != true));
    printf("simpl_1: %d\n", (x <= y) && (x < z));
    printf("simpl_2: %d\n", ((x <= y) || (x >= z)));
    printf("simpl_3: %d\n", ((x != y) && (x == z)));
    printf("simpl_4: %d\n", ((x != y) && ((x >= y) || (x <= z))));
    printf("simpl_5: %d\n", (x == y) || (((x >= y) || (x <= z))));
    printf("simpl_6: %d\n", ((x != y) && (y < z)) || (((x != y) && (x <= z))));
}
