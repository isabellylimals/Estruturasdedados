#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista* cria_lista(void) {
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    if (lista == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    lista->inicio = NULL;
    return lista;
}

void liberar(Lista* lista) {
    No* atual = lista->inicio;
    if (atual == NULL) {
        free(lista);
        return;
    }
    No* prox;
    do {
        prox = atual->prox;
        free(atual);
        atual = prox;
    } while (atual != lista->inicio);
    free(lista);
}

void insere_elemento(Lista* lista, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    novo->valor = valor;
    if (lista->inicio == NULL) {
        novo->prox = novo;
        novo->ant = novo;
        lista->inicio = novo;
    } else {
        No* ultimo = lista->inicio->ant;
        novo->prox = lista->inicio;
        novo->ant = ultimo;
        ultimo->prox = novo;
        lista->inicio->ant = novo;
    }
}

void remove_elemento(Lista* lista, int valor) {
    No* atual = lista->inicio;
    do {
        if (atual->valor == valor) {
            No* ant = atual->ant;
            No* prox = atual->prox;
            ant->prox = prox;
            prox->ant = ant;
            if (atual == lista->inicio) {
                lista->inicio = prox;
            }
            free(atual);
            return;
        }
        atual = atual->prox;
    } while (atual != lista->inicio);
    printf("Elemento nao encontrado na lista\n");
}

void imprime_lista(Lista* lista) {
    if (lista->inicio == NULL) {
        printf("Lista vazia\n");
        return;
    }
    No* atual = lista->inicio;
    do {
        printf("%d ", atual->valor);
        atual = atual->prox;
    } while (atual != lista->inicio);
    printf("\n");
}
