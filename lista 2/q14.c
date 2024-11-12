#include <stdio.h>

int quadrado(int a, int b)
{
    int quantidade = 0;
    
    printf("A quantidade de numeros multiplos de 3 existentes na faixa de valores de %d a %d sao :\n", a, b);

    for(int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            quantidade++;
        }
    }

    printf("%d", quantidade);
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