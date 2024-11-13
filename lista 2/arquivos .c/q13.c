#include <stdio.h>

int quadrado(int a, int b)
{
    int somatorio = 0;
    
    printf("O somatorio dos numeros pares existentes na faixa de valores de %d a %d sao :\n", a, b);

    for(int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            somatorio += i;
        }
    }

    printf("%d", somatorio);
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