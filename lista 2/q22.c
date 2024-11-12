#include <stdio.h>

int main()
{
    int valor;
    int contador = 0;
    int i = 1;

    puts("Adicione um valor para ser analizado");
    scanf("%d", &valor);

    do{
        i *= 10;
        
        if((valor % i) / (i / 10) == 7)
        {
            puts("teste");
            contador++;
        }

        
    }while(i < valor);

    printf("O numero de 7's e %d", contador);

    return 0;
}