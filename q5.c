// implemente uma função incrementa em C que incrementa adicionando
// mais um ao valor de uma variável dada como parâmetro.
// Exemplo: se x = 10, após o uso da função incrementa teremos x=11.

#include <stdio.h>

void incrementa(int *var) {
    (*var)++;
}

int main() {
    int x = 10;

    printf("antes: x = %d\n", x);

    incrementa(&x);

    printf("depois: x = %d\n", x);

    return 0;
}
