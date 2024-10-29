#include <stdio.h>

int main(){
    unsigned char sexo;
    float altura;

    printf("Escreva o seu sexo\n");
    scanf("%c", &sexo);
    printf("Escreva sua altura em metros\n");
    scanf("%f", &altura);

    if(tolower(sexo) == 'm') {
        printf("Seu peso ideal deve ser %f kg", 72.7 * altura - 58);
    }
    else if(tolower(sexo) == 'f') {
        printf("Seu peso ideal deve ser %f kg", 62.1 * altura - 44.7);
    }
    else {
        printf("Sexo invalido");
    }

    return 0;
}