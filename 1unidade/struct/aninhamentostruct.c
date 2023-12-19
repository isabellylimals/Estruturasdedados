#include<stdio.h>


//Exemplo de aninhamento de Estruturas
typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;}Disciplina;
typedef struct aluno{
    char nome[25];
    int idade;
    int matricula;
    //vetor de discplinas 
    Disciplina materias[7]; //declarando estaticamente
    //aninhamento de estruturas discplina na estrutura aluno
}Aluno;
int main()
{
    Aluno aluno; //vai receber os dados da estruturas aluno
    aluno.idade=19;
    aluno.matricula=2023011589;
    aluno.materias[0].codigo=5896; //acessou a estrutura discplina e acessou a variavel codigo
    aluno.materias[0].nota=10; //acessando os dados da metria armazenada no vetor 0
    printf("%d %d %d %f\n", aluno.idade,aluno.matricula,aluno.materias.codigo,aluno.materias.nota);
    return 0;
}