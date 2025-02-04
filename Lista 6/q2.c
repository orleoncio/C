#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void main (int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Execulte como C:\\Users\\orleo\\Documents\\GitHub\\C\\Lista 6\\q2.c <Tamanho do vetor>");
        exit(1);
    }

    srand(time(NULL));

    int *vetor = (int *) malloc(atoi(argv[1]) * sizeof(int));
    for(int i = 0; i < atoi(argv[1]); i++)
    {
        *(vetor + i) = rand() % 20;
        printf("%d - %d", *(vetor + i), (vetor + i));
        printf("\n");
    }


    int menor = 0;

    for(int i = 0; i < atoi(argv[1]); i++)
    {
        if(*(vetor + menor) > *(vetor + i))
        {
            menor = i;
        }
    }    

    printf("O endereço do menor valor e %d", (vetor + menor));
}