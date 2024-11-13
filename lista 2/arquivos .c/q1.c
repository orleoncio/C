#include <stdio.h>

int main() 
{
    unsigned char entrada;
    unsigned char controle;

    do 
    {
        puts("Digite : ");
        puts("1 - Domingo");
        puts("2 - Segunda");
        puts("3 - Terca");
        puts("4 - Quarta");
        puts("5 - Quinta");
        puts("6 - Sexta");
        puts("7 - Sabado");
        puts("0 - Sair");

        scanf("%hhu", &entrada);
        
        switch (entrada)
        {
            case 0:
                puts("Programa encerrado");
                controle = 0;
            break;
            case 1:
                puts("Domingo");
                controle = 1;
            break;
            case 2:
                puts("Segunda-Feira");
                controle = 1;
            break;
            case 3:
                puts("Terca-Feira");
                controle = 1;
            break;
            case 4:
                puts("Quarta-Feira");
                controle = 1;
            break;
            case 5:
                puts("Quinta-Feira");
                controle = 1;
            break;
            case 6:
                puts("Sexta-Feira");
                controle = 1;
            break;
            case 7:
                puts("Sabado");
                controle = 1;
            break;
        
            default:
                puts("Numero de dia nao valido");
                controle = 1;
            break;
        }
    } while (controle != 0);

    return 0;
}