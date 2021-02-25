#include <stdio.h>

int main(void)
{
    int num1,num2,num3;
    printf("dame 3 numeros y te dire el mayor de ellos\n");
    printf("primer numero\n");
    scanf("%i", &num1);
    printf("segundo numero\n");
    scanf("%i", &num2);
    printf("tercer numero\n");
    scanf("%i", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("El primer valor es el mayor\n");
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            printf("El segundo valor es el mayor\n");
        }
        if (num3 > num1 && num3 > num2)
        {
            printf("El tercer valor es el mayor\n");
        }
    }
}