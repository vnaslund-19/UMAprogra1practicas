#include <stdio.h>

const double pImp = 0.5;
const double sImp = 0.35;
const double uImp = 0.25;

int main()
{
    printf("Introduzca el consumo del contador: ");

    int con;
    double totImp = 1;

    scanf(" %d", &con);

    if (con > 250)
        totImp += (con - 250) * uImp + 150 * sImp + 100 * pImp;
    else if (con > 100)
        totImp += (con - 100) * sImp + 100 * pImp;
    else
        totImp += con * pImp;

    printf("Consumo: %d Kwh. Importe: %lg €\n", con, totImp);
}
