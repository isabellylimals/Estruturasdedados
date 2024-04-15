#ifndef FILA_LISTA_H 
#define FILA_LISTA_H

typedef struct Paciente {
    int idade;
    char nome[200];
    int digito_unico;
} Paciente;

typedef struct Lista_geral {
    struct Lista_geral* proximo;
    Paciente* paciente_geral;
} Lista_geral;

typedef struct Lista_atendidos {
    struct Lista_atendidos* proximo;
    Paciente* paciente_atendido;
} Lista_atendidos;

Lista_geral* adicionar_paciente_geral(Lista_geral* lista_geral, Paciente* paciente);
void remover_paciente_por_fila(Lista_geral** lista, Lista_atendidos** lista_atendidos);
void imprimir_gerais(Lista_geral* lista);
void imprimir_atendidos(Lista_atendidos* lista);

#endif
