#include <stdio.h>

int main(void)
{
    int num;
    printf("dame un numeros y te dire si es positivo, negativo o nulo, es decir cero\n");
    scanf("%i", &num);
    if (num == 0)
    {
        printf("El valor es nulo(0)\n");
    }
    else
    {
        if (num > 0)
        {
            printf("El valor es positivo\n");
        }
        else
        {
            printf("El valor es negativo\n");
        }
    }
}