#include <stdio.h>

int main()
{
    int somatorio3 = 0;
    int somatorio5 = 0;

    for(int i = 0; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            somatorio3 += i;
        }

        if((100 + i) % 5 == 0)
        {
            somatorio5 += (100 + i);
        }
    }

    puts("A soma entre todos os numeros divisiveis por 3 no intervalo entre 0 e 100 e: ");
    printf("%d\n", somatorio3);
    puts("A soma entre todos os numeros divisiveis por 5 no intervalo entre 100 e 200 e: ");
    printf("%d\n", somatorio5);

    return 0;
}