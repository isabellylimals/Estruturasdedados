#include<stdio.h>

Pilha*pilha_cria(void){
    Pilha*p=(Pilha*) malloc (sizeof(Pilha));
    if (p==NULL)
    exit(1);

}
p->n=0;
return p;