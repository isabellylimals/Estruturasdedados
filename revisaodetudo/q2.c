#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int matricula;
    char nome[80];
    char turma;
    float nota[3];
} Aluno;

void matricula(int n, Aluno** alunos) {
    int i, j;

    for (i = 0; i < n; i++) {
        printf("Matrícula do aluno %d:\n ", i + 1);
        scanf("%d", &alunos[i]->matricula);

        printf("Nome do aluno %d:\n ", i + 1);
        scanf(" %[^\n]", alunos[i]->nome);

        printf("Turma do aluno %d:\n ", i + 1);
        scanf(" %c", &alunos[i]->turma);

        for (j = 0; j < 3; j++) {
            printf("Digite a nota %d\n do aluno %d:\n ", j + 1, i + 1);
            scanf("%f", &alunos[i]->nota[j]);
        }
    }
}

void lanca_notas(int n, Aluno** alunos) {
    int i, j;

    for (i = 0; i < n; i++) {
        float soma = 0;

        for (j = 0; j < 3; j++) {
            soma += alunos[i]->nota[j];
        }

        float media = soma / 3;
        printf("Média do aluno %d: %.2f\n", i + 1, media);
    }
}

void imprime_tudo(int n, Aluno** alunos) {
    int i, j;

    for (i = 0; i < n; i++) {
        printf("\nDados do aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i]->matricula);
        printf("Nome: %s\n", alunos[i]->nome);
        printf("Turma: %c\n", alunos[i]->turma);
        printf("Notas:\n");
        for (j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, alunos[i]->nota[j]);
        }
    }
}

void imprime_turma(int n, Aluno** alunos) {
    int i, j;
    char turma;
    int numero;

    printf("Qual a turma? ");
    scanf(" %c", &turma);

    printf("Quantos alunos tem nessa turma? ");
    scanf("%d", &numero);

    for (i = 0; i < numero; i++) {
        if (alunos[i]->turma == turma) {
            printf("\nDados do aluno %d da turma %c:\n", i + 1, turma);
            printf("Matrícula: %d\n", alunos[i]->matricula);
            printf("Nome: %s\n", alunos[i]->nome);

            printf("Notas:\n");
            for (j = 0; j < 3; j++) {
                printf("Nota %d: %.2f\n", j + 1, alunos[i]->nota[j]);
            }
        }
    }
}

void imprime_turma_aprovados(int n, Aluno** alunos) {
    int i, j;
    char turma;
    int numero;

    printf("Qual a turma? ");
    scanf(" %c", &turma);

    printf("Quantos alunos tem nessa turma? ");
    scanf("%d", &numero);

    for (i = 0; i < numero; i++) {
        if (alunos[i]->turma == turma) {
            float soma = 0;

            for (j = 0; j < 3; j++) {
                soma += alunos[i]->nota[j];
            }

            float media = soma / 3;

            if (media >= 7.0) {
                printf("Aluno %d da turma %c: Aprovado\n", i + 1, turma);
            } else {
                printf("Aluno %d da turma %c: Reprovado\n", i + 1, turma);
            }
        }
    }
}

int main() {
    int qtd;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    Aluno** alunos = (Aluno**)malloc(qtd * sizeof(Aluno*));
    if (alunos == NULL) {
        exit(1);
    }

    for (int i = 0; i < qtd; i++) {
        alunos[i] = (Aluno*)malloc(sizeof(Aluno));
        if (alunos[i] == NULL) {
            exit(1);
        }
    }

    matricula(qtd, alunos);
    lanca_notas(qtd, alunos);
    imprime_tudo(qtd, alunos);

    imprime_turma(qtd, alunos);
    imprime_turma_aprovados(qtd, alunos);

    // Liberando a memória alocada
    for (int i = 0; i < qtd; i++) {
        free(alunos[i]);
    }
    free(alunos);

    return 0;
}