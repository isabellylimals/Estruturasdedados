#include <stdio.h>
#include <stdlib.h>
#include "q1.h"

#define N 20

struct pilha {
    int n;
    float* vet;
};

struct pilha* pilha_cria(void) {
    struct pilha* p = (struct pilha*)malloc(sizeof(struct pilha));
    if (p == NULL) {
        printf("Erro na alocação de memória para a pilha.\n");
        exit(1);
    }
    p->vet = (float*)malloc(N * sizeof(float));
    if (p->vet == NULL) {
        printf("Erro na alocação de memória para o vetor da pilha.\n");
        free(p);
        exit(1);
    }
    p->n = 0;
    return p;
}

void pilha_push(struct pilha* p, float v) {
    if (p->n == N) {
        printf("Capacidade máxima atingida\n");
        // Expandir o vetor
        float* novo_vet = (float*)malloc(2 * N * sizeof(float));
        if (novo_vet == NULL) {
            printf("Erro na alocação de memória para o novo vetor.\n");
            
            exit(1);
        }
        int i;
        for ( i = 0; i < p->n; i++) {
            novo_vet[i] = p->vet[i];
        }
        free(p->vet);
        p->vet = novo_vet;
    }
    p->vet[p->n] = v;
    p->n++;
}

int pilha_vazia(struct pilha* p) {
    return (p->n == 0);
}

float pilha_pop(struct pilha* p) {
    float v;
    if (pilha_vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1);
    }
    v = p->vet[p->n - 1];
    p->n--;
    return v;
}

float imprime(struct pilha* p) {
    int i;
    for ( i = p->n - 1; i >= 0; i--) {
        printf("%f\n", p->vet[i]);
    }
}


