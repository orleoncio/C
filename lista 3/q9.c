#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++)
        {
            printf("Adicione o valor da linha %d coluna %d : ", i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
        }
    }

    for(int k = 0; k < TAM; k++)
    {
        printf(" %d", matriz[k][k]);
    }
}