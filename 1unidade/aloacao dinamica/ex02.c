#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Falha na alocacao");
        return 1;
    }

    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Falha na alocacao");
            return 1;
        }
    }
for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Informe o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

printf("Matriz normal:\n");
    for (i = 0; i < linhas; i++) {
    
        for (j = 0; j < colunas; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    //coloca os numeros da coluna nas linhas
    printf("Matriz transposta:\n");
    for (j = 0; j < colunas; j++) {
    for (i = 0; i < linhas; i++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
