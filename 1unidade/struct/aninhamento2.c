#include <stdio.h>


//Exemplo de aninhamento de Estruturas
typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;}Disciplina;
typedef struct aluno{
    char nome[25];
    int idade;
    int matricula;
    //vetor de disciplinas 
    Disciplina *materias; //declarando estaticamente
    //aninhamento de estruturas discplina na estrutura aluno
}Aluno;
int main(){
    int i;
    Aluno *aluno=(Aluno*)malloc (sizeof(Aluno));
    if (aluno==NULL){
    printf("ERRO NA ALOCACAO");
    exit(1)}
    aluno->materias=(Discplina*) malloc (2*sizeof(Disciplina));
    if (aluno->materias==NULL){
        exit(1)
    }
    printf("Informe os dados do aluno: nome,idade,matricula\n");
    scanf("%[^\n]", aluno->nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);
    //cadastro de discplinas
    for(i=0;i<2;i++){
        printf("Digite os dados da discplina%d", i+1);
        scanf("%[^\n]s", aluno->materias[i].nome); //acessa os dados a posicao 0 
        scanf("%d", &)aluno->materias[i].codigo);
        scanf("%d", &),aluno->materias[i].nota);
    }
    }

    
    }
{