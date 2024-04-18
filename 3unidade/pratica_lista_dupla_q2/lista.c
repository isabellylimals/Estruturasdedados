#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista* lcirc_cria(void) {
    Lista* l = (Lista*)malloc(sizeof(Lista));
    if (l == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    l->inicio = NULL;
    l->fim = NULL;
    return l;
}

void lcirc_insere(Lista* l, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    novo->valor = valor;
    if (l->inicio == NULL) {
        l->inicio = novo;
        l->fim = novo;
        novo->prox = novo; 
    } else {
        novo->prox = l->inicio;
        l->fim->prox = novo;
        l->fim = novo;
    }
}

void lcirc_imprime(Lista* l) {
    if (l->inicio == NULL) {
        printf("Lista vazia\n");
        return;
    }
    No* atual = l->inicio;
    do {
        printf("%d", atual->valor);
        atual = atual->prox;
    } while (atual != l->inicio);
    printf("\n");
}

