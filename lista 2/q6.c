#include <stdio.h>

int main() 
{
    int entrada;
    int paulo = 0;
    int renata = 0;
    int nulos = 0;
    int brancos = 0;

    do
    {
        puts("Digite o numero do candidato :");
        puts("Paulo - 5");
        puts("Renata - 7");
        puts("Branco - 0");
        puts("Nulo - qualquer outro valor");
        scanf("%d", &entrada);

        switch (entrada)
        {
            case 5:
                paulo++;
                break;
            case 7:
                renata++;
                break;
            case 0:
                brancos++;
                break;
            default:
                nulos++;
                break;
        }
    } while (entrada >= 0);

    puts("Voce encerrou a votacao");
    puts("Votos :");
    printf("Palulo - %d / Renada - %d / Brancos - %d / Nulos - %d", paulo, renata, brancos, nulos);    

    return 0;
}