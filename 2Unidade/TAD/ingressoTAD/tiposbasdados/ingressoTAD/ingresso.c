#include "ingresso.h"
#include <stdio.h>
#include <stdlib.h>

struct ingresso {
    float preco;
    char local[80];
    char atracao[50];
};

Ingresso* coletardados(int n) {
    int cont;
    Ingresso *i;

    for ( cont = 0; cont < n; cont++) {
       
        printf("Digite o local:\n");
        scanf("%s", i[cont].local);
         printf("Qual o preco do ingresso?\n");
        scanf("%f", &i[cont].preco);
        printf("Digite a atracao:\n");
        scanf("%s", i[cont].atracao);
    }
    return i;
}

void altera_preco(Ingresso *i, int n) {
    int escolha_ingresso;
    printf("\nDigite o número do ingresso que deseja alterar (de 1 a %d): ", n);
    scanf("%d", &escolha_ingresso);

    if (escolha_ingresso >= 1 && escolha_ingresso <= n) {
        float novo_preco;
        printf("Digite o novo valor do preço:\n ");
        scanf("%f", &novo_preco);
        i[escolha_ingresso - 1].preco = novo_preco;

        printf("\nDados do Ingresso %d Atualizados:\n", escolha_ingresso);
        imprimir(&i[escolha_ingresso - 1]);
    } else {
        printf("Escolha inválida.\n");
    }
}


void imprimir(Ingresso *i) {
    printf("Preço: %.2f\nLocal: %s\nAtração: %s\n", i->preco, i->local, i->atracao);
}

void imprime_menor_maior_preco(int n, Ingresso *vet) {
    int index_menor = 0, index_maior = 0;
    int i;

    for (i = 1; i < n; i++) {
        if (vet[i].preco < vet[index_menor].preco) {
            index_menor = i;
        }
        if (vet[i].preco > vet[index_maior].preco) {
            index_maior = i;
        }
    }

    printf("Ingresso Mais Barato:\n");
    imprimir(&vet[index_menor]);

    printf("\nIngresso Mais Caro:\n");
    imprimir(&vet[index_maior]);
}
