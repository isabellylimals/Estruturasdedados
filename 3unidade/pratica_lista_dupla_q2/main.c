#include "lista.c"
#include<stdio.h>

int main(){
    Lista* l = lcirc_cria();
    lcirc_insere(l, 7);
    lcirc_insere(l, 8);
    lcirc_insere(l, 9);
    lcirc_insere(l, 6);

    lcirc_imprime(l);

    return 0;
}