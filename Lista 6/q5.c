#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Erro");
    }

    int tamanho = atoi(argv[1]);

    float *vetor = (float *) malloc(tamanho * sizeof(float));

    for(int i = 0; i < tamanho; i++)
    {
        *(vetor + i) = (float) rand() / RAND_MAX * 20;
        printf("%f\n", *(vetor + i));
    }
    printf("\n");

    float total = 0;

    for(int i = 0; i < tamanho; i++)
    {
        total += *(vetor + i);
    }
    printf("%f", total);
}