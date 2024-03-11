#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("arquivo_inexistente.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Arquivo aberto com sucesso!\n");
    fclose(arquivo);
    return 0;
}
