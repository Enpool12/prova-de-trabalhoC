// Qual a saída do programa abaixo?

#include <stdio.h>

int main(){
    int vet[5] = {4, 8, 12, 16, 20};
    int *p1, *p2;

    p1 = &vet[1];
    p2 = &vet[4];

    *p1 = *p1 + 6;
    p2 --;

    printf("%d\n", *p1);
    printf("%d\n", *p2);
    
    p1 = p1 + 2;
    *p2 = *p2 + *p1;

    printf("%d\n", *p1);
    printf("%d\n", *p2);

    return 0;
}

//retorno 141632
// 32
