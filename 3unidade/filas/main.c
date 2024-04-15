#include<stdio.h>
#include "fila.c"
int main(){
Fila*q;
Fila*q=CriaFila(50);
DestruirFila(&q);
int FilaVazia(Fila*q);
int FilaCheia(Fila*q);
int InsereFila(Fila*q, int elementos);



int elemento;
ConsultarFila(q,&elemento);



return 0;}