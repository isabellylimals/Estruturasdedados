// main.c
#include "aluno.h"

int main(void) {
    Aluno *aluno;
    aluno = recebe_dados();
   if (aluno != NULL) {
        exibedados(aluno);

        free(aluno);
    } else {
        printf("Nenhum aluno registrado.\n");
    }
   

    return 0;
}
