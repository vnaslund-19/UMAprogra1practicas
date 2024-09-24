#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool ok = (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0);
    printf("Resultado de (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0): %d ERROR\n", ok);
}
// El número de bits utilizado para representar la parte fraccionaria de los
// números reales es limitado. Implica una representación aproximada y una pérdida de precisión.