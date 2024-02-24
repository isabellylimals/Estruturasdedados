#include "contabancaria.h"
#include <stdio.h>

struct contabancaria {
    char titular[50];
    int numero;
    float saldo;
};

void ContaDados(ContaBancaria *conta) {
    printf("Qual o nome do titular da conta?\n");
    scanf("%s", conta->titular);
    printf("Qual o numero da conta?\n");
    scanf("%d", &conta->numero);
    printf("Qual o saldo inicial da conta?\n");
    scanf("%f", &conta->saldo);
}

void depositar(ContaBancaria *conta) {
    float deposito;
    printf("Digite o valor do deposito?\n");
    scanf("%f", &deposito);

    conta->saldo += deposito;
    printf("Saldo após o deposito : %.2f\n", conta->saldo);
}

void sacar(ContaBancaria *conta) {
    float saque;
    printf("Digite o valor que deseja sacar:\n");
    scanf("%f", &saque);
    
    if (conta->saldo < saque) {
        printf("Valor insuficiente\n");
    } else {
        conta->saldo -= saque;
        printf("Saldo após o saque: %.2f\n", conta->saldo);
    }
}

void transferir(ContaBancaria *conta, ContaBancaria *conta_destino) {
    float transferencia;
    printf("Digite o valor que deseja transferir:\n");
    scanf("%f", &transferencia);
    
    if (conta->saldo < transferencia) {
        printf("Saldo insuficiente para transferencia\n");
    } else {
        conta->saldo -= transferencia;
        conta_destino->saldo += transferencia;
        printf("Transferencia realizada com sucesso!\n");
        printf("Saldo apos a transferencia:%2f\n", conta->saldo);
    }
}

