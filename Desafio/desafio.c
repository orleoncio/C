#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char ocuparArmario(unsigned char armarios)
{
    srand(time(NULL));

    unsigned char control = (rand() % 8);

    if(armarios == 255)
    {
        puts("Todos os armarios estão ocupados.\n");
        return armarios;
    }

    if(armarios > (armarios ^ (0x01 << control)))
    {
        printf(" %c", armarios);
        printf("Armario %d ja esta ocupado.\n", control);
        return armarios;
    }

    printf("Armario %d foi ocupado com exito\n", control);
    return armarios | 0x01 << control;
}

char desocuparArmarios(unsigned char armarios)
{
    unsigned char escolha;

    if(armarios == 0)
    {
        puts("Todos os armarios estão desocupados.\n");
        return armarios;
    }

    puts("Qual armario voce deseja desocupar?\n");
    scanf(" %d", &escolha);

    if(armarios < (armarios ^ 0x01 << escolha))
    {
        printf("Armario %d ja esta desocupado.\n", escolha);
        return armarios;
    }

    printf("Armario %d foi desocupado com exito\n", escolha);
    return armarios ^ 0x01 << escolha;
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
        scanf(" %d", &operacao);
    
        switch (operacao)
        {
            case 1:
                puts("teste1");
                armarios = ocuparArmario(armarios);
                break;

            case 2:
                puts("teste2");
                armarios = desocuparArmarios(armarios);
                break;
            
            case 3:
                puts("Operacao encerrada\n");
                break;

            default:
                break;
        }

        unsigned char armario2 = armarios;

        for(int i = 128; i > 0; i/= 2)
        {
            printf(" %d", armario2 / i);
            armario2 -= i * (armario2 / i);
        }
        
        puts("\n");

        for(int i = 7; i >= 0; i--)
        {
            printf(" %d", i);
        }
        
        puts("\n");

    }while(operacao != 3);

    return 0;
}