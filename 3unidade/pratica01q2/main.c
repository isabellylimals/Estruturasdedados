#include "q2.c"
#include <stdio.h>

int main() {
    Lista *lista = lista_cria();
    lista = insere_elemento(lista, 1);
    lista = insere_elemento(lista, 2);
    lista = insere_elemento(lista, 3);

    Lista *ultimo_no = ultimo(lista);
    if (ultimo_no != NULL) {
        printf("O ultimo no eh: %d\n", ultimo_no->info);
    } else {
        printf("Lista vazia\n");
    }

    return 0;
}
