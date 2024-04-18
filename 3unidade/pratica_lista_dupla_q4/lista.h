#ifndef LISTA_H
#define LISTA_H

typedef struct no {
    int valor;
    struct no* prox;
    struct no* ant;
} No;

typedef struct lista {
    No* inicio;
} Lista;

Lista* cria_lista(void);
void liberar(Lista* lista);
void insere_elemento(Lista* lista, int valor);
void remove_elemento(Lista* lista, int valor);
void imprime_lista(Lista* lista);

#endif 
