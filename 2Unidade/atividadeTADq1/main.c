#include "contabancaria.c"
#include <stdio.h>
#include <stdlib.h>

int main() {

    ContaBancaria *conta = (ContaBancaria *)malloc(sizeof(ContaBancaria));
    ContaBancaria *conta_destino = (ContaBancaria *)malloc(sizeof(ContaBancaria));

    if (conta== NULL || conta_destino == NULL) {
        printf("Erro ao alocar memória para as contas.\n");
        return 1;
    }
    
    ContaDados(conta);
    int opcao;
    printf("Digite '1' para deposito, '2' para saque ou '3' para transferencia: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            depositar(conta);
            break;
        case 2:
            sacar(conta);
            break;
        case 3:
            transferir(conta, conta_destino);
            break;
        default:
            printf("Opção inválida.\n");
    }

    free(conta);
    free(conta_destino);

    return 0;
}