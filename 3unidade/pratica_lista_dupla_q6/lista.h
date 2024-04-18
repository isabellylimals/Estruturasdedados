#ifndef LISTA_H
#define LISTA_H

typedef struct {
    float base;
    float altura;
} Retangulo;

typedef struct {
    float base;
    float altura;
} Triangulo;

typedef struct {
    float raio;
} Circulo;

typedef struct No {
    int tipo;
    void* objeto;
    struct No* proximo;
} No;

typedef struct {
    No* primeiro;
} ListaHet;

No* cria_no_ret(float base, float altura);
No* cria_no_tri(float base, float altura);
No* cria_no_circ(float raio);
static float ret_area(Retangulo* r);
static float tri_area(Triangulo* t);
static float circ_area(Circulo* c);
static float area(ListaHet* p);
float max_area(ListaHet* l);

#endif 
