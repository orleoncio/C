#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main ( void ){
    char *string1 = (char *) malloc(TAM * sizeof(char));
    printf("Adicione uma string\n");
    fgets(string1, TAM, stdin);

    char *string2 = (char *) malloc(TAM * sizeof(char));

    unsigned char cont = 0;
    while(*(string1 + cont) != '\0'){
        *(string2 + cont) = *(string1 + cont);
        cont++;
    }

    *(string2 + cont) = '\0';

    printf("string 1 : %s", string1);
    printf("string 2 : %s", string2);
}