#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *elementos = (int *)malloc(tamanho * sizeof(int));
    if (elementos == NULL) {
        printf("ERRO NA ALOCACAO.");
        return 1;
    }

    printf("Inserir elementos de um vetor.\n");
    for (i = 0; i < tamanho; i++) {
        printf("Insira o elemento %d: ", i);
        scanf("%d", &elementos[i]);
    }

    
    printf("Elementos inseridos ao contrario: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%d ", elementos[i]);
    }
    printf("\n");

    free(elementos);
    return 0;
}
