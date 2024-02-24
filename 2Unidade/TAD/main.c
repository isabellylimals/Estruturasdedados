// main.c
#include "aluno.c"

int main(void) {
    Aluno *aluno;
    aluno = recebe_dados();
   if (aluno != NULL) {
        exibedados(aluno);
        // Libera a memória alocada apenas se um aluno foi registrado
        free(aluno);
    } else {
        printf("Nenhum aluno registrado.\n");
    }
   

    return 0;
}
