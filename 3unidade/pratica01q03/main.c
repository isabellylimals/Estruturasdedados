#include "q3.c"
#include <stdio.h>

int main() {
    Lista* l1 = lista_cria();
    l1 = lista_insere(l1, 1.5);
    l1 = lista_insere(l1, 2.5);
    l1 = lista_insere(l1, 3.5);

    Lista* l2 = lista_cria();
    l2 = lista_insere(l2, 4.5);
    l2 = lista_insere(l2, 5.5);
    l2 = lista_insere(l2, 6.5);

    printf("Lista 1: ");
    imprime_lista(l1);
    printf("Lista 2: ");
    imprime_lista(l2);

    Lista* l_concatenada = concatena(l1, l2);

    printf("Lista concatenada: ");
    imprime_lista(l_concatenada);

    return 0;
}
