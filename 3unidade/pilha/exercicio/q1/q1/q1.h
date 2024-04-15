#ifndef Q1_H
#define Q1_H

struct pilha;

struct pilha* pilha_cria(void);
void pilha_push(struct pilha* p, float v);
int pilha_vazia(struct pilha* p);
float pilha_pop(struct pilha* p);
void imprime(struct pilha* p);

#endif /* Q1_H */
