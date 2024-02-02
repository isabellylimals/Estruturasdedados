//Faca um programa em C que solicita ao usu´ario informa¸c˜oes de funcionarios via teclado. As informacoes digitadas pelo o usu´ario s˜ao: id, nome e salario do funcionario. Armazene as informa¸coes digitadas pelo usu´ario em um arquivo texto.

#include <stdio.h>

typedef struct funcionario {
    int id;
    char nome[50];
    float salario;
} Funcionario;

int main(void) {
    Funcionario f;
    FILE *saida;

    saida = fopen("saidaf.txt", "w");

    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    int qtd;  int i;
    printf("Quantos funcionarios serao cadastrados?");
    scanf("%d", &qtd);

    for ( i = 0; i < qtd; i++) {
        printf("Qual seu id?\n" i+1);
        scanf("%d", &f.id);
        printf("Qual o nome do funcionario?\n" i+1);
        scanf("%s", f.nome);
        printf("Qual o salario do funcionario?\n" i+1);
        scanf("%f", &f.salario);

       fprintf(saida, "%d %s %.2f\n", f.id, f.nome, f.salario);
    }

    fclose(saida);
 
    return 0;
}
