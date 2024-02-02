#include <stdio.h>

#define MAX_NOME 100

typedef struct {
    char nome[MAX_NOME];
    double nota1, nota2, nota3;
} Aluno;

void calcularMediaEStatus(Aluno *aluno, double *media, char *situacao) {
    *media = (aluno->nota1 + aluno->nota2 + aluno->nota3) / 3.0;

    if (*media >= 7.0) {
        *situacao = 'A'; // Aprovado
    } else {
        *situacao = 'R'; // Reprovado
    }
}

int main() {
    FILE *entrada, *saida;
    Aluno aluno;
    double media;
    char situacao;

    // Abre o arquivo de entrada
    entrada = fopen("entrada_q3.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Abre o arquivo de saída
    saida = fopen("saida_q3.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(entrada); // Fecha o arquivo de entrada antes de sair
        return 1;
    }

    // Processa cada linha do arquivo de entrada
    while (fscanf(entrada, "%99s %lf %lf %lf", aluno.nome, &aluno.nota1, &aluno.nota2, &aluno.nota3) == 4) {
        calcularMediaEStatus(&aluno, &media, &situacao);
        fprintf(saida, "%s\t%.1f\t%s\n", aluno.nome, media, (situacao == 'A') ? "Aprovado" : "Reprovado");
    }

    // Fecha os arquivos
    fclose(entrada);
    fclose(saida);

    // Reabre o arquivo de entrada para leitura e imprime o conteúdo na tela
    entrada = fopen("entrada_q3.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir novamente o arquivo de entrada para leitura.\n");
        return 1;
    }

    printf("Conteúdo do arquivo de entrada:\n");
    
    // Lê e imprime cada linha do arquivo
    int linha[MAX_NOME];
    while (fgets(linha, MAX_NOME, entrada) != NULL) {
        printf("%s", linha);
    }

    // Fecha o arquivo de entrada novamente
    fclose(entrada);
    return 0;
}

