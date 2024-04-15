//A e B da questao 1, misturei as duas;
/*
Implemente o TAD Pilha usando vetor dinâmico. Considere uma dimensão inicial para o
vetor no momento da criação da pilha; caso a capacidade da pilha seja atingida, você
pode realocar o vetor, duplicando sua capacidade em virtude de uma nova operação
de empilhamento.
b) Implemente o TAD Pilha usando lista encadeada.
*/
#include <stdio.h>
#include <stdlib.h>

struct no {
    float valor;
    struct no* prox;
};

struct pilha {
    struct no* topo;
};

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

int pilha_vazia(struct pilha* p) {
    return (p->topo == NULL);
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

void imprime(struct pilha* p) {
    struct no* atual = p->topo;
    while (atual != NULL) {
        printf("%f\n", atual->valor);
        atual = atual->prox;
    }
}


