#include "lista.c"
#include <stdio.h>

int main() {
    Lista* lista = lista_cria();

    // Inserir elementos na lista
    lista = lista_insere(lista, 52);
    lista = lista_insere(lista, 10);
    lista = lista_insere(lista, 59);
    lista = lista_insere(lista, 52);
    lista = lista_insere(lista, 11);

    // Exibir lista original
    printf("Lista original: ");
    lista_imprime(lista);

  
    lista = retira_n(lista, 11);

    // Exibir lista após remoção
    printf("Lista após remoção do numero: ");
    lista_imprime(lista);

    // Liberar memória da lista
    lista_libera(lista);

    return 0;
}
