#ifndef Q2_H_INCLUDED
#define Q2_H__INCLUDED

typedef struct lista Lista;

Lista* lista_cria(void);
Lista* insere_elemento(Lista *list, int valor);
Lista* ultimo(Lista *list);

#endif
