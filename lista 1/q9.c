#include <stdio.h>

int main() {
    float comprimento;
    float largura;
    float altura;

    printf("Adicione o valor do comprimento\n");
    scanf("%f", &comprimento);
    printf("Adicione o valor da largura\n");
    scanf("%f", &largura);
    printf("Adicione o valor da altura\n");
    scanf("%f", &altura);

    printf("O volume da sua caixa e : %.2f", comprimento * largura * altura);

    return 0;
}