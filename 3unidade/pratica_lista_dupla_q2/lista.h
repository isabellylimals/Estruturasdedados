#ifndef LISTA_H
#define LISTA_H

typedef struct no {
    int valor;
    struct no* prox;
} No;

typedef struct lista {
    No* inicio;
    No* fim;
} Lista;

Lista* lcirc_cria(void);
void lcirc_insere(Lista* l, int valor);
void lcirc_imprime(Lista* l);

#endif 
