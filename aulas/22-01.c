#include <stdlib.h>
#include <stdio.h>

void media(struct Aluno);

struct Aluno{
    double nota1;
    double nota2;
    double media;
};

int main ( int argc, char **argv )
{
    if(argc != 3){
        printf("Ultilize\n\t %s <numero> <numero>\n\n", *argv);
        exit(1);
    }

    struct Aluno al1;
    al1.nota1 = atol(*(argv+1));
    al1.nota2 = atol(*(argv+2));
    media(&al1);

    printf("Noda 1: %.2f, Nota 2: %.2f, Media: %.2f\n", al1.nota1, al1.nota2, al1.media);

    return 0;
}

void media(struct Aluno *const p){
    //(*p).media = ((*p).nota1 + (*p).nota2) / 2;
    p->media = (p->nota1 + p->nota2) / 2; 
}