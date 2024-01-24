#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[20];
    float ndocumento;
    int idade;
   
};

void preenche(struct Pessoa *p, int q) {
    int i;
    for (i = 0; i < q; i++) {
        printf("Digite o nome da pessoa: ");
        scanf("%[^\n]s", p[i].nome);
        printf("Digite o numero do documento ");
        scanf("%f", &p[i].ndocumento);
        printf("Digite a idade da pessoa: ");
        scanf("%d", &p[i].idade);
       
    }
}

void imprime(struct Pessoa *p, int q) {
    int i;
    for (i = 0; i < q; i++) {
        printf("Nome: %[^\n]s\n %f\n ndocumento: %d\n idade: %d\n",
               p[i].nome, p[i].ndocumento, p[i].idade);
   }
}

void alterari(struct Pessoa *p, int q) {
    int i;
    char nome2[20];
    int novaidade;
    printf("Digite o nome da pessoa que deseja alterar a idade ");
    scanf("%[^\n]s", nome2);
    for(i=0;i<q;i++){
if (strcmp(nome2,f[i].nome==0){ //se os dois nomes forem iguais fica igual a 0
printf("Digite a idade que vai mudar");
scanf("%d",&novaidade);
idade[i]=novaidade;}}
   
        p[i].idade = novaidade;}
    


void comparacaoidade(struct Pessoa *p, int q) {
    int i;
    int idademaior =0;
    int idademenor=100;
    int indicem,indicemenor;

    for (i = 1; i < q; i++) {
        if (p[i].idade > idademaior) {
           idademaior = f[i].idade;
           indicem=i;
          
        }
    
   
        if (p[i].idade< idademenor) {
            idademenor = p[i].idade;
            indicemenor=i;
          
        }
    }
 printf("O nome da pessoa com a maior idade eh: %s\n", p[indicem].nome);
    printf("O noem da pessoa mais nova eh: %s\n",
         p[indicemenor].nome);
}

int main() {
    int q;
    printf("Qual a quantidade de pessoas? ");
    scanf("%d", &q);
    struct Pessoa *p = malloc(q * sizeof(struct Pessoa));

    if (p == NULL) {
        printf("Erro na alocacao");
        exit(1);
    }

    preenche(p, q);
    imprime(p, q);
    alterari(p, q);
    comparacaoidade(p, q);
    

    free(p);
    return 0;
}
