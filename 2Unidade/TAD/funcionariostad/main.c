#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.c"

int main() {
    FILE* entrada = fopen("entrada.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    int num_funcionarios;
    fscanf(entrada, "%d", &num_funcionarios);

    Funcionario* pessoal = (Funcionario*)malloc(num_funcionarios * sizeof(Funcionario));
    if (pessoal == NULL) {
        printf("Erro ao alocar memória.\n");
        fclose(entrada);
        return 1;
    }

    copia_dados(entrada, num_funcionarios, pessoal);
    fclose(entrada);

    float total_gasto_A = 0, total_gasto_B = 0, total_gasto_C = 0; int i;
    for (i = 0; i < num_funcionarios; i++) {
        
        char depto = pessoal[i].departamento[0];
        if (depto == 'A') total_gasto_A += pessoal[i].salario;
        else if (depto == 'B') total_gasto_B += pessoal[i].salario;
        else if (depto == 'C') total_gasto_C += pessoal[i].salario;
    }

    FILE* saida = fopen("saida.txt", "w");
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        free(pessoal);
        return 1;
    }

    fprintf(saida, "Total de gastos para o departamento A: %.2f\n", total_gasto_A);
    fprintf(saida, "Total de gastos para o departamento B: %.2f\n", total_gasto_B);
    fprintf(saida, "Total de gastos para o departamento C: %.2f\n", total_gasto_C);

    fclose(saida);
    free(pessoal);
    return 0;
}
