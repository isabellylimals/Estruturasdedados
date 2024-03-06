#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista {
    int info;
    struct lista *prox_elemento;
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
    return novo_no; // retorna o novo nó, que agora é o primeiro da lista
}

Lista* lst_busca(Lista *list, int valor) {
    Lista *p;
    for (p = list; p != NULL; p = p->prox_elemento) {
        if (p->info == valor)
            return p;
    }
    return NULL;
}

Lista* lista_remove_primeiro(Lista *list) {
    if (list == NULL) {
        return NULL; // Lista vazia, não há o que remover
    }

    Lista *temp = list; // Salva o ponteiro para o primeiro nó
    list = list->prox_elemento; // Atualiza o ponteiro da lista para o segundo nó
    free(temp); // Libera a memória do primeiro nó

    return list; // Retorna a lista atualizada
}

