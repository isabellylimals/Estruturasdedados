#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista2* lst2_cria(void) {
    Lista2* lista = (Lista2*)malloc(sizeof(Lista2));
    if (lista == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return lista;
}

void lst2_libera(Lista2* l) {
    No* atual = l->primeiro;
    while (atual != NULL) {
        No* prox = atual->prox;
        free(atual);
        atual = prox;
    }
    free(l);
}

Lista2* lst2_insere(Lista2* l, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    novo->valor = v;
    novo->ant = l->ultimo;
    novo->prox = NULL;
    if (l->ultimo == NULL) {
        l->primeiro = novo;
    } else {
        l->ultimo->prox = novo;
    }
    l->ultimo = novo;
    return l;
}

Lista2* lst2_retira(Lista2* l, int v) {
    No* atual = l->primeiro;
    while (atual != NULL && atual->valor != v) {
        atual = atual->prox;
    }
    if (atual == NULL) {
        return l;
    }
    if (atual == l->primeiro) {
        l->primeiro = atual->prox;
    } else {
        atual->ant->prox = atual->prox;
    }
    if (atual == l->ultimo) {
        l->ultimo = atual->ant;
    } else {
        atual->prox->ant = atual->ant;
    }
    free(atual);
    return l;
}

int lst2_vazia(Lista2* l) {
    return l->primeiro == NULL;
}

No* lst2_busca(Lista2* l, int v) {
    No* atual = l->primeiro;
    while (atual != NULL && atual->valor != v) {
        atual = atual->prox;
    }
    if (atual != NULL) {
        printf("Valor %d encontrado\n", atual->valor);
    } else {
        printf("Valor nao encontrado\n");
    }
    return atual;
}


void lst2_imprime(Lista2* l) {
    No* atual = l->primeiro;
    while (atual != NULL) {
        printf("%d", atual->valor);
        if (atual->prox != NULL) {
            printf(",");
        }
        atual = atual->prox;
    }
    printf("\n");
}

