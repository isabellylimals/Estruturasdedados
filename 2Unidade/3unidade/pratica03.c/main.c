#include <stdio.h>
#include "lista.c"



int main() {
    Lista* lista1 = lista_cria();
    Lista* lista2 = lista_cria();

    // Inserir elementos na lista1
    lista1 = lista_insere(lista1, 4.5);
    lista1 = lista_insere(lista1, 10.0);
    lista1 = lista_insere(lista1, 5.8);

    // Inserir elementos na lista2
    lista2 = lista_insere(lista2, 15.7);
    lista2 = lista_insere(lista2, 90.0);

    // Concatenar as duas listas
    lista1 = concatena(lista1, lista2);

   printf("Lista concatenada:\n");
    Lista* atual = lista1;
    while (atual != NULL) {
        printf("%.2f ", atual->valor);
        atual = atual->prox_elemento;
    }
    printf("\n");

    return 0;
}

