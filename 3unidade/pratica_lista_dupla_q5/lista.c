#include "lista.h"
#include <stdlib.h>

No* cria_no(Funcionario f) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        exit(1);
    }
    novo->funcionario = f;
    novo->prox = NULL;
    return novo;
}

void libera_no(No* no) {
    free(no);
}
