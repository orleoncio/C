#include <stdio.h>

int main() 
{
    int valorAdicionado;
    unsigned char controle;
    int maior;
    int menor;

    puts("Digite um novo valor");
    scanf("%d", &maior);
    menor = maior;

    do
    {
        puts("Digite um novo valor");
        scanf("%d", &valorAdicionado);
        
        if (valorAdicionado == 0)
        {
            controle = 0;
        }
        else 
        {
            controle = 1;

            if (valorAdicionado > maior)
            {
                maior = valorAdicionado;
            }
            else if (valorAdicionado < menor)
            {
                menor = valorAdicionado;
            }
            
        }
        

    } while (controle != 0);

    puts("Voce saiu do programa");
    printf("Seu menor foi %d e seu maior foi %d", menor, maior);

    return 0;
}