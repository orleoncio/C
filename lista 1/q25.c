#include <stdio.h>
#include <math.h>

int main() {
    int x1;
    int y1;
    int x2;
    int y2;

    printf("Adicione o valor de x da coordenada 1\n");
    scanf("%d", &x1);
    printf("Adicione o valor de y da coordenada 1\n");
    scanf("%d", &y1);

    printf("Adicione o valor de x da coordenada 2\n");
    scanf("%d", &x2);
    printf("Adicione o valor de y da coordenada 2\n");
    scanf("%d", &y2);

    printf("A distancia entre as coordenadas e : %.2f", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

    return 0;
}