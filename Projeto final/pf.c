#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 5

void groupingPixels(int [TAM][TAM], int, int **);
void assigningNewK(int, int **, int *);
int repeatProcess(int *, int **, int );
int calcDist(int, int, int **);

int main ( void ){
    srand(time(NULL));
    int nk;

    int matriz[TAM][TAM] = {
        {3,5,2,7,3},
        {5,8,0,2,4},
        {8,4,1,0,0},
        {3,7,2,8,4},
        {7,1,2,9,3}
    };

    printf("Adicione o numero de k's :");
    scanf("%d", &nk);

    int **ks = (int **) malloc(nk * sizeof(int *));
    for(int i = 0; i < nk; i++){
        *(ks + i) = (int *)malloc(26 * sizeof(int));
    }

    for(int i = 0; i < nk; i++){
        ks[i][0] = rand() % 10;
        for(int j = 1; j < 26; j++){
            ks[i][j] = -1;
        }
    }

    int *newK = (int *) malloc(nk * sizeof(int)); 

    for(int i = 0; i < nk; i++){
        for(int j = 0; j < 26; j++){
            printf(" %d ", ks[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int repeat = 1;

    while(repeat == 1){
        groupingPixels(matriz, nk, ks);
        assigningNewK(nk, ks, newK);
        repeat = repeatProcess(newK, ks, nk);
    }

    
    
    for(int i = 0; i < nk; i++){
        for(int j = 1; j < 26; j++){
            for(int k = 0; k < TAM; k++){
                for(int l = 0; l < TAM; l++){
                    if(matriz[k][l] == ks[i][j]){
                        matriz[k][l] = ks[i][0];
                    }
                }
            }
        }
    }

    for(int i = 0; i < nk; i++){
        for(int j = 0; j < 26; j++){
            printf(" %d ", ks[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    

    
    
}

void groupingPixels(int matriz[TAM][TAM], int nk, int **ks){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            int x = calcDist(matriz[i][j], nk, ks);
            for(int k = 1; k < 26; k++){
                if(ks[x][k] == -1){
                    ks[x][k] = matriz[i][j];
                    break;
                }
            }
        }
    }
}

int calcDist(int valorDoPixel, int nk, int **ks){
    int *vetorDistK = (int *) calloc(nk, sizeof(int));
    for(int i = 0; i < nk; i++){
        vetorDistK[i] = sqrt(pow(abs((ks[i][0]) - valorDoPixel),2) + pow(abs((9 - ks[i][0]) - (9 - valorDoPixel)),2));
    }

    int menor = vetorDistK[0];
    int indice = 0;

    for(int i = 0; i < nk; i++){
        if(menor > vetorDistK[i]){
            menor = vetorDistK[i];
            indice = i;
        }
    }
    return indice;
}

void assigningNewK(int nk, int **ks, int *newK){

    for(int i = 0; i < nk; i++){
        int media = 0;
        int count = 0;
        for(int j = 1; j < 26; j++){
            
            if(ks[i][j] != -1){
                media += ks[i][j];
                count++;
            }
        }
        if(count != 0){
            newK[i] = media / count;
        }
        else{
            newK[i] = ks[i][0];
        }
    }
}

int repeatProcess(int *newK, int **ks, int nk){
    int repeat = 0;
    for(int i = 0; i < nk; i++){
        if(ks[i][0] != newK[i]){
            repeat = 1;
            ks[i][0] = newK[i];
        }   
    }
    return repeat;
}

