#include <stdio.h>
#include "aluno.c"
#include "disciplina.c"

int main() { int i;
    // Exemplo de uso dos TADs Disciplina e Aluno
    Disciplina* disciplina1 = cria_disciplina("Matematica", 101);
    Disciplina* disciplina2 = cria_disciplina("Fisica", 102);

    Aluno* aluno1 = cria_aluno("Roberto", 202406);
    Aluno* aluno2 = cria_aluno("Maria", 202405);

    matricula_disciplina(aluno1, disciplina1);
    matricula_disciplina(aluno1, disciplina2);
    matricula_disciplina(aluno2, disciplina1);

    printf("Aluno 1:\n");
    printf("Nome: %s\n", aluno1->nome);
    printf("Matricula: %d\n", aluno1->matricula);
    printf("Disciplinas:\n");
    for ( i = 0; i < aluno1->num_disciplinas; i++) {
        printf("- %s (Codigo: %d)\n", aluno1->disciplinas[i]->nome, aluno1->disciplinas[i]->codigo);
    }

    printf("\nAluno 2:\n");
    printf("Nome: %s\n", aluno2->nome);
    printf("Matricula: %d\n", aluno2->matricula);
    printf("Disciplinas:\n");
    for ( i = 0; i < aluno2->num_disciplinas; i++) {
        printf("- %s (Codigo: %d)\n", aluno2->disciplinas[i]->nome, aluno2->disciplinas[i]->codigo);
    }

    // Liberando memória alocada
    exclui_disciplina(disciplina1);
    exclui_disciplina(disciplina2);
    exclui_aluno(aluno1);
    exclui_aluno(aluno2);

    return 0;
}
