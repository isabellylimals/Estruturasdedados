//main.c
#include <stdio.h>
#include "q2.c"

int main() {
    struct pilha* p1 = pilha_cria();
    struct pilha* p2 = pilha_cria();

    pilha_push(p1, 4.5);
    pilha_push(p1, 8.4);
    pilha_push(p1, 3.9);

    pilha_push(p2, 47.4);
    pilha_push(p2, 20.4);
    pilha_push(p2, 6.68);

    concatena_pilhas(p1, p2);

    printf("\nPilhas concatendas\n");
    imprimir(p1);

    free(p1);
    free(p2);

    return 0;
}
