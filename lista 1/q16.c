#include <stdio.h>

int main() {
    int numero;

    printf("Adicione o valor do numero\n");
    scanf("%d", &numero);
    printf("o modulo do numero e : %d\n", (numero < 0) ? -1 * numero : numero);

    return 0;
}