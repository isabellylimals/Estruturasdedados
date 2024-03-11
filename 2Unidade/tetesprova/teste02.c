#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("arquivo.txt", "w"); // Abre o arquivo para escrita
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "Hello mundo\n"); // Escreve no arquivo
    fclose(arquivo); // Fecha o arquivo de escrita

    arquivo = fopen("arquivo.txt", "r"); // Abre o arquivo para leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) { // Lê caractere por caractere até o final do arquivo (EOF)
        printf("%c", caractere); // Imprime o caractere lido
    }

    fclose(arquivo); // Fecha o arquivo de leitura
    return 0;
}
