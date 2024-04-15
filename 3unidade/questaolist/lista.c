/*Considere listas de valores inteiros e implemente uma função que receba como
parâmetros uma lista encadeada e um valor inteiro n, retire da lista todas as
ocorrências de n e retorne a lista resultante. Essa função deve obedecer ao
protótipo: Lista* retira_n(Lista* l, int n);
*/
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct lista {
    int info;
    struct lista *prox_elemento;
};

Lista* lista_cria(void) {
    return NULL;
}

Lista* lista_insere(Lista* l, int valor) {
    Lista* new = (Lista*)malloc(sizeof(Lista));
    if (new == NULL) {
        printf("Erro na alocacao");
        exit(1);
    }
    new->info = valor;
    new->prox_elemento = NULL;

    if (l == NULL) {
        return new;
    } else {
        Lista* atual = l;
        while (atual->prox_elemento != NULL) {
            atual = atual->prox_elemento;
        }
        atual->prox_elemento = new;
        return l;
    }
}

Lista* retira_n(Lista* l, int numero) {
    Lista* atual = l;
    Lista* anterior = NULL;

    while (atual != NULL) {
        if (atual->info == numero) {
            if (anterior == NULL) {
                // Se o elemento a ser removido for o primeiro da lista
               l = atual->prox_elemento; 
                free(atual);
                atual = l;
            } else {
                anterior->prox_elemento = atual->prox_elemento;
                free(atual);
                atual = anterior->prox_elemento;
            }
        } else {
            anterior = atual;
            atual = atual->prox_elemento;
        }
    }

    return l;
}


