#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int matricula;
    char nome[80];
    char turma;
    float nota[3];
} Aluno;

void matricula(int n, Aluno** alunos) {
	int i,j;
    for (i = 0; i < n; i++) {
        printf("Matrícula do aluno %d:\n", i + 1);
        scanf("%d", &alunos[i]->matricula);

        printf("Nome do aluno %d:\n", i + 1);
        scanf(" %[^\n]", alunos[i]->nome);

        printf("Turma do aluno %d (A, B ou C):\n", i + 1);
        scanf(" %c", &alunos[i]->turma);

        for (j = 0; j < 3; j++) {
            printf("Digite a nota %d do aluno %d:\n", j + 1, i + 1);
            scanf("%f", &alunos[i]->nota[j]);
        }
    }
}

void lanca_notas(int n, Aluno** alunos) {
	int i,j;
    for ( i = 0; i < n; i++) {
        float soma = 0;

        for (j = 0; j < 3; j++) {
            soma += alunos[i]->nota[j];
        }

        float media = soma / 3;
        printf("Média do aluno %d: %.2f\n", i + 1, media);
    }
}

void imprime_turma(int n, Aluno** alunos, char turma) {
    int count = 0;
    int i;

    printf("\nAlunos da turma %c:\n", turma);

    for ( i = 0; i < n; i++) {
        if (alunos[i]->turma == turma) {
            count++;
            printf("Matrícula: %d, Nome: %s\n", alunos[i]->matricula, alunos[i]->nome);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->nota[0], alunos[i]->nota[1], alunos[i]->nota[2]);
        }
    }

    if (count == 0) {
        printf("Nenhum aluno encontrado na turma %c.\n", turma);
    }
}

void imprime_turma_aprovados(int n, Aluno** alunos) {
	int i,j;
    for (i = 0; i < n; i++) {
        float soma = 0;

        for (j = 0; j < 3; j++) {
            soma += alunos[i]->nota[j];
        }

        float media = soma / 3;

        if (media >= 7.0) {
            printf("Aluno %d da turma %c: Aprovado\n", i + 1, alunos[i]->turma);
        } else {
            printf("Aluno %d da turma %c: Reprovado\n", i + 1, alunos[i]->turma);
        }
    }
}

int main() {
    int qtd,i;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    Aluno** alunos = (Aluno**)malloc(qtd * sizeof(Aluno*));
    if (alunos == NULL) {
        exit(1);
    }

    for (i = 0; i < qtd; i++) {
        alunos[i] = (Aluno*)malloc(sizeof(Aluno));
        if (alunos[i] == NULL) {
            exit(1);
        }
    }

    matricula(qtd, alunos);
    lanca_notas(qtd, alunos);
    imprime_turma(qtd, alunos, 'A');
    imprime_turma(qtd, alunos, 'B');
    imprime_turma(qtd, alunos, 'C');
    imprime_turma_aprovados(qtd, alunos);

    // Liberando a memória alocada
    for (i = 0; i < qtd; i++) {
    	int i;
        free(alunos[i]);
    }
    free(alunos);

    return 0;
}
