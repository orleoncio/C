#include <stdio.h>
#include <stdlib.h>

int main ( void ){
    int n = 1;
    int *p = &n;
    int menor;
    int *pmenor = &menor;

    printf("0 encerra a operação\n");
    printf("Adicione um valor maior que 0 : ");
    scanf("%d", p);

    *pmenor = *p;

    printf("%d\n", *pmenor);

    while(*p > 0){
        printf("0 encerra a operação\n");
        printf("Adicione um valor maior que 0 : ");
        scanf("%d", p);

        if(*pmenor > *p){
            *pmenor = *p;
        }

        printf("%d\n", *pmenor);
    }

    printf("Programa encerrado");

    return 0;
}