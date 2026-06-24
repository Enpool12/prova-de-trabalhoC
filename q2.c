// Dada uma matriz 10×10 de inteiros faça um programa em C que imprima
// a diagonal principal e a diagonal secundária. 

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main() {
    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            matriz[i][j] = (i * TAM) + j + 1;
        }
    }

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Diagonal Principal:\n");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n\n");

    printf("Diagonal Secundaria:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", matriz[i][TAM - 1 - i]);
    }
    printf("\n");

    return 0;
}

//assim q faria não sei se está certo