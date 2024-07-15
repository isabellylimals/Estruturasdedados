
#include <stdio.h>
#include <stdlib.h> // Funções malloc, calloc, free, exit
#include <locale.h>

int main() {
    int linhas = 5, colunas = 2, i, j;

    // Alocação das linhas da matriz.
    int **matriz = (int **) malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        // Tratar falha na alocação de memória
        return 1;
    }

    // Alocação das colunas e preenchimento da matriz.
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = i * colunas + j; // Cálculo da posição.
        }
    }

    // Exibição da matriz.
  for (i = 0; i < linhas; i++) {
        printf("Matriz [%d]: ", i);
        for (j = 0; j < colunas; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    