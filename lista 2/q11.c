#include <stdio.h>

int quadrado(int a, int b)
{
    printf("Os quadrados dos numeros inteiros multiplos de 4 existentes na faixa de valores de %d a %d sao :\n", a, b);

    for(int i = a; i <= b; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i * i);
        }
    }
}

int main()
{
    int limiteA;
    int limiteB;

    puts("Adicione dois valores de limite");
    puts("Limite A: ");
    scanf("%d", &limiteA);
    puts("Limite B: ");
    scanf("%d", &limiteB);

    if (limiteA > limiteB)
    {
        quadrado(limiteB, limiteA);
    }
    else if (limiteB >= limiteA)
    {
        quadrado(limiteA, limiteB);
    }    

    return 0;
}