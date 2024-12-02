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

    strcat(palavra1, palavra2);
    printf("%s", palavra1);

    return 0;
}