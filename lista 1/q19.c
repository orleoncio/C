#include <stdio.h>

int main() {
    int numero;

    printf("Adicione o valor do numero\n");
    scanf("%d", &numero);

    printf("O numero adicionado e : %s\n", (numero % 2 == 0) ? "par" : "impar");

    return 0;
}