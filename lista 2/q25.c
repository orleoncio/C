#include <stdio.h>

int main()
{
    int numeroDeTermos;
    int quatro = -4;
    double termo;
    double pi = 0;
    int x = 1;

    puts("adicione o numero de termos de pi:");
    scanf("%d", &numeroDeTermos);

    for(int i = 1; i < numeroDeTermos; i++)
    {
        quatro *= -1;
        termo = (double)quatro / x;
        pi += termo;
        x += 2;
    }

    printf("%f", pi);
}