// aluno.c
#include "aluno.h"

struct aluno{
    char nome[50];
    int matricula;
    float ira;
};
Aluno* recebe_dados(void) {
    Aluno *a = (Aluno*)malloc(sizeof(Aluno));
    if (a == NULL) {
        exit(1);
    } else {
        printf("Alocação bem sucedida\n");
    }
    
    do {
        printf("Informe o nome do aluno ou digite 'S' para sair:\n");
        scanf(" %s", a->nome);
        if (a->nome[0] == 'S' || a->nome[0] == 's') {
            printf("Saindo...\n");
            break;
        }
        printf("Informe a matrícula do aluno:\n");
        scanf("%d", &a->matricula);
        printf("Informe o IRA deste aluno:\n");
        scanf("%f", &a->ira);
    } while (1); // Loop infinito, será interrompido quando 'S' ou 's' for digitado

    return a;
}

void exibedados(Aluno *a) {
    if (a == NULL) {
        printf("Nenhum aluno registrado.\n");
    } else {
        printf("NOME: %s\nMATRICULA: %d\nIRA: %.2f\n", a->nome, a->matricula, a->ira);
    }
}