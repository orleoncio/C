#include <stdio.h>

int main() {
    int numero1;
    int numero2;

    printf("Adicione o primeiro numero\n");
    scanf("%d", &numero1);
    printf("Adicione o segundo numero\n");
    scanf("%d", &numero2);

    printf("soma : %d\n", numero1 + numero2);
    printf("produto : %d\n", numero1 * numero2);
    printf("diferenca : %d\n", numero1 - numero2);
    printf("quociente : %d\n", numero1 / numero2);
    printf("resto : %d\n", numero1 % numero2);

    return 0;
}