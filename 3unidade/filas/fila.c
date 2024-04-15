#include "fila.h"

Fila *CriarFila(int MAX_SIZE);
 Fila*CriaFila(int MAX_SIZE){
Fila *q=(Fila*)calloc(1*sizeof(Fila));
q->val=(int*) calloc(MAX_SIZE, sizeof (int));
q->MAX_SIZE=MAX_SIZE;
q->qtd=0;
q->inicio=q->fim=0;
return q;
}
void DestruirFila(Fila**q){
Fila*qaux=*q;
free(qaux=*q);
free(qaux);
*q=NULL;
}
int FilaVazia(Fila*q){
    return (q->qtd==0);
}
int vazia=FilaVazia(q);
if (FilaVazia(q)){}
FilaCheia(Fila*q);
int FilaCheia(Fila*q){
    return (q->qtd==q->MAX_SIZE);
}
int cheia=FilaCheia(q);
if(FilaCheia(q));
int InsereFila(Fila*q, int elementos){
    if(FilaCheia(q)){
        printf("Fila esta cheia\n");
        return 0;

    }
    else{
        q->valores[q->fim]=elementos;

    q->fim=(q->fim+1)% q->MAX_SIZE;
    q->qtd++;
    return 1;
    }
}
RemoveFila(Fila*q){
    if(FilaVazia(q)){
        printf("Fila esta vazia!\n");
        return 0;
    }
    else{
        q->inicio=(q->inicio+1)% q->MAX_SIZE;
        q-> qtd--;
        return 1;
    }
}
int ConsultarFila(Fila*q, int *elemento){
    if(FilaVazia(q)){
        printf("A fila ja esta vazia");
        return 0;
    }
    else{
        *elemento=q->valores[q->inicio];
        return 1;
    }
}