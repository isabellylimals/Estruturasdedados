#include <stdio.h>
#include <stdlib.h>
#include "q1.c"

int main() {
    struct pilha* minha_pilha = pilha_cria();

    pilha_push(minha_pilha, 15.5);
    pilha_push(minha_pilha, 36.7);
    pilha_push(minha_pilha, 25.7);

    // Imprimir os valores da pilha
    imprime(minha_pilha);

    // Remover um elemento da pilha
    float valor_removido = pilha_pop(minha_pilha);
    printf("Valor removido: %f\n", valor_removido);

    // Liberação de memória
    free(minha_pilha->vet);
    free(minha_pilha);

    return 0;
}
