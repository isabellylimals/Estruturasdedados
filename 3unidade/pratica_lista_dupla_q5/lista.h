#ifndef LISTA_H
#define LISTA_H

typedef struct funcionario {
    char depto;
    int mat;
    char nome[81];
    float salario;
} Funcionario;

typedef struct no {
    Funcionario funcionario;
    struct no* prox;
} No;

No* cria_no(Funcionario f);
float lstfunc_folha_pagto(No* lista, char depto);
void libera_no(No* no);

#endif

