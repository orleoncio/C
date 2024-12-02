#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
            for(int j = i; j >= 0; j--)
            {
                printf("%c", palavra[j]);
                
            }
            return 0;
        }
    }
}