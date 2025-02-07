#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Erro");
    }

    int tamanho = atoi(argv[1]);
    int t = atoi(argv[2]);

    int **matrizM = (int **) malloc(tamanho * sizeof(int *));
    for(int i = 0; i < tamanho; i++){
        *(matrizM + i) = (int *) malloc(tamanho * sizeof(int));
    }

    int **matrizS = (int **) malloc(tamanho * sizeof(int *));
    for(int i = 0; i < tamanho; i++){
        *(matrizS + i) = (int *) malloc(tamanho * sizeof(int));
    }

    for(int i = 0; i< tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            *(*(matrizM + i) + j) = rand() % 20;
        }
    }

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(*(*(matrizM + i) + j) > t){
                *(*(matrizS + i) + j) = 1;
            }
            else{
                *(*(matrizS + i) + j) = 0;
            }
        }
    }
}

void PrintMatrizes(int **matriz, int tamanho){
    for(int i = 0; i< tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}