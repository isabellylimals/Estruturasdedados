//Implemente uma função que tenha como valor de retorno o ponteiro para o
//último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:
//Lista* ultimo(Lista* l);
 
 #include "lista.h"
 #include<stdio.h>
#include<stdlib.h>
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
Lista* ultimo(Lista *list) {
    Lista *ultimo_elemento = NULL;
    Lista *p;
    for (p = list; p != NULL; p = p->prox_elemento) {
        ultimo_elemento = p;
        
    }
    printf("O ultimo no eh: %d\n", ultimo_elemento);
  
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
