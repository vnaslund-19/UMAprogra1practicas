#include <stdio.h>

int main(void)
{
    int input, sem, di, hor, min, seg, var;

    printf("Introduzca los segundos: ");
    scanf(" %d", &input);
    var = input;

    sem = var / (60 * 60 * 24 * 7);
    var -= sem * (60 * 60 * 24 * 7);
    di = var / (60 * 60 * 24);
    var -= di * (60 * 60 * 24);
    hor = var / (60 * 60);
    var -= hor * (60 * 60);
    min = var / (60);
    var -= min * (60);
    seg = var;


    printf("%d segundos equivalen a [ %d] semanas, %d dias %02d:%02d:%02d\n", input, sem, di, hor, min, seg);
}
