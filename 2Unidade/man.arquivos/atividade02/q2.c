//Implemente um programa em C para ler o nome e as notas de um n´umero N de alunos e armazen´a-los em um arquivo.

#include <stdio.h>

typedef struct alunos {
    char nome[50];
    float notas[3];
} Alunos;

int main(void) {
    Alunos aluno;
    int qtd, i, j;
    FILE *saida;

    printf("Quantos alunos deseja armazenar?\n");
    scanf("%d", &qtd);

    saida = fopen("saidaaluno.txt", "w");

    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        printf("Qual o nome do aluno %d?\n", i + 1);
        scanf("%s", aluno.nome);

        for (j = 0; j < 3; j++) {
            printf("Digite a nota %d:\n", j + 1);
            scanf("%f", &aluno.notas[j]);
        }

        fprintf(saida, "%s %.2f %.2f %.2f\n", aluno.nome, aluno.notas[0], aluno.notas[1], aluno.notas[2]);
    }

    fclose(saida);
    return 0;
}

