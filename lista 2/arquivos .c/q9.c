#include <stdio.h>

int fibonacci(int valor)
{
    if (valor == 1 || valor == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(valor - 1) + fibonacci(valor - 2);
    }
    
}

int main()
{   
    int termo;
    int valor;

    puts("adicione o temo do fibonacci");
    scanf("%d", &termo);

    valor = fibonacci(termo);

    printf("O valor do termo %d e %d", termo, valor);
  
    return 0;
}

