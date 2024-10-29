#include <stdio.h>

int main() {
    int A;
    int B;
    int troca;

    printf("Adicione o valor da primeira variavel\n");
    scanf("%d", &A);
    printf("Adicione o valor da segunda variavel\n");
    scanf("%d", &B);

    troca = A;
    A = B;
    B = troca;

    printf("Variavel 1 : %d, Variavel 2 : %d", A, B);

    return 0;
}