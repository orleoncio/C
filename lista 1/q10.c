#include <stdio.h>

int main() {
    float dollar;
    float real;

    printf("Adicione o valor da cotacao do dollar\n");
    scanf("%f", &dollar);
    printf("Adicione o valor em reais\n");
    scanf("%f", &real);

    printf("O valor em dollar e : %f", real / dollar);

    return 0;
}