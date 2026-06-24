// Implemente uma função existeTriangulo em C que receba três inteiros
// positivos a,b,c informados pelo usuário e informe se eles podem formar um triângulo.
// Sua função retornará 1 se for possível ou 0 caso contrário. Condição de existência
// de um triângulo: cada lado tem que ser menor que a soma dos outros dois e maior
// que a diferença entre eles (exemplo: a+b > c > |a-b| ).
#include <stdio.h>
#include <stdlib.h>

int existeTriangulo(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    }
    return 0;
}

int main() {
    int ladoA, ladoB, ladoC;

    printf("Digite três numeros: ");
    
    if (existeTriangulo(ladoA, ladoB, ladoC)) {
        printf("Os lados %d, %d e %d da pra triangular\n", ladoA, ladoB, ladoC);
    } else {
        printf("Resultado: 0. Os lados %d, %d e %d nao triangulam", ladoA, ladoB, ladoC);
    }

    return 0;
}

