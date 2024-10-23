#include <stdio.h>

int main(){
    float real;

    printf("Digite um numero real\n");
    scanf("%f", &real);

    printf("Novo formato %.1f", real);

    return 0;
}