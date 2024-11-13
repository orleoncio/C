#include <stdio.h>

int main() 
{
    puts("Os quadrados dos numeros inteiros multiplos de 4 existentes na faixa de valores de 15 a 90 sao :");

    for(int i = 15; i <= 90; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i * i);
        }
    }

    return 0;
}