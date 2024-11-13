#include <stdio.h>

int quadrado(int a, int b)
{
    int somatorio = 0;
    
    printf("A media aritimetica dos numeros inteiros existentes na faixa de valores de %d a %d e :\n", a, b);

    for(int i = a; i <= b; i++)
    {
        somatorio += i;
    }

    printf("%f", (float) somatorio / (b - a + 1));
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