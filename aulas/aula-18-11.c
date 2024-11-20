#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int ordenacaoPorSelecao()
{
    srand(time(NULL));

    int array[TAM];

    for (int i = 0; i < TAM; i++)
    {
        array[i] = rand() % 10;
    }

    for(int i = 0; i < TAM - 1; i++)
    {
        for(int j = i + 1; j < TAM; j++)
        {
            if (array[i] > array[j])
            {
                int valor = array[i];
                array[i] = array[j];
                array[j] = valor;
            }
            
        }
        printf(" %d\n", array[i]);
    }
}

int main()
{
    ordenacaoPorSelecao();
}