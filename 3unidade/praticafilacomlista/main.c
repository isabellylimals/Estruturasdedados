#include"fila_lista.c"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    struct Lista_geral* lista_geral = NULL;
    struct Lista_atendidos* lista_atendidos = NULL;

    char opcao;
    do {
        printf("1-Adicionar Paciente a lista geral.\n");
        printf("2-Remover paciente por fila(paciente foi atendido).\n");
        printf("3- Sair.\n");
        printf("Escolha uma opcao acima:\n");
        scanf(" %c", &opcao);

        switch (opcao) {
        case '1': {
            Paciente* novo_paciente = (Paciente*)malloc(sizeof(Paciente));
            printf("Digite a idade do paciente.\n");
            scanf("%d", &novo_paciente->idade);
            printf("Digite o nome do paciente:\n");
            scanf(" %[^\n]", novo_paciente->nome);
            printf("Insira o digito Unico do paciente:\n");
            scanf("%d", &novo_paciente->digito_unico);
            lista_geral = adicionar_paciente_geral(lista_geral, novo_paciente);
            printf("Paciente adicionado com sucesso.\n");
            break;
        }
        case '2': {
            printf("Lista geral antes da remocao:\n");
            imprimir_gerais(lista_geral);
            remover_paciente_por_fila(&lista_geral, &lista_atendidos);
            imprimir_atendidos(lista_atendidos);
            break;
        }
        case '3': {
            printf("Saindo.\n");
            break;
        }
        default: {
            printf("Opcao invalida.\n");
            break;
        }
        }

    } while (opcao != '3');

    return 0;
}
