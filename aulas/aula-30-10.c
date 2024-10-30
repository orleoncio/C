#include <stdio.h>

int main() {
    char op;
    float valor1, valor2;

    puts("Adicione dois valores");
    scanf("%f", &valor1);
    scanf("%f", &valor2);

    puts("Agora escolha a operação");
    puts("1 ou 10 para somar");
    puts("2 para subtrair");
    puts("3 ou 30 para multiplicar");
    puts("4 para dividir");

    scanf(" %c", &op);

    switch (op)
    {
        case '1':
        case '10':
            printf("%f", valor1 + valor2);
            break;
        
        case '2':
            printf("%f", valor1 - valor2);
            break;

        case '3':
        case '30':
            printf("%f", valor1 * valor2);
            break;

        case '4':
            printf("%f", valor1 / valor2);
            break;
    }

    return 0;
}