#include <stdio.h>
#include "lista.c"

int main() {
    Funcionario f1 = {'A', 1, "Joao", 2000};
    Funcionario f2 = {'B', 2, "Maria", 2500};
    Funcionario f3 = {'A', 3, "Pedro", 1800};

    No* lista = cria_no(f1);
    lista->prox = cria_no(f2);
    lista->prox->prox = cria_no(f3);

    float folhaPagtoA = lstfunc_folha_pagto(lista, 'A');
    float folhaPagtoB = lstfunc_folha_pagto(lista, 'B');

    printf("Folha de pagamento do departamento A: R$%.2f\n", folhaPagtoA);
    printf("Folha de pagamento do departamento B: R$%.2f\n", folhaPagtoB);


    No* atual = lista;
    while (atual != NULL) {
        No* prox = atual->prox;
        libera_no(atual);
        atual = prox;
    }

    return 0;
}
