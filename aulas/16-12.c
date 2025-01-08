#include <stdio.h>
#include <stdlib.h>

int main(){
    char m[2][3] = { 0 };
    m[0][0] = 10;

    char *p = &m[0][0];

    printf(" %hhu", *p);

    return 0;
}