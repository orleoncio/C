#include <stdio.h> 

int main() 
{
    int jose = 150;
    int pedro = 110;
    int contador = 0;

    while (pedro <= jose)
    {
        contador++;
        pedro += 3;
        jose += 2;
    }
    
    printf("Pedro sera maior que jose em %d anos", contador);

    return 0;
}