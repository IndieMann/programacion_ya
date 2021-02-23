#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float nota1, nota2, nota3, prom;

    printf("Dame las notas en una escala del uno al 10\n");

    do
    {
        nota1 = get_float("dame la nota 1: ");
        nota2 = get_float("dame la nota 2: ");
        nota3 = get_float("dame la nota 3: ");
    }
    while (nota1 > 10 && nota2 > 10 && nota3 >10 );

    prom = (nota1 + nota2 + nota3) / 3;

    if (prom >= 7)
    {
        printf("\"Promocionado\"");
    }
    else
    {
        if (prom >= 4)
        {
            printf("\"Regular\"");
        }
        else
        {
            printf("\"Reprobado\"");
        }
    }

    printf("\n");
}