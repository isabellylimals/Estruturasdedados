/*
funcoes foras pegas do meu projeto, implementei aqui para uma pequena demonstracao.
Adicionei essas funcoes no projeto, para funcionar de acordo com uma fila de uma clinica mesmo, o primeiro paciente que entra, é o primeiro que sai, se tornando assim um paciente atendido, é isso que a funcao remover ór fila faz.

*/
#include"fila_lista.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


Lista_geral* adicionar_paciente_geral(Lista_geral* lista_geral, Paciente* paciente) {
    Lista_geral* novo_paciente_geral = (Lista_geral*)malloc(sizeof(Lista_geral));
    if (novo_paciente_geral == NULL) {
        printf("Erro na alocacao\n");
        exit(1);
    }
    novo_paciente_geral->paciente_geral = paciente;
    novo_paciente_geral->proximo = NULL; 

    
    if (lista_geral == NULL) {
        return novo_paciente_geral;
    }
    
    Lista_geral* atual = lista_geral;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }
     
     atual->proximo = novo_paciente_geral;
     return lista_geral;
}

void remover_paciente_por_fila(Lista_geral **lista, Lista_atendidos **lista_atendidos) {
    if (*lista == NULL) {
        printf("A lista geral está vazia.\n");
        return;
    }

    Lista_geral *removido = *lista;
    *lista = (*lista)->proximo;

    Lista_atendidos *novo_atendimento = (Lista_atendidos *)malloc(sizeof(Lista_atendidos));
    if (novo_atendimento == NULL) {
        printf("Erro na alocacao de memoria.\n");
        exit(1);
    }

    novo_atendimento->paciente_atendido = removido->paciente_geral;
    novo_atendimento->proximo = *lista_atendidos;
    *lista_atendidos = novo_atendimento;

    free(removido);
    printf("Paciente removido com sucesso.\n");
}

void imprimir_gerais(Lista_geral* lista) {
    if (lista == NULL) {
        printf("LISTA GERAL ESTA VAZIA.\n");
        return;
    }

    printf("====Lista geral:====\n");
    Lista_geral* atual = lista;
    while (atual != NULL) {
        printf("nome: %s\n", atual->paciente_geral->nome);
        printf("Idade: %d\n", atual->paciente_geral->idade);
        printf("Digito unico: %d\n", atual->paciente_geral->digito_unico);
        atual = atual->proximo;
    }
}
void imprimir_atendidos(Lista_atendidos* lista) {
    if (lista == NULL) {
        printf("Nenhum paciente foi atendido ainda, lista esta vazia. \n");
        return;
    }
printf("***===Lista de Pacientes atendidos===***\n");
    while (lista != NULL) {
        printf("Nome do paciente: %s\n", lista->paciente_atendido->nome);
        printf("Idade do paciente: %d\n", lista->paciente_atendido->idade);
        printf("Digito Unico do paciente: %d\n", lista->paciente_atendido->digito_unico);
        lista = lista->proximo;
    }
}
