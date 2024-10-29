#include <stdio.h>

int main() {
    int numero;

    printf("Adicione um numero de 3 digitos\n");
    scanf("%d", &numero);

    printf("%d%d%d", (numero % 100) % 10, (numero % 100) / 10, (numero / 100));

    return 0;
}