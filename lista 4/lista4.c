#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void ){
    int l;
    int c;

    srand(time(NULL));

    printf("Adicione os valores para as linhas e colunas da matriz\n");
    printf("Linhas :");
    scanf("%d", &l);
    printf("Colunas :");
    scanf("%d", &c);

    printf("entradas = l:%d, c:%d\n", l, c);

    unsigned char **matriz = malloc(l * sizeof(unsigned char *));
    if(matriz == NULL){
        printf("ERRO: memoria insuficiente\n");
        exit(1);
    }
    for(int i = 0; i < l; i++){
        matriz[i] = malloc(c * sizeof(unsigned char));
        if(matriz[i] == NULL){
            printf("ERRO: memoria insuficiente\n");
            exit(1);
        }
    }



    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            matriz[i][j] = rand() % 256;
        }
    }

    //imprimindo

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf(" %hhu ", matriz[i][j]);
        }
        printf("\n");
    }

    //segunda matriz com resultados

    unsigned char **LBP = malloc(l * sizeof(unsigned char *));
    if(LBP == NULL){
        printf("ERRO: memoria insuficiente\n");
        exit(1);
    }
    for(int i = 0; i < l; i++){
        LBP[i] = malloc(c * sizeof(unsigned char));
        if(LBP[i] == NULL){
            printf("ERRO: memoria insuficiente\n");
            exit(1);
        }
    }


    unsigned char bin = 0;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            bin = 0;
            for(int n = -1; n <= 1; n++){
                for(int m = n; m <= 1; m++){
                    if(i + n < 0 || i + n > l - 1 || j + m < 0 || j + m > c - 1){
                        continue;
                    }
                    if(n == 0 && m == 0){
                        continue;
                    }

                    if(matriz[i + n][j + m] >= matriz[i][j]){
                        bin = bin | 0x01 << (n + m + 2);
                    }
                }
            }

            for(int n = 1; n > -1; n--){
                for(int m = n - 1; m >= -1; m--){
                    if(i + n < 0 || i + n > l - 1 || j + m < 0 || j + m > c - 1){
                        continue;
                    }

                    if(matriz[i + n][j + m] >= matriz[i][j]){
                        bin = bin | 0x01 << (6 - (n + m));
                    }
                }
            }

            LBP[i][j] = bin;

        }
    }

    //imprimindo

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf(" %hhu ", LBP[i][j]);
        }
        printf("\n");
    }

    unsigned char hist[256] = {0};

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            unsigned char indice = LBP[i][j];
            hist[indice]++;
        }
    }

    for(int i = 0; i < 256; i++){
        printf(" %hhu -> indice %d\n", hist[i], i);
    }

    return 0;
}