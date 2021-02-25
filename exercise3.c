#include <stdio.h>

int main(void)
{
    int num;
    do
    {
        printf("dame un numero entre una y tres cifras\n");
        scanf("%i", &num);
    }
    while(num < 1);

    if (num < 10)
    {
        printf("El valor es de 1 cifra\n");
    }
    else
    {
        if(num < 100)
        {
            printf("El valor es de 2 cifras\n");
        }
        if (num >= 100)
        {
            printf("El valor es de 3 cifras\n");
        }

        if (num >= 1000)
        {
            printf("ERROR: No te hagas el chistoso y dame el valor bien. Ahora vuelve a ejecutar el programa\n");
        }
    }
}