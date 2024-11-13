#include <stdio.h>

int main()
{
    unsigned char equipamentos = 243;
    int id;
    int status = 0;
    int leitura = 0;

    scanf(" %d", id);
    status = equipamentos | 0x01 << id;
    leitura = equipamentos | 0x01 << (id + 4);
}