#include "funcionarios.h"


void copia_dados(FILE* arquivo, int num_funcionarios, Funcionario* pessoal) {
    int  cont;
    for ( cont = 0; cont< num_funcionarios; cont++) {
        fscanf(arquivo, "%s %s %f", pessoal[cont].nome, pessoal[cont].departamento, &pessoal[cont].salario);
    }
}
