#include <stdio.h>
#include <stdlib.h>

#define TAM 15

int main()
{
    int valores[TAM];
    int maior;
    int menor;

    for(int i = 0; i < TAM; i++)
    {
        scanf(" %d", &valores[i]);

        if(i == 0)
        {
            maior = valores[i];
            menor = valores[i];
        }

        if(valores[i] < menor)
        {
            menor = valores[i];
        }

        if(valores[i] > maior)
        {
            maior = valores[i];
        }
    }

    printf("%d", maior + menor);

    return 0;
}