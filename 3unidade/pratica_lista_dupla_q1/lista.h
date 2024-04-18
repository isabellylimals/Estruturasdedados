#ifndef LISTA_H
#define LISTA_H

typedef struct no {
    int valor;
    struct no* prox;
    struct no* ant;
} No;

typedef struct lista2 {
    No* primeiro;
    No* ultimo;
} Lista2;


Lista2* lst2_cria(void);
void lst2_libera(Lista2* l);
Lista2* lst2_insere(Lista2* l, int v);
Lista2* lst2_retira(Lista2* l, int v);
int lst2_vazia(Lista2* l);
No* lst2_busca(Lista2* l, int v);
void lst2_imprime(Lista2* l);
#endif 
