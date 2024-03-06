//Implemente uma função que receba duas listas encadeadas de valores reais e
//retorne a lista resultante da concatenação das duas listas recebidas como
//parâmetros, isto é, após a concatenação, o último elemento da primeira lista
////deve apontar para o primeiro elemento da segunda lista, conforme ilustrado a
//seguir: Essa função deve obedecer ao protótipo: Lista* contatena(Lista* l1, Lista* l2);

#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct lista {
    float valor;
    struct lista *prox_elemento;
};
Lista* lista_cria(void) {
    return NULL;
}

// Função para inserir um valor no final da lista
Lista* lista_insere(Lista* l, float valor) {
    Lista* new = (Lista*)malloc(sizeof(Lista));
    if (new== NULL) {
        printf("Erro na alocacao");
        exit(1);
    }
    new->valor = valor;
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

// Função para concatenar duas listas
Lista* concatena(Lista* l1, Lista* l2) {
    if (l1 == NULL) {
        return l2;
    } else {
        Lista* atual = l1;
        while (atual->prox_elemento != NULL) {
            atual = atual->prox_elemento;
        }
        atual->prox_elemento= l2;
        return l1;
    }
}