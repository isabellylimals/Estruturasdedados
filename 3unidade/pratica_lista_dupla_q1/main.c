#include <stdio.h>
#include "lista.c"

int main() {
    Lista2* lista = lst2_cria();

    printf("Inserindo elementos no final da lista\n");
    lista = lst2_insere(lista, 5);
    lista = lst2_insere(lista, 4);
    lista = lst2_insere(lista, 3);
    lista = lst2_insere(lista, 2);


    lst2_imprime(lista);

 
    lista = lst2_retira(lista, 2);

    printf(" lista apos a remocao\n");
    lst2_imprime(lista);

   
    No* resultado = lst2_busca(lista, 4);
    if (resultado != NULL) {
        printf("Elemento 2 encontrado na lista.\n");
    } else {
        printf("Elemento 2 não encontrado na lista.\n");
    }

    printf("Liberando a lista...\n");
    lst2_libera(lista);

    return 0;
}
