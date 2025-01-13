#include <stdio.h>
#include <stdlib.h>

int main( void ){
    int i;
    int *p = &i; 

    printf("Adicione o numero de casas");
    scanf("%d", p);

    unsigned char *arr = malloc(i * sizeof(unsigned char));

    
    for(int x = 0; x < i; x++){
        printf("Adicione o valor %d : ", x + 1);
        scanf("%hhu", arr + x);
    }

    for(int x = 0; x < i; x++){
        printf("%hhu\n", *(arr + x));
        printf("%d\n", arr + x);
    }

    return 0;
}