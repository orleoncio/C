#include <stdio.h>

int main(){
    unsigned char cod = 10;
    unsigned int pos;
    unsigned char mask;
    unsigned char operacao;

    printf("Qual operacao voce quer realizar ? 1 - Ligar, 2 - Desligar\n");
    scanf("%hhu", &operacao);

    if(operacao == 1){
        printf("Escolha uma lampada para ligar\n");
        scanf("%d", &pos);
        mask = 0x01 << (pos -1);

        cod = cod | mask;
        printf("%hhu\n", cod);  
    }
    else if(operacao == 2){
        printf("Escolha uma lampada para desligar\n");
        scanf("%d", &pos);
        mask = 0x01 << (pos -1);

        cod = cod & ~mask;
        printf("%hhu\n", cod); 
    }
    else{
        printf("Operacao invalida");
    }
      
    return 0;
}