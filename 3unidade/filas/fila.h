#include<stdio.h>
#include<stdlib.h>
#include


typedef struct _fila{
    int inicio,fim;
    int qtd;//numero de elementos da fila
    int MAX_SIZE; // tamanho maximo da fila
    int *valores;// vetor dos valores
}Fila;
Fila*q;
void DestruirFila(Fila**q);
int FilaVazia(Fila*q);
int FilaCheia(Fila*q);
int InsereFila(Fila*q, int elementos);
RemoveFila(Fila*q);