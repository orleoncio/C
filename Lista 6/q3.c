#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int MenorMaior(int *, int *, int);

void main (int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Execulte como C:\\Users\\orleo\\Documents\\GitHub\\C\\Lista 6\\q3.c <Tamanho do vetor>");
        exit(1);
    }

    srand(time(NULL));

    int *vetor = (int *) malloc(atoi(argv[1]) * sizeof(int));
    int *maiorMenor = (int *) malloc(2 * sizeof(int));
    maiorMenor[0] = 0;
    maiorMenor[1] = 0;
    for(int i = 0; i < atoi(argv[1]); i++)
    {
        *(vetor + i) = rand() % 20;
        printf("%d - %d", *(vetor + i), (vetor + i));
        printf("\n");
    }  

    MenorMaior(vetor, maiorMenor, atoi(argv[1]));

    printf("Os endereços do menor e do maior valor sao %d, %d", (vetor + maiorMenor[0]), (vetor + maiorMenor[1]));
}


int MenorMaior(int *vetor, int *maiorMenor, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        if(*(vetor + maiorMenor[0]) > *(vetor + i))
        {
            maiorMenor[0] = i;
        }

        if(*(vetor + maiorMenor[1]) < *(vetor + i))
        {
            maiorMenor[1] = i;
        }
    }


}