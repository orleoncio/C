#include <stdio.h>

int main() {
    int numeroDeDias;
    float valorFinal;

    printf("Adicione o numero de dias\n");
    scanf("%d", &numeroDeDias);

    if(numeroDeDias <= 10) {
        valorFinal = numeroDeDias * 50.25;
    }
    else if(numeroDeDias <= 20) {
        valorFinal = numeroDeDias * 50.25;
        valorFinal += valorFinal * 0.2;   
    }
    else {
        valorFinal = numeroDeDias * 50.25;
        valorFinal += valorFinal * 0.3;
    }

    valorFinal -= valorFinal * 0.1;

    printf("Valor liquido final : R$ %.2f", valorFinal);

    return 0;
}