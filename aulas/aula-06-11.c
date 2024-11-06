#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{
    int x[TAM], y[TAM];
    int menor;

    for(int i = 0; i < TAM ; i++)
    {
        printf("digite o numero %d da lista 1 :", i + 1);
        scanf("%d", &x[i]);
        printf("digite o numero %d da lista 2 :", i + 1);
        scanf("%d", &y[i]);

        menor = abs(x[0] - y[0]);

        if(menor > abs(x[i] - y[i]))
        {
            menor = abs(x[i] - y[i]);
        }

    }

    printf("%d", menor);

    return 0;
}