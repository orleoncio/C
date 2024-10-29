#include <stdio.h>

int main() {
    float raio;

    printf("Adicione o valor do raio\n");
    scanf("%f", &raio);

    printf("O diametro e : %.2f\n", raio * 2);
    printf("A circunferencia e : %.2f\n", 2 * 3.14159 * raio);
    printf("A area e : %.2f\n", 3.14159 * raio * raio);

    return 0;
}