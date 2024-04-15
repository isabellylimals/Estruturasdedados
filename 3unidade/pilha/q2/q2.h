#ifndef Q2_H
#define Q2_H

struct no {
    float valor;
    struct no* prox;
};

struct pilha {
    struct no* topo;
};

struct pilha* pilha_cria(void);
void pilha_push(struct pilha* p, float v);
float pilha_pop(struct pilha* p);
int pilha_vazia(struct pilha* p);
float topo(struct pilha* p);
void concatena_pilhas(struct pilha* p1, struct pilha* p2);
void imprimir(struct pilha* p);

#endif /* Q2_H */
