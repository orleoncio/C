#include <stdio.h>

int main() 
{
    int numerador;
    int denominador;
    puts("Entre com o primeiro numero");
    scanf("%d", &numerador);

    do
    {
        puts("Entre com o segundo numero");
        scanf("%d", &denominador);
    } while (denominador == 0);
    
    printf("A divisao da %.2f", (float) numerador / (float) denominador );

    return 0;
}