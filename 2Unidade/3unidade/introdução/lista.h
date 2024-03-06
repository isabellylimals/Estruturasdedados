#ifndef LISTA_H
#define LISTA_H

// Definição da estrutura do nó da lista
struct lista {
    int info;
    struct lista *prox_elemento;
};
typedef struct lista Lista;

// Funções para manipulação da lista
Lista* lista_cria(void);
Lista* insere_elemento(Lista *list, int valor);
Lista* lst_busca(Lista *list, int valor);
int maiores(Lista *list, int numero);
Lista* lista_remove_primeiro(Lista *list);

#endif // LISTA_H
