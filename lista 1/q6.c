#include <stdio.h>

int main() {
    float horas;
    float minutos;
    float segundos;

    printf("Adicione o numero de horas\n");
    scanf("%f", &horas);
    printf("Adicione o numero de minutos\n");
    scanf("%f", &minutos);
    printf("Adicione o numero de segundos\n");
    scanf("%f", &segundos);

    printf("O tempo que voce adicionou em segundos e : %.2f", (horas * 3600) + (minutos * 60) + segundos);

    return 0;
}