#include <stdio.h>

int main()
{
    int palindromo;

    puts("Adicione um numero inteiro de 5 digitos :");
    scanf("%d", &palindromo);

    if (palindromo / 10000 == palindromo % 10)
    {
        if((palindromo / 1000) % 10 == (palindromo % 100) / 10)
        {
            printf("O numero adicionado e um palindromo");
            return 0;
        }
    }

    puts("O numero adicionado nao e um palindromo");

    return 0;
    
}