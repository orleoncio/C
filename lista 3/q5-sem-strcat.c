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
        if(palavra1[i] == '\0')
        {
            for(int j = 0; j < TAM; j++)
            {
                if(palavra2[j] != '\0')
                {
                    palavra1[i + j] = palavra2[j];
                }
                else
                {
                    palavra1[i + j] = palavra2[j];
                    printf("%s", palavra1);
                    return 0;
                }
            }   
        } 
    }
    return 0;
}