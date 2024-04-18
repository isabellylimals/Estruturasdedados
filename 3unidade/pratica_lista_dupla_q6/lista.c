#include"lista.h"
#include<stdio.h>


No* cria_no_ret(float base, float altura) {
    Retangulo* ret = (Retangulo*)malloc(sizeof(Retangulo));
    if (ret == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    ret->base = base;
    ret->altura = altura;

    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    novo->tipo = 1;
    novo->objeto = ret;
    novo->proximo = NULL;

    return novo;
}

No* cria_no_tri(float base, float altura) {
    Triangulo* tri = (Triangulo*)malloc(sizeof(Triangulo));
    if (tri == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    tri->base = base;
    tri->altura = altura;

    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    novo->tipo = 2; 
    novo->objeto = tri;
    novo->proximo = NULL;

    return novo;
}

No* cria_no_circ(float raio) {
    Circulo* circ = (Circulo*)malloc(sizeof(Circulo));
    if (circ == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    circ->raio = raio;

    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    novo->tipo = 3; 
    novo->objeto = circ;
    novo->proximo = NULL;

    return novo;
}


static float ret_area(Retangulo* r) {
    return r->base * r->altura;
}

static float tri_area(Triangulo* t) {
    return (t->base * t->altura) / 2;
}

static float circ_area(Circulo* c) {
    return 3.14159 * c->raio * c->raio;
}

static float area(ListaHet* p) {
    No* atual = p->primeiro;
    float area_max = 0;
    while (atual != NULL) {
        float area_atual = 0;
        switch (atual->tipo) {
            case 1: 
                area_atual = ret_area((Retangulo*)atual->objeto);
                break;
            case 2: 
                area_atual = tri_area((Triangulo*)atual->objeto);
                break;
            case 3: 
                area_atual = circ_area((Circulo*)atual->objeto);
                break;
        }
        if (area_atual > area_max) {
            area_max = area_atual;
        }
        atual = atual->proximo;
    }
    return area_max;
}
float max_area(ListaHet* l) {
    return area(l);
}
