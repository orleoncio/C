#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
    int x[MAX]; 
    int y[MAX];
    printf("seram gerados %d numeros aleatorios.\n", MAX);
    for(int i = 0; i < MAX; i++)
    {
        x[i] = rand() % MAX;
        y[i] = 0;
        printf("%d\n", x[i]);
    }

    for(int i = 0; i < MAX; i++)
    {
        for(int t = 0; t < MAX; t++)
        {
            if(i == x[t])
            {
                y[i]++;
            }
            
        }
        printf("%d\n", y[i]);
    }

    return 0;
}