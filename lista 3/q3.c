#include <stdio.h>
#include <stdlib.h>

#define TAM 61

int main()
{
    char palavra[TAM];

    printf("Escreva a palavra :");
    fgets(palavra, TAM, stdin);

    for(int i = 0; i < TAM; i++)
    {
        if(palavra[i] == '\0')
        {
            printf("%d",i - 1);
            return 0;
        }
    }

    return 0;
}