#include <stdio.h>

int main() {
    float salarioPorHora;
    float numeroDeHoras;
    float percentualDeDesconto;
    float salarioBruto;
    float salarioLiquido;

    printf("Adicione o salario por hora\n");
    scanf("%f", &salarioPorHora);
    printf("adicione o numero de horas trabalhadas\n");
    scanf("%f", &numeroDeHoras);
    printf("Adicione o percentual de desconto do INSS\n");
    scanf("%f", &percentualDeDesconto);

    printf("Salario bruto : R$ %.2f\n", (salarioPorHora * numeroDeHoras));
    printf("Salario liquido : R$ %.2f\n", (salarioPorHora * numeroDeHoras) - (salarioPorHora * numeroDeHoras * percentualDeDesconto / 100));

    return 0;
}