#include <stdio.h>

int main() 
{
    int entrada;
    int saida = 1;

    puts("Escreva um valor para calcular seu fatorial");
    scanf("%d", &entrada);

    for (int i = 0; i < entrada; i++) 
    {
        saida *= entrada - i ;
    }

    printf("A o fatorial de %d e igual a %d", entrada, saida);

    return 0;
}