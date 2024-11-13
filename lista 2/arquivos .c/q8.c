#include <stdio.h>

int main()
{
    float valor;
    int parcela;

    puts("Entre com o valor do produto");
    scanf("%f", &valor);
    parcela = (int) (valor / 3);

    printf("A entrada sera %.2f e as parcelas seram %d", valor - 2 * parcela, parcela); 

    return 0;
}