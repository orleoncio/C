#include <stdio.h>

int main() {
    int celsius;

    printf("Adicione o valor da temperatura em celsius\n");
    scanf("%d", &celsius);

    printf("Temperatura em fahrenheit : %d", (9 * celsius + 160) / 5);

    return 0;
}