#include <stdio.h>
#include <string.h>

int main()
{
    char binario[10];
    int cont = 8;
    
    for(int i = 1; i <= 256; i++)
    {
        memset(binario, '0', 9);
        binario[9] = '\0';

        for (int j = i; j > 0; j /= 2)
        {
            binario[cont] = (j % 2) ? '1' : '0';
            cont--;
        }
        
        printf("Decimal: %d, Octal: %o, Hexa: %X, Binario: %s\n", i, i, i, binario);

        cont = 8;
    }

    return 0;
}