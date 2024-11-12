#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

int main()
{
    char str1[TAM + 1], str2[TAM + 1], str3[TAM + 1];

    puts("Adicione valores para a lista 1");
    for(int i = 0; i < TAM; i++)
    {
        printf("valor %d\n", i);
        scanf(" %c", &str1[i]);
    }

    str1[TAM] = '\0';
    
    strcpy(str2, str1);

    for(int i = 0; i < TAM; i++)
    {
        str3[i] = str1[i];
    }

    str3[TAM] = '\0';

    for(int i = 0; i < TAM; i++)
    {
        printf(" %c - %c - %c\n", str1[i], str2[i], str3[i]);
    }

    return 0;
}