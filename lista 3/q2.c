#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[61];
    char letra;

    printf("Escreva a palavra :");
    fgets(&palavra, 61, stdin);

    printf("escreva a letra :");
    scanf( "%c", &letra);

    for(int i = 0; i < 61; i++)
    {
        if(palavra[i] == letra)
        {

        }
    }

    return 0;
}