#ifndef LISTA_H
#define LISTA_H


typedef struct lista Lista;

Lista* lista_cria(void);
Lista* insere_elemento(Lista *list, int valor);
Lista* lst_busca(Lista *list, int valor);
int maiores(Lista *list, int numero);
Lista* lista_remove_primeiro(Lista *list);

#endif // LISTA_H
