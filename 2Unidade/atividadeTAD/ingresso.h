#ifndef INGRESSO_H
#define INGRESSO_H

typedef struct ingresso Ingresso;

Ingresso* coletardados(int n);
void altera_preco(Ingresso *i, int n);
void imprimir(Ingresso *i);
void imprime_menor_maior_preco(int n, Ingresso *vet);

#endif /* INGRESSO_H */
