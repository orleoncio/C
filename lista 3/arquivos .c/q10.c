#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define INTERVAL 10

int main()
{
    srand(time(NULL));

    int matriz[TAM][TAM];
    int valor;
    int quantidade = 0;

    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % INTERVAL;
        }
    }

    printf("Adicione um valor entre 0 e %d : ", INTERVAL);
    scanf(" %d", &valor);

    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++)
        {
            if(valor == matriz[i][j]){
                quantidade++;
            }
        }
    }

    printf("%d", quantidade);
}