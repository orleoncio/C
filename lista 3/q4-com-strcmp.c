#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 61

int main()
{
    char palavra1[TAM];
    char palavra2[TAM];

    printf("Escreva a palavra 1 :");
    fgets(palavra1, TAM, stdin);

    printf("Escreva a palavra 2 :");
    fgets(palavra2, TAM, stdin);

    if(strcmp(palavra1, palavra2) == 0)
    {
        printf("As palavras sao iguais");
    }
    else
    {
        printf("As palavras sao diferentes");
    }

    return 0;
}