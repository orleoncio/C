#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main ( void ){
    char *string1 = (char *) malloc(TAM * sizeof(char));
    printf("Adicione uma string\n");
    fgets(string1, TAM, stdin);
    char caractere;
    char *busca = &caractere;
    
    printf("Adicone o caractere que quer buscar\n");
    scanf("%c", busca);

    unsigned char cont = 0;
    while(*(string1 + cont) != '\0'){
        if(*(string1 + cont) == *busca){
            printf("O valor buscado e o %d caractere", cont + 1);
            exit(0);
        }
        cont++;
    }
    printf("O valor adicionado não esta na string");
    return 0;    
}