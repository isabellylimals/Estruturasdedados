#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[100];
    int matricula;
    Disciplina* disciplinas[10];
    int num_disciplinas;
};
Aluno* cria_aluno(char nome[], int matricula) {
    Aluno* aluno = (Aluno*)malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro: não foi possível alocar memória para o aluno.\n");
        exit(1);
    }

    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    aluno->num_disciplinas = 0;

    return aluno;
}

void matricula_disciplina(Aluno* aluno, Disciplina* disciplina) {
    if (aluno->num_disciplinas >= 10) {
        printf("Erro: o aluno já está matriculado em 10 disciplinas.\n");
        return;
    }

    aluno->disciplinas[aluno->num_disciplinas] = disciplina;
    aluno->num_disciplinas++;
}

void exclui_aluno(Aluno* aluno) {
    free(aluno);
}
