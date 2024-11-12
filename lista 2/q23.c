#include <stdio.h>

int main()
{
    int teste = 5;
    int pre;
    int pos;

    pos = teste--;
    pre = --teste;

    printf("%d e %d", pos, pre);

    return 0;
}