#include "funcionarios.h"
#include<stdio.h>
#include<stdlib.h>


//funcao para copiar dados
void copia_dados(FILE* arquivo, int num_funcionarios, Funcionario* pessoal) {
    int i;
    for (i = 0; i < num_funcionarios; i++) {
        if (fscanf(arquivo, "%s %s %f", pessoal[i].nome, pessoal[i].departamento, &pessoal[i].salario) != 3) {
            printf("Erro ao ler dados do funcionário %d.\n", i + 1);
            // Trate o erro conforme necessário (por exemplo, encerre o programa).
        }
    }
}

