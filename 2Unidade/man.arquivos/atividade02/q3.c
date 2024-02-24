#include <stdio.h>
#include <string.h>

typedef struct fruta {
    char nome[25];
    float preco;
} Fruta;

int main() {
    Fruta frutas;
    FILE *saida;
    saida = fopen("frutas.txt", "w");

    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    printf("CADASTRO DAS FRUTAS:\n");
    printf("Se deseja encerrar o cadastro, digite a palavra 'sair'\n");

    int i = 1;

    while (1) {
        printf("Digite o nome da fruta %d:\n", i);
        scanf("%s", frutas.nome);

        if (strcmp(frutas.nome, "sair") == 0) {
            break;  // Verifica se o nome da fruta é igual a "sair" usando a função strcmp (string compare).
                   // strcmp retorna 0 se as strings forem iguais.
                // Se o nome da fruta for "sair", o bloco dentro do if é executado, então O 'break' é utilizado para sair imediatamente do loop.
 }
        printf("Digite o preco da fruta %d:\n", i);
        scanf("%f", &frutas.preco);

        fprintf(saida, "%s, %.2f\n", frutas.nome, frutas.preco);
        printf("Fruta cadastrada com sucesso!\n");

        i++;
    }
     printf("Cadastro de frutas encerrado!\n");

    fclose(saida);

    return 0;
}
