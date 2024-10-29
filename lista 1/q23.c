#include <stdio.h>

int main() {
    int x;
    int n;
    int contador;
    int dois = 2;

    printf("Adicione o valor do primeiro numero\n");
    scanf("%d", &x);
    printf("Adicione o valor do segundo numero\n");
    scanf("%d", &n);

    if(n == 0) {
        dois = 1;
    }

    for(contador = 1; contador < n ; contador++) {
        dois *= 2;
    }

    printf("produto dos dois numeros : %d", x * dois);

    return 0;
}