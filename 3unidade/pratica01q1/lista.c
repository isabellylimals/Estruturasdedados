//Considere listas encadeadas de valores inteiros e implemente uma função para retornar o número de nós da lista que possuem o campo info com valores maiores do que n. Essa função deve obedecer ao protótipo: int maiores(Lista* l l, int n);

#include "lista.h"
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
        printf("Erro na alocacao");
        exit(1);
    }
    novo_no->info = valor;
    novo_no->prox_elemento = list;
    return novo_no; 
}

Lista* lst_busca(Lista *list, int valor) {
    Lista *p;
    for (p = list; p != NULL; p = p->prox_elemento) {
        if (p->info == valor)
            return p;
    }
    return NULL;
}

int maiores(Lista *list, int numero) {
    Lista *count;
    int contador = 0;
    for (count = list; count != NULL; count = count->prox_elemento) {
        if (count->info>numero) {
            contador++;
        }
    }

    printf("A quantidade de nos na lista que sao maiores que o numero informado eh: %d\n", contador);
    return contador;
}

Lista* lista_remove_primeiro(Lista *list) {
    if (list == NULL) {
        return NULL; 
    }

    Lista *temp = list; 
    list = list->prox_elemento; 
    free(temp); 

    return list; 
}
