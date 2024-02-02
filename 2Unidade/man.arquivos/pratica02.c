#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo = fopen("entradaescrita.txt", "w");

    if (arquivo == NULL) {
        printf("ERRO NA ABERTURA DO ARQUIVO!\n");
        exit(1);
    } else {
        printf("Arquivo aberto\n");
    }

    // Escreve um caractere 'A' no arquivo
    if (fputc('A', arquivo) != EOF) {
        printf("Caractere 'A' escrito com sucesso no arquivo\n");
    } else {
        printf("Erro ao escrever no arquivo\n");
        fclose(arquivo); // Fecha o arquivo em caso de erro
        exit(1);
    }

    // Fecha o arquivo e verifica se houve erro
    if (fclose(arquivo) == 0) {
        printf("Arquivo fechado com sucesso\n");
    } else {
        printf("Erro ao fechar o arquivo\n");
        exit(1);
    }

    return 0;
}

