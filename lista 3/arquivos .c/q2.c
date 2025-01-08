#include <stdio.h>
#include <stdlib.h>

#define TAM 61

int main()
{
    char palavra[TAM];
    char letra;

    printf("Escreva a palavra :");
    fgets(palavra, TAM, stdin);

    printf("escreva a letra :");
    scanf( "%c", &letra);

    for(int i = 0; i < TAM; i++)
    {
        if(palavra[i] == letra)
        {
            printf("A letra %c esta contida na palavra %s", letra, palavra);
            return;
        }
    }

    printf("A letra %c nao esta contida na palavra %s", letra, palavra);

    return 0;
}