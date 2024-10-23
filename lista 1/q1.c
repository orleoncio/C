#include <stdio.h>

int main(){
    int decimal;

    printf("Escreva um numero inteiro decimal\n");
    scanf("%d", &decimal);

    printf("Hexadecimal : %x\n", decimal);
    printf("Octal : %o\n", decimal);

    return 0;
}

