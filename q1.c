// Faça um programa em C que leia um vetor com n inteiros, calcule a
// média (em float) e informe quantos elementos estão acima da média. O vetor deve
// ser alocado dinamicamente e desalocado.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *vetor;
    int soma = 0;
    int acima_da_media = 0;
    float media = 0.0;
    scanf("%d", &n);

    vetor = malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
  
    media = (float) soma / n;
    
    for (int i = 0; i < n; i++) {
        if (vetor[i] > media) {
            acima_da_media++;
        }
    }
    printf("%.2f\n", media);
    printf("%d\n", acima_da_media);

  
    free(vetor);

    return 0;
}
