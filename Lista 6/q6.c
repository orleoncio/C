#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
    if(argc != 3){
        printf("Erro");
    }

    int tamanho = atoi(argv[1]);
    int *vetor = (int *) malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = rand() % atoi(argv[2]);
    } 
}

float Media(int *vetor, int tamanho){
    float total = 0;

    for(int i = 0; i < tamanho; i++){
        total += *(vetor + i);
    }

    return total / tamanho;
}

int Moda(int *vetor, int tamanho){

}

float Mediana(int *vetor, int tamanho){

    

    if(tamanho % 2){
        return *(vetor + (tamanho / 2));
    }
    else{
        return (*(vetor + (tamanho / 2)) + *(vetor + ((tamanho / 2) - 1))) / 2;
    }
}