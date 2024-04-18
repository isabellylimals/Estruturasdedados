#include <stdio.h>
#include "lista.c"

int main() {
    Lista* lista = cria_lista();

    insere_elemento(lista, 6);
    insere_elemento(lista, 7);
    insere_elemento(lista, 8);
    insere_elemento(lista, 8);

  
    imprime_lista(lista);

    remove_elemento(lista, 7);

    printf("Lista depois remocao do elemento 2:\n");
    imprime_lista(lista);

    liberar(lista);

    return 0;
}
