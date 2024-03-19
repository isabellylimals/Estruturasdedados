//A e B da questao 1, misturei as duas;

#include <stdio.h>
#include "q1.h"

#define N 20
struct novo_no {
    float valor;
    struct novo_no* prox;
};

struct pilha {
    struct novo_no=ultimo;
};

struct pilha* pilha_cria(void) {
    struct pilha* p = (struct pilha*)malloc(sizeof(struct pilha));
    if (p == NULL) {
        printf("Erro na alocacao de memória para a pilha.\n");
        exit(1);
    }
    p->vet = (float*)malloc(N * sizeof(float));
    if (p->vet == NULL) {
        printf("Erro na alocacaoo de meoria para o vetor da pilha.\n");
        free(p);
        exit(1);
    }
    
    p->n = 0;
    return p;
}

void pilha_push(struct pilha* p, float v) {
    if (p->n == N) {
        printf("Capacidade maxima atingida\n");
        
        float* novo_vet = (float*)malloc(2 * N * sizeof(float));
        if (novo_vet == NULL) {
            printf("Erro na alocacao de memoria para o novo vetor.\n");
            
            exit(1);
        }
        novo->valor=v;
    novo->prox=p->ultimo;
    p->ultimo=novo;

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
    struct novo_no*temp=p->ultimo;
    float v = temp->valor;
    p->ultimo = temp->prox;
    free(temp);
    return v;
}

float imprime(struct pilha* p) {
    int i;
    for ( i = p->n - 1; i >= 0; i--) {
        printf("%f\n", p->vet[i]);
    }
}


