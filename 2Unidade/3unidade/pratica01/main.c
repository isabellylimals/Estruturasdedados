
#include <stdio.h>
#include <stdlib.h>
#include "lista.c"

int main() {
   
    Lista *minha_lista = lista_cria();

    // Exemplo de inserção de elementos na lista
    minha_lista = insere_elemento(minha_lista, 10);
    minha_lista = insere_elemento(minha_lista, 20);
    minha_lista = insere_elemento(minha_lista, 30);

    // Exemplo de busca na lista
    int valor_busca = 20;
    Lista *resultado = lst_busca(minha_lista, valor_busca);
    if (resultado != NULL) {
        printf("Valor %d encontrado na lista.\n", valor_busca);
    } else {
        printf("Valor %d não encontrado na lista.\n", valor_busca);
    }
    int numero;
printf("Digite um numero:");
scanf("%d", &numero);
    int qtd_maiores = maiores(minha_lista, numero);
    printf("Quantidade de nos maiores que %d: %d\n", numero, qtd_maiores);

    // Exemplo de remoção do primeiro elemento da lista
    minha_lista = lista_remove_primeiro(minha_lista);

    // Libera a memória da lista
    // (Você deve implementar a função para liberar todos os nós)
    // ...

    return 0;
}
