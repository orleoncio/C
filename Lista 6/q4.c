#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void MenorMaior(float *, float *, int);
void Normalizacao(float *, float *, int);
void PrintVetor(float *, int);

void main (int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Execulte como C:\\Users\\orleo\\Documents\\GitHub\\C\\Lista 6\\q4.c <Tamanho do vetor> <Range de cada valor do vetor>");
        exit(1);
    }

    srand(time(NULL));

    float *vetor = (float *) malloc(atoi(argv[1]) * sizeof(float));
    float *menorMaior = (float *) malloc(2 * sizeof(float));
    for(int i = 0; i < atoi(argv[1]); i++)
    {
        *(vetor + i) = (float) rand() / RAND_MAX * atoi(argv[2]);
    }

    PrintVetor(vetor, atoi(argv[1]));
    MenorMaior(vetor, menorMaior, atoi(argv[1]));
    Normalizacao(vetor, menorMaior, atoi(argv[1]));
    PrintVetor(vetor, atoi(argv[1]));

}

void MenorMaior(float *vetor, float *menorMaior, int tamanho)
{

    menorMaior[0] = vetor[0];
    menorMaior[1] = vetor[0];

    for(int i = 1; i < tamanho; i++)
    {
        if(menorMaior[0] > vetor[i])
        {
            menorMaior[0] = vetor[i];
        }

        if(menorMaior[1] < vetor[i])
        {
            menorMaior[1] = vetor[i];
        }
    }
}

void Normalizacao(float *vetor, float *menorMaior, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        *(vetor + i) = (*(vetor + i) - menorMaior[0]) / (menorMaior[1] - menorMaior[0]);
    }
}

void PrintVetor(float *vetor, int tamanho)
{
    for(int i =0; i < tamanho; i++)
    {
        printf("%.2f\n", *(vetor + i));
    }
}