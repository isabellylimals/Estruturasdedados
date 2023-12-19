#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura aluno antes da função main()
struct aluno {
    char nome[20];
    int idade;
    int mat;
    char email[50];
};

// Declaração das funções
void preenche(struct aluno *a);
void imprime(struct aluno *a);

int main() {
    struct aluno *a = malloc(sizeof(struct aluno));

    if (a == NULL) {
        printf("Erro na alocacao");
        exit(1);
    }

    preenche(a);
    imprime(a);

    free(a);
    return 0;
}

// Definição da função preenche
void preenche(struct aluno *a) {
    printf("Digite o nome do aluno\n");
    scanf(" %[^\n]", a->nome); //quando tem o i n precisa colocar a seta
    printf("Digite a idade\n");
    scanf("%d", &a->idade);
    printf("Digite a matricula\n");
    scanf("%d", &a->mat);
    printf("Digite o email\n");
    scanf(" %[^\n]", a->email);
}

// Definição da função imprime
void imprime(struct aluno *a) {
    printf("Nome: %s\nIdade: %d\nMatricula: %d\nEmail: %s\n",
           a->nome, a->idade, a->mat, a->email);
}
