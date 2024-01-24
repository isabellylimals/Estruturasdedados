
#include<stdio.h>
#include<stdlib.h>

void altera_preco(Ingresso *i, int n) {
    int escolha_ingresso;
    printf("\nDigite o número do ingresso que deseja alterar: ");
    scanf("%d", &escolha_ingresso);

    if (escolha_ingresso >= 1 && escolha_ingresso <= n) {
        float novo_preco;
        printf("Digite o novo valor do preço: ");
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
    int index_menor = 0, index_maior = 0; int i;

    for ( i = 1; i < n; i++) {
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

int main() {
    int n; int j; int i;
    printf("Quantos ingressos deseja cadastrar? ");
    scanf("%d", &n);

    Ingresso *ingressos = (Ingresso *)malloc(n * sizeof(Ingresso));
    if (ingressos == NULL) {
        exit(1);
    }

    for ( j = 0; j < n; j++) {
        printf("\nIngresso %d:\n", j + 1);
        preenche(&ingressos[j]);
    }

    for ( j = 0; j < n; j++) {
        printf("\nDados do Ingresso %d:\n", j + 1);
        imprimir(&ingressos[j]);
    }

    altera_preco(ingressos, n);

    printf("\nEventos de Ingresso Mais Barato e Mais Caro:\n");
    imprime_menor_maior_preco(n, ingressos);

    free(ingressos);
    return 0;
}

   
