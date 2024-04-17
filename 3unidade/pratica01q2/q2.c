//Implemente uma função que tenha como valor de retorno o ponteiro para o
//último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:
//Lista* ultimo(Lista* l);
#include "q2.h"
#include <stdio.h>
#include <stdlib.h>

struct lista {
    int info;
    Lista *prox_elemento;
};

Lista* lista_cria(void) {
    return NULL;
}

Lista* insere_elemento(Lista *list, int valor) {
    Lista *novo_no = (Lista*)malloc(sizeof(Lista));
    if (novo_no == NULL) {
        printf("Erro na alocação");
        exit(1);
    }
    novo_no->info = valor;
    novo_no->prox_elemento = list;
    return novo_no;
}


Lista* ultimo(Lista *list) {
    Lista *ultimo_elemento = NULL;
    Lista *p;
    for (p = list; p != NULL; p = p->prox_elemento) {
        ultimo_elemento = p;
    }
    return ultimo_elemento;
}
