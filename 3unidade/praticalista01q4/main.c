#include "lista.c"
#include <stdio.h>

int main() {
    Lista* lista = lista_cria();

   
    lista = lista_insere(lista, 52);
    lista = lista_insere(lista, 10);
    lista = lista_insere(lista, 59);
    lista = lista_insere(lista, 52);
    lista = lista_insere(lista, 11);

  
    printf("Lista original: ");
    lista_imprime(lista);

  
    lista = retira_n(lista, 11);

    
    printf("Lista apos remocao do numero: ");
    lista_imprime(lista);

    
    lista_libera(lista);

    return 0;
}
