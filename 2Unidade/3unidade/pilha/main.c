#include<stdio.h>
#include "first.c"
int main(){
 struct pilha p; 
 p->n=0;
Pilha*pilha_cria(void){
    Pilha*p=(Pilha*) malloc (sizeof(Pilha));
    if (p==NULL)
    exit(1);

}
pilha_push(&p, 50.5); 
    pilha_push(&p, 20.1); 
    pilha_push(&p, 307.5; 

    
    imprime(&p); 
float valor_removido = pilha_pop(&p); 
     imprime(&p); 

    return 0;
}



return p;