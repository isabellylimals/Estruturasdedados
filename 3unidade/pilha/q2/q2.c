/* Considere a existência de um tipo abstrato Pilha de números reais, cuja interface
está definida no arquivo pilha.h da questão 1. Sem conhecer a representação interna desse
tipo abstrato e usando apenas as funções declaradas no arquivo de interface, pede-se:
a) Implemente uma função que receba uma pilha como parâmetro e retorne o valor
armazenado em seu topo, restaurando o conteúdo da pilha. Essa função deve
obedecer ao protótipo:
float topo (Pilha* p);
b) Implemente uma função que receba duas pilhas, p1 e p2, e passe todos os elementos
da pilha p2 para o topo da pilha p1. A figura a seguir ilustra essa concatenação de
pilhas*/

#include <stdio.h>
#include <stdlib.h>
#include "q2.h"

struct pilha* pilha_cria(void) {
    struct pilha* p = (struct pilha*)malloc(sizeof(struct pilha));
    if (p == NULL) {
        printf("Erro na alocacao de memoria para a pilha.\n");
        exit(1);
    }
    p->topo = NULL;
    return p;
}

void pilha_push(struct pilha* p, float v) {
    struct no* novo = (struct no*)malloc(sizeof(struct no));
    if (novo == NULL) {
        printf("Erro na alocacao de memoria para o novo no.\n");
        exit(1);
    }
    novo->valor = v;
    novo->prox = p->topo;
    p->topo = novo;
}

float pilha_pop(struct pilha* p) {
    float v;
    struct no* temp;
    if (pilha_vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1);
    }
    temp = p->topo;
    v = temp->valor;
    p->topo = temp->prox;
    free(temp);
    return v;
}

int pilha_vazia(struct pilha* p) {
    return (p->topo == NULL);
}

float topo(struct pilha* p) {
    if (pilha_vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1);
    }
    return p->topo->valor;
}

void concatena_pilhas(struct pilha* p1, struct pilha* p2) {
    if (pilha_vazia(p2)) {
        printf("Pilha vazia.\n");
        return;
    }

    struct no* ultimo_p1 = p1->topo;
    if (ultimo_p1 == NULL) {
        p1->topo = p2->topo;
    } else {
        while (ultimo_p1->prox != NULL) {
            ultimo_p1 = ultimo_p1->prox;
        }
        ultimo_p1->prox = p2->topo;
    }
    p2->topo = NULL;
}

void imprimir(struct pilha* p) {
    struct no* atual = p->topo;
    while (atual != NULL) {
        printf("%.2f\n", atual->valor);
        atual = atual->prox;
    }
}
