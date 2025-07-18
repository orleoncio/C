#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void ) {
    int tamanhoX;
    int *ptx = &tamanhoX;
    int tamanhoF;
    int *ptf = &tamanhoF;

    printf("Adicone o tamanho do vetor X\n");
    scanf("%d", ptx);

    printf("Adicone o tamanho do vetor F\n");
    scanf("%d", ptf);

    int *vetorX = (int *) malloc(*ptx * sizeof(int));
    int *vetorF = (int *) calloc(*ptf, sizeof(int));

    for(int i = 0; i < *ptx; i++){
        *(vetorX + i) = rand() % *ptf;
    }

    for(int i = 0; i < *ptx; i++){
        *(vetorF + *(vetorX + i)) = *(vetorF + *(vetorX + i)) + 1;
    }

    for(int i = 0; i < *ptx; i++){
        printf(" %d ", *(vetorX + i));
    }

    printf("\n");

    for(int i = 0; i < *ptf; i++){
        printf(" %d ", *(vetorF + i));
    }
}