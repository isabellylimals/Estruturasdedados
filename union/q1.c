#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union Genero {
    char mas[10];
    char fem[10];
} Genero;

typedef struct pessoa {
    char nome[50];
    int idade;
    Genero gen;
} Pessoa;

int main() {
    int nump;

    printf("Qual a quantidade de pessoas? ");
    scanf("%d", &nump);

    
    Pessoa *p = (Pessoa *)malloc(nump * sizeof(Pessoa));

    if (p == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        return 1; 
    }

    for (int i = 0; i < nump; ++i) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", p[i].nome); // Leitura do nome obs: coloquei "." e n "->"pois criei um vetor para ser usado    para mais de uma pessoa e junto com o  [i] substitui a seta;
        printf("Idade: ");
        scanf("%d", &p[i].idade); // Leitura da idade

        // Escolhendo o gênero
        printf("Digite 1 para Masculino ou 2 para Feminino: ");
        int escolha;
        scanf("%d", &escolha);

        if (escolha == 1) {
            strcpy(p[i].gen.mas, "Masculino");
        } else if (escolha == 2) {
            strcpy(p[i].gen.fem, "Feminino");
        } else {
            fprintf(stderr, "Opção inválida.\n");
            return 1; // Saída com erro
        }
    }

    for (int i = 0; i < nump; ++i) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", p[i].nome);
        printf("Idade: %d\n", p[i].idade);

        // Verificando o gênero
        if (strlen(p[i].gen.mas) > 0) {
            printf("Gênero: %s\n", p[i].gen.mas);
        } else {
            printf("Gênero: %s\n", p[i].gen.fem);
        }
    }

    // Liberando a memória alocada
    free(p);

    return 0;
}
//obs: fiz para mais de uma pessoa