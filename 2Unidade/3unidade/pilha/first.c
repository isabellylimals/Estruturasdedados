#include<stdio.h>
#include<stdlib.h>
#include "first.h"

#define N 50 

struct pilha {
    int n;
    float vet[N];
};

void pilha_push(pilha *p, float v) {
    if (p->n == N) {
        printf("Capacidade máxima atingida\n");
        exit(1);
    }
    p->vet[p->n] = v;
    p->n++;
}

int pilha_vazia(pilha *p) {
    return (p->n == 0);
}

float pilha_pop(pilha *p) {
    float v;
    if (pilha_vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1);
    }
    v = p->vet[p->n - 1];
    p->n--;
    return v;
}

void imprime(pilha *p) {
    int i;
    for (i = p->n - 1; i >= 0; i--) {
        printf("%f\n", p->vet[i]);
    }
}
