#include <stdio.h>

int main()
{
    int numeroDeTermos;
    int quatro = -4;
    double termo;
    double pi = 0;
    //int x = 1;

    //puts("adicione o numero de termos de pi:");
    //scanf("%d", &numeroDeTermos);

    for(int i = 1; i < 20; i += 2)
    {
        quatro *= -1;
        termo = (double)quatro / i;
        pi += termo;
        //x += 2;
    }

    printf("%f", pi);
}