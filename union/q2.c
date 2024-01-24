#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipos {
    char alimento[25];
    char bebidas[25];
    char eletronicos[25];
} Tipos;

typedef struct produto {
    char nome[50];
    float preco;
    char tips[50];
    Tipos types;
} Produto;

int main() {
    Produto *p = (Produto *)malloc(1 * sizeof(Produto));

    if (p == NULL) {
        exit(1);
    }

    printf("Digite 1 para Alimento, 2 para Bebida e 3 para Eletrônicos: ");
    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        strcpy(p->types.alimento, "Alimentos");
    } else if (escolha == 2) {
        strcpy(p->types.bebidas, "Bebidas");
    } else if (escolha == 3) {
        strcpy(p->types.eletronicos, "Eletrônicos");
    }

    printf("\nProduto:\n");
    printf("Nome: ");
    scanf("%s", p->nome); // Leitura do nome
    printf("Preço: ");
    scanf("%f", &p->preco); // Leitura do preço
    printf("Tipo: %s\n", p->types.alimento);

    printf("\nPRODUTO:\n");
    printf("Nome: %s\n", p->nome);
    printf("Preço: %f\n", p->preco);
    printf("Tipo: %s\n", p->types.alimento);

    // Liberando a memória alocada
    free(p);

    return 0;
}
