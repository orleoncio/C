#include <stdio.h>
#include <math.h>

int main() {
    float numero1;
    float numero2;
    float numero3;

    printf("Adicione o primeiro numero\n");
    scanf("%f", &numero1);
    printf("Adicione o segundo numero\n");
    scanf("%f", &numero2);
    printf("Adicione o terceiro numero\n");
    scanf("%f", &numero3);

    printf("Media aritimetica : %.2f\n", (numero1 + numero2 + numero3) / 3);
    printf("Media geometrica : %.2f\n", pow(numero1 * numero2 * numero3, 1.0 / 3.0));

    return 0;
}