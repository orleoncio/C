#include <stdio.h>

int main()
{
    int menor;
    int maior;
    int valor;
    
    puts("Adicione um valor:");
    scanf("%d", &valor);
    menor = valor;
    maior = valor;

    while(valor > 0 || valor % 2)
    {
        if (valor > maior)
        {
            maior = valor;
        }
        
        if (valor < menor)
        {
            menor = valor;
        }

        puts("Adicione um valor:");
        scanf("%d", &valor);
    }

    printf("%d", maior * menor);

}