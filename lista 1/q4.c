#include <stdio.h>

int main(){
    float conta;

    printf("Adicione o valor da conta \n");
    scanf("%f", &conta);

    printf("A conta final foi de %.2f reais", conta * 1.1f);

    return 0;
}