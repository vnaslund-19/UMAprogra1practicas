#include <stdio.h>

int main()
{
    int n, prev_num = 0, prev_num2 = 0, tmp;

    printf("Introduzca N: ");
    scanf(" %d", &n);

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", prev_num + prev_num2);
            if (i == 1)
                prev_num2 = 1;
            else
            {
                tmp = prev_num;
                prev_num += prev_num2;
                prev_num2 = tmp;
            }
        }
    }
    else
    {
        printf("Secuencia de fibonacci vacia");
    }
    printf("\n");
}
