#include <stdio.h>

int main()
{
    int cod, prov, op, cont;

    printf("Introduzca el codigo numerico de 4 digitos: ");
    scanf(" %d", &cod);

    if (cod >= 1000 && cod <= 9999)
    {
        prov = cod / 1000;
        cont = cod % 10;

        cod -= cont;
        cod /= 10;

        op = cod % 100;

        printf("Provincia: %d\n", prov);
        printf("Numero de operacion: %d\n", op);
        printf("Digito de control: %d\n", cont);
        printf("Comprobacion: ");
        if ((op * prov) % 10 == cont)
            printf("correcto\n");
        else
            printf("error\n");
    }
    else
        printf("Codigo erroneo\n");
}
