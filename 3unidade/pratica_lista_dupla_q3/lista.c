#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista2* l2circ_cria(void) {
    Lista2* l = (Lista2*)malloc(sizeof(Lista2));
    if (l == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    l->inicio = NULL;
    l->fim = NULL;
    return l;
}

void l2circ_insere(Lista2* l, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    novo->valor = valor;
    if (l->inicio == NULL) {
        l->inicio = novo;
        l->fim = novo;
        novo->prox = novo;
        novo->ant = novo;
    } else {
        novo->prox = l->inicio;
        novo->ant = l->fim;
        l->fim->prox = novo;
        l->inicio->ant = novo;
        l->fim = novo;
    }
}

void l2circ_imprime(Lista2* l) {
    if (l->inicio == NULL) {
        printf("Lista vazia\n");
        return;
    }
    No* atual = l->inicio;
    do {
        printf("%d,", atual->valor);
        atual = atual->prox;
    } while (atual != l->inicio);
    printf("\n");
}

void l2circ_imprime_rev(Lista2* l) {
    if (l->inicio == NULL) {
        printf("Lista vazia\n");
        return;
    }
    No* atual = l->fim;
    do {
        printf("%d,", atual->valor);
        atual = atual->ant;
    } while (atual != l->fim);
    printf("\n");
}
