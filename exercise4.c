#include <stdio.h>

int main(void)
{
    float preg_correct, total_preg, porcent;
    do
    {
        printf("dame el total de preguntas\n");
        scanf("%f", &total_preg);
    }
    while(total_preg < 1);

    do
    {
    printf("dame el total de preguntas que contesto correctamente\n");
    scanf("%f", &preg_correct);
    }
    while(preg_correct > total_preg);

    porcent = (preg_correct / total_preg) * 100;

    if (porcent >= 90)
    {
        printf("Nivel Máximo: %i%c", (int)porcent,37);
        printf("\n");
    }
    else
    {
        if(porcent >= 75 && porcent < 90)
        {
            printf("Nivel medio: %i%c", (int)porcent,37);
            printf("\n");
        }
        if (porcent >= 50 && porcent < 75)
        {
            printf("Nivel regular: %i%c", (int)porcent,37);
            printf("\n");
        }

        if (porcent < 50)
        {
            printf("Fuera de Nivel: %i%c", (int)porcent,37);
            printf("\n");
        }
    }
}