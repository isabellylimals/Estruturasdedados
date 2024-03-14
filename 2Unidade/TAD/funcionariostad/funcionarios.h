#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H


typedef struct Funcionario;

//Função para copiar dados dos funcionários
void copia_dados(FILE* arquivo, int num_funcionarios, Funcionario* pessoal);

#endif // FUNCIONARIOS_H
