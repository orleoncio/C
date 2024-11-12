#include <stdio.h>

int quadrado(int a, int b)
{
    int fatorial = 1;
    
    printf("O fatorial dos numeros inteiros impares existentes na faixa de valores de %d a %d e :\n", b, a);

    for(int i = b; i >= a; i--)
    {
        if(i % 2)
        {
            fatorial *= i;
        }
    }

    printf("%d", fatorial);
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