#ifndef LISTA_H
#define LISTA_H

typedef struct lista Lista;

Lista* lista_cria(void);
Lista* lista_insere(Lista* l, int valor);
Lista* retira_n(Lista* l, int numero);
void lista_imprime(Lista* l);
void lista_libera(Lista* l);

#endif /* LISTA_H */
