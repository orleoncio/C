#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TAM 3

int main()
{
    int numeros[TAM];
    int aritmetica = 0;
    int geometrica = 1;

    srand(time(NULL));

    for(int i = 0; i < TAM; i++)
    {
        numeros[i] = rand() % 20;
        aritmetica += numeros[i];
        geometrica *= numeros[i];
    }

    printf("Media aritmetica %f\n", (float)aritmetica / TAM);
    printf("Media geometrica %f\n", cbrt((float)geometrica));
}