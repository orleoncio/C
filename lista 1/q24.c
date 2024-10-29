#include <stdio.h>

int main() {
    int segundos;

    printf("Adicione o tempo em segundos\n");
    scanf("%d", &segundos);

    printf("%d Horas, %d Minutos, %d Segundos", (segundos / 3600), (segundos % 3600) / 60, (segundos % 3600) % 60);

    return 0;
}