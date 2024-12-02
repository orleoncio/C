#include <stdio.h>
#include <stdlib.h>

#define TAM 61

int main()
{
    char palavra1[TAM];
    char palavra2[TAM];

    printf("Escreva a palavra 1 :");
    fgets(palavra1, TAM, stdin);

    printf("Escreva a palavra 2 :");
    fgets(palavra2, TAM, stdin);

    for(int i = 0; i < TAM; i++)
    {
        if(palavra1[i] != '\0')
        {
            if(palavra1[i] != palavra2[i])
            {
                printf("As palavras sao diferentes");
                return 0;
            }
        }
        else
        {
            printf("As palavras sao iguais");
            return 0;
        }   
    }
    return 0;
}