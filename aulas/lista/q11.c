#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void ) {
    srand(time(NULL));
    int tamanhoXY;
    int *ptxy = & tamanhoXY;
    int tamanhoM;
    int *ptm = &tamanhoM;

    printf("Qual o tamnho dos vetores X e Y\n");
    scanf("%d", ptxy);

    int *vetorX = (int *) malloc(*ptxy * sizeof(int));
    int *vetorY = (int *) malloc(*ptxy * sizeof(int));

    printf("Qual o tamanho da matriz\n");
    scanf("%d", ptm);

    for(int i = 0; i < *ptxy; i++){
        *(vetorX + i) = rand() % *ptm;
        *(vetorY + i) = rand() % *ptm;
    }

    int **matriz = (int **) malloc(*ptm * sizeof(int *));
    for(int i = 0; i < *ptm; i++){
        *(matriz + i) = (int *) malloc(*ptm * sizeof(int));
    }

    for(int i = 0; i < *ptm; i++){
        for(int j = 0; j < *ptm; j++){
            *(*(matriz + i) + j) = 0;
        }
    }

    for(int i = 0; i < *ptxy; i++){
        *(*(matriz + *(vetorX + i)) + *(vetorY + i)) = *(*(matriz + *(vetorX + i)) + *(vetorY + i)) + 1; 
    }

    for(int i = 0; i < *ptxy; i++){
        printf(" %d ", *(vetorX + i));
    }

    printf("\n");

    for(int i = 0; i < *ptxy; i++){
        printf(" %d ", *(vetorY + i));
    }

    printf("\n");
    printf("\n");

    for(int i = 0; i < *ptm; i++){
        for(int j = 0; j < *ptm; j++){
            printf(" %d ", *(*(matriz + i) + j));
        }
        printf("\n");
    }

    return 0;
}