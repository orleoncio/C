#include <stdio.h>

int main() {
    int numero1;
    int numero2;

    printf("Adicione o valor do numero 1: ");
    scanf("%d", &numero1);
    printf("Adicione o valor do numero 2: ");
    scanf("%d", &numero2);

    printf("O primeiro numero %s multiplo do segundo", (numero1 % numero2 == 0) ? "e" : "nao e");

    return 0;
}