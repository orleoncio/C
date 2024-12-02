#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main()
{
    srand(time(NULL));

    int menor;
    int maior;
    int numeros[TAM];

    printf("Escreva o menor numero do intervalor :");
    scanf("%d", &menor);

    printf("Escreva o maior numero do intervalor :");
    scanf("%d", &maior);

    for(int i = 0; i < TAM; i++)
    {
        numeros[i] = menor + rand() % (maior - menor);
    }

    for(int j = 0; j < TAM - 1; j++)
    {
        int min = j;
        for(int k = j; k < TAM; k++)
        {
            if(numeros[k] < numeros[min])
            {
                min = k;
            }
        }

        if(min != j)
        {
            int valor = numeros[min];
            numeros[min] = numeros[j];
            numeros[j] = valor;
        }
    }

    for(int l = 0; l < TAM; l++)
    {
        printf(" %d", numeros[l]);
    }

    printf("\n");
    printf("\n");

    for(int j = 0; j < TAM - 1; j++)
    {
        for(int k = 0; k < TAM - (j + 1); k++)
        {
            if(numeros[k] > numeros[k + 1])
            {
                int valor = numeros[k + 1];
                numeros[k + 1] = numeros[k];
                numeros[k] = valor;
            }
        }
    }

    for(int l = 0; l < TAM; l++)
    {
        printf(" %d", numeros[l]);
    }
}