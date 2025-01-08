#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
//atoi converte string para inteiro
//atol converte string para long
//atof converte string para float

int a = atoi(argv[1]);
int b = atoi(argv[2]);

int r = a + b;
printf("%d", r);

return 0;
}