#include <stdio.h>
#include <stdlib.h>
#include "lista.c"

int main() {
    ListaHet* lista = (ListaHet*)malloc(sizeof(ListaHet));
    lista->primeiro = NULL;

 
    lista->primeiro = cria_no_ret(9, 1); 
    lista->primeiro->proximo = cria_no_tri(7, 8); 
    lista->primeiro->proximo->proximo = cria_no_circ(6); 

 
    float area_max = max_area(lista);

    printf("A area maxima eh: %.2f\n", area_max);

    No* atual = lista->primeiro;
    while (atual != NULL) {
        No* prox = atual->proximo;
        free(atual);
        atual = prox;
    }
    free(lista);

    return 0;
}
