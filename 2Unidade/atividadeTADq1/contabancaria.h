#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

typedef struct contabancaria ContaBancaria;

// Protótipos das funções
void ContaDados(ContaBancaria *conta);
void depositar(ContaBancaria *conta);
void sacar(ContaBancaria *conta);
void transferir(ContaBancaria *conta, ContaBancaria *conta_destino);

#endif /* CONTABANCARIA_H */
