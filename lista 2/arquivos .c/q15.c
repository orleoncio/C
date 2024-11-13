#include <stdio.h>

int main()
{
    int potencia = 1;

    puts("As potencias do valor de base 3 elevado aos expoentes de 0 a 7 sao:\n");

    for(int i = 0; i < 8; i++)
    {
        if(i == 0)
        {
            printf("3 elevado a %d = %d\n", i, 1);
        }
        else
        {
            for (int x = 0; x < i; x++)
            {
                potencia *= 3;
            }

            printf("3 elevado a %d = %d\n", i, potencia);
            potencia = 1;
        }
    }

    return 0;
}