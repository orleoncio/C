#include <stdio.h>

int main() {
    int numero;

    printf("Adicione um numero inteiro\n");
    scanf("%d", &numero);

    printf("O numero anterior e : %d\n", --numero);
    printf("O numero sucessor e : %d\n", numero += 2);

    return 0;
}