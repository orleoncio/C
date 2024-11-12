#include <stdio.h>

int main()
{
    float fahrenheit = 0;

    for(int i = 1; i <= 10; i++)
    {
        fahrenheit = ((i * 10 * 9) / 5) + 32;
        printf("%d C = %.2f F\n", i * 10, fahrenheit);
    }

    return 0;
}