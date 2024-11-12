#include <stdio.h>
#include <stdlib.h>

char desocuparArmarios(unsigned char armarios)
{
    
}

int main()
{
    unsigned char armarios;
    unsigned char operacao;
    
    puts("Escolha a operacao : \n");
    puts("1. Ocupar armario\n");
    puts("2. Liberar armario\n");
    puts("3. Sair\n");
    scanf("%c\n", &operacao);

    switch (operacao)
    {
        case 1:
            armarios | 0b1 << (rand() % 8);
            break;

        case 2:
            armarios = desocuparArmario(armarios);
            break;
        
        default:
            break;
    }

    return 0;
}