#include <stdlib.h>
#include <stdio.h>

void imprimirNumero();

int main ( void ){
    void (*pFunc)();
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    pFunc = &imprimirNumero;

    (*pFunc)();

    return 0;
}

void imprimirNumero(){
    printf("Numero digitado");
}