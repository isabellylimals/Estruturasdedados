#ifndef LISTA_H
#define LISTA_H


typedef struct lista Lista;

// Função para criar uma lista vazia
Lista* lista_cria(void);

// Função para inserir um valor no final da lista
Lista* lista_insere(Lista* l, float valor);

// Função para concatenar duas listas
Lista* concatena(Lista* l1, Lista* l2);

#endif // LISTA_H
