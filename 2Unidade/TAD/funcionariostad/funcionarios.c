#include "funcionarios.h"
#include<stdio.h>
#include<stdlib.h>

struct funcionario{
    char nome[100];
    char departamento[2];
    float salario;
};

//funcao para copiar dados
void copia_dados(FILE* arquivo, int num_funcionarios, Funcionario* pessoal) {
    int i;
    for (i = 0; i < num_funcionarios; i++) {
        (fscanf(arquivo, "%s %s %f", pessoal[i].nome, pessoal[i].departamento, &pessoal[i].salario) != 3) 
           
            
        
    }
}

