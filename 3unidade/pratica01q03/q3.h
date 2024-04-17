#ifndef Q3_H
#define Q3_H

typedef struct lista Lista;

Lista* lista_cria(void);
Lista* lista_insere(Lista* l, float valor);
Lista* concatena(Lista* l1, Lista* l2);
void imprime_lista(Lista* l);
#endif 
