#ifndef LISTA_H
#define LISTA_H

typedef struct no {
    int valor;
    struct no* prox;
    struct no* ant;
} No;

typedef struct lista2 {
    No* inicio;
    No* fim;
} Lista2;

Lista2* l2circ_cria(void);
void l2circ_insere(Lista2* l, int valor);
void l2circ_imprime(Lista2* l);
void l2circ_imprime_rev(Lista2* l);

#endif 
