#include <stdio.h>

int main(){
    int x;

    printf("Escreva um numero inteiro \n");
    scanf("%d", &x);

    printf("triplo : %d\nquadrado : %d\nmeio : %d\n", x * 3, x * x, x / 2);

    return 0;
}


