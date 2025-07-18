#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main ( void ){
    char *string1 = (char *) malloc(TAM * sizeof(char));
    printf("Adicione a primeira string\n");
    fgets(string1, TAM, stdin);

    char *string2 = (char *) malloc(TAM * sizeof(char));
    printf("Adicione a segunda string\n");
    fgets(string2, TAM, stdin);

    unsigned char cont = 0;
    while(*(string1 + cont) != '\n'){
        cont++;
    }

    unsigned char cont2 = 0;
    while (*(string2 + cont2) != '\0'){
        *(string1 + cont) = *(string2 + cont2);
        cont++;
        cont2++;
    }

    *(string1 + cont) = *(string2 + cont2);
    
    printf("string 1 : %s", string1);
    printf("string 2 : %s", string2);
}