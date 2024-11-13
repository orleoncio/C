#include <stdio.h>
#include <math.h>

int main()
{
    double hipotenusa;

    for(int i = 1; i <= 500; i++)
    {
        for(int j = i; j <= 500; j++)
        {
            hipotenusa = sqrt(pow(i, 2) + pow(j, 2));
            
            if(hipotenusa == (int)hipotenusa && hipotenusa <= 500)
            {
                printf("Uma das tripla de pitagoras e hipotenusa = %.0f, cateto1 = %d, cateto2 = %d\n", hipotenusa, i, j);
            }
        }
    }

    return 0;
}