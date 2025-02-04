#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Somar(int, int);
int Multiplicar(int, int);

int main (int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("Execulte como C:\\Users\\orleo\\Documents\\GitHub\\C\\Lista 6\\q1.c <Valor 1> <Valor 2> <Operação>");
        exit(1);
    }

    int numero1 = atoi(argv[1]);
    int numero2 = atoi(argv[2]);

    if (!strcmp(argv[3], "Somar"))
    {
        printf("O resultado da Soma entre %d e %d e %d", numero1, numero2, Somar(numero1, numero2));
    }

    if (!strcmp(argv[3], "Multiplicar"))
    {
        printf("O resultado da Multiplicação entre %d e %d e %d", numero1, numero2, Multiplicar(numero1, numero2));
    }
    
}

int Somar(int numero1, int numero2)
{
    return numero1 + numero2;
}

int Multiplicar(int numero1, int numero2)
{
    return numero1 * numero2;
}