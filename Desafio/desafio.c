#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char ocuparArmario(unsigned char *armarios, unsigned char *operacaoAndControl)
{
    srand(time(NULL));

    *operacaoAndControl = (rand() % 8);

    if(*armarios == 255)
    {
        printf("Todos os armarios estão ocupados.");
        return;
    }

    if(*armarios > *armarios ^ (0x01 << deslocamento))
    {
        printf("Armario %d ja esta ocupado.", deslocamento + 1);
        return;
    }

    printf("Armario %d ocupado com exito", deslocamento + 1);
    *armarios = *armarios | 0x01 << deslocamento;
}

char desocuparArmarios(unsigned char armarios)
{
    
}


int main()
{
    unsigned char armarios = 0;
    unsigned char operacao;
    
    do
    {
        puts("Escolha a operacao : \n");
        puts("1. Ocupar armario\n");
        puts("2. Liberar armario\n");
        puts("3. Sair\n");
        scanf("%c\n", &operacao);
    
        switch (operacao)
        {
            case 1:
                ocuparArmario(&armarios, &operacao);
                break;

            case 2:
                desocuparArmarios(armarios);
                break;
            
            case 3:
                puts("Operacao encerrada");
                break;

            default:
                break;
        }

    }while(operacao != 3);

    return 0;
}