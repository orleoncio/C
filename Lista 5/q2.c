#include <stdio.h>
#include <stdlib.h>

int main ( void ){
    int n1 = 5;
    int n2 = 3;
    int *p1 = &n1;
    int *p2 = &n2;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("%d, %d", n1, n2);

    return 0;
}