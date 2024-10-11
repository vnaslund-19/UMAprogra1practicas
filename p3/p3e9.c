#include <stdio.h>

int main()
{
    int o1, o2, res;
    char    c;

    printf("Operacion (+ - * / &): ");
    scanf(" %c", &c);

    while (c != '+' && c != '-' && c != '*' && c != '/' && c != '&')
    {
        printf("ERROR: Operacion no valida\n");
        printf("Operacion (+ - * / &): ");
        scanf(" %c", &c);
    }

    while (c != '&')
    {
        printf("Operando 1: ");
        scanf(" %d", &o1);
        printf("Operando 2: ");
        scanf(" %d", &o2);

        if (c == '+')
            res = o1 + o2;
        else if (c == '-')
            res = o1 - o2;
        else if (c == '*')
            res = o1 * o2;
        else
            res = o1 / o2;
        printf("Resultado:  %d\n", res);

        printf("Operacion (+ - * / &): ");
        scanf(" %c", &c);
        while (c != '+' && c != '-' && c != '*' && c != '/' && c != '&')
        {
            printf("ERROR: Operacion no valida\n");
            printf("Operacion (+ - * / &): ");
            scanf(" %c", &c);
        }
    }
    printf("FIN DEL PROGRAMA\n");
}
