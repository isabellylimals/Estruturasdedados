

#include <stdio.h>
#include "modulopratica.h"

int main() {
    float numero1, numero2;
    int opcao;
    float resultado;

    printf("Bem-vindo à Calculadora em C!\n");

    do {
        // Menu de opções
        printf("\nEscolha a operação:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            // Entrada dos números
            printf("Digite o primeiro número: ");
            scanf("%f", &numero1);
            printf("Digite o segundo número: ");
            scanf("%f", &numero2);
        }

        // Processamento e saída
        switch (opcao) {
            case 1:
                resultado = somar(numero1, numero2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtrair(numero1, numero2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(numero1, numero2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                resultado = dividir(numero1, numero2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 5:
                printf("Saindo da calculadora...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\
                  
