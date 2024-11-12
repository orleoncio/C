#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int graos = 1;
    unsigned long long int total = 0;

    for(int i = 1; i < 65; i++)
    {
        graos *= 2;
        total += graos;
    }

    printf("%llu", total);

    return 0;
}