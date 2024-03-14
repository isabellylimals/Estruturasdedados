#include<stdio.h>
#include<stdlib.h>
#include "first.h"

#define N 50 //numero maximo de elementos
struct pilha{
    int n;
    float vet[N];

};
void pilha_push(Pilha*p, float v){
    if(p->n==N){
        printf("Capacidade maxima atingida\n");
        exit(1)
    }
    p->vet[p->n]=v;
    p->n++;
}
int pilha_vazia(Pilha*p){
    return(p->==0);
}
float pilha_pop(Pilha*p){
    float v;
    if(pilha_vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    v=p->vet [p->n-1];
    p->n--;
    return v;
}
 void imprime(Pilha *p) {
    int i;
    for ( i = p->n - 1; i >= 0; i--) {
        printf("%f\n", p->vet[i]);
    }
}
