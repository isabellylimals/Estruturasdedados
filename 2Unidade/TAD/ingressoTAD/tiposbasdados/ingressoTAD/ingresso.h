#ifndef INGRESSO_H
#define INGRESSO_H

typedef struct ingresso Ingresso; //redefinição da struc ingresso;

Ingresso* coletardados(int n); //função que coleta dados dos ingressos
void altera_preco(Ingresso *i, int n);//função para alterar preço
void imprimir(Ingresso *i);//função para imprimir dados dos ingressos
void imprime_menor_maior_preco(int n, Ingresso *vet);//função para imprimir o preço do maior e menor ingresso

#endif /* INGRESSO_H */
