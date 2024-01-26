#include<stdio.h>

typedef enum genero {
    masculino,
    feminino
} Genero;

typedef struct pessoa {
    char nome[50];
    int idade;
    Genero gen;
} Pessoa;

void receber_dados(Pessoa *pessoa) {
    printf("Informe o nome:\n");
    scanf(" %[^\n]", pessoa->nome);  
    printf("Informe a idade:\n");
    scanf("%d", &pessoa->idade);
    printf("Informe o genero (0-MASCULINO, 1-FEMININO):\n");  
    scanf("%d", (int *)&pessoa->gen);  

}

void imprimir_dados(Pessoa *pessoa) {
    printf("Nome: %s\nIdade: %d\nGenero: %s\n",
           pessoa->nome,
           pessoa->idade,
           pessoa->gen == masculino ? "Masculino" : "Feminino"); //a interrogação(?) quer dizer "se for igual vai aparecer Masculino e o ":" senao, e ai aparece Feminino"
        
}

int main() {
    Pessoa pessoa;

    receber_dados(&pessoa);
    imprimir_dados(&pessoa);

    return 0;
}
