typedef struct pilha pilha;
pilha*pilha_cria(void);
void pilha_push(pilha*p, float v);
float pilha_pop(pilha*p);
int pilha_vazia(pilha*p);
void pilha_libera(pilha*p);
float imprime(pilha*p);