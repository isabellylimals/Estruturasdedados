#include <stdio.h>
#include <stdlib.h>
#include "q1.c"

int main() {
    struct pilha* p = pilha_cria();

    pilha_push(p, 1.87);
    pilha_push(p, 25.6);
    pilha_push(p, 90.0);

    printf("Elementos da pilha:\n");
    imprime(p);

    printf("Desempilhando elementos:\n");
    while (!pilha_vazia(p)) {
        printf("%f\n", pilha_pop(p));
    }

    free(p);
    return 0;
}