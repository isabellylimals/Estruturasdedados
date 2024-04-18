#include <stdio.h>
#include "lista.c"

int main() {
    Lista2* l = l2circ_cria();
    l2circ_insere(l, 1);
    l2circ_insere(l, 9);
    l2circ_insere(l, 7);
    l2circ_insere(l, 5);
    l2circ_insere(l, 8);

    printf("A lista em ordem normal:\n");
    l2circ_imprime(l);

    printf("A lista em ordem reversa:\n");
    l2circ_imprime_rev(l);

    return 0;
}
