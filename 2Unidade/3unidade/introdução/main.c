#include <stdio.h>
#include "lista.c" // inclua o arquivo .c apenas se você não estiver compilando os arquivos separadamente

int main() {
    Lista* lista_encadeada = lista_cria();

    lista_encadeada = insere_elemento(lista_encadeada, 3); // inserindo o valor 3 na lista
    lista_encadeada = insere_elemento(lista_encadeada, 2);
    lista_encadeada = insere_elemento(lista_encadeada, 1);
    lista_encadeada = lista_remove_primeiro(lista_encadeada);

    return 0;
}
