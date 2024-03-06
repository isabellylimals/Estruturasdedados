#include <stdio.h>
#include <stdlib.h>
#include "ingresso.h"

int main() {
    int n; int j;
    printf("Quantos ingressos deseja cadastrar? ");
    scanf("%d", &n);

    Ingresso *ingressos = coletardados(n);
    altera_preco(ingressos, n);

    printf("\nDados dos Ingressos:\n");
    for (j = 0; j < n; j++) {
        printf("\nDados do Ingresso %d:\n", j + 1);
        imprimir(&ingressos[j]);
    }

    printf("\nEventos de Ingresso Mais Barato e Mais Caro:\n");
    imprime_menor_maior_preco(n, ingressos);

    free(ingressos);
    return 0;
}
