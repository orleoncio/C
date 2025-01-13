#include <stdio.h>
#include <stdlib.h>


int main( void ){
    int n1;
    int n2;
    int *p1 = &n1;
    int *p2 = &n2;
    int s;
    int *ps = &s;

    printf("Adicione o primeiro numero : ");
    scanf("%d", p1);
    printf("Adicione o segundo numero : ");
    scanf("%d", p2);

    *ps = *p1 + *p2;

    printf("Soma = %d, endereço %d", s, ps);

    return 0;
}