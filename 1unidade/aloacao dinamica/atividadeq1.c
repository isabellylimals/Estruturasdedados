#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int alunos = 10, i, j, q, acertos, aprovados = 0;
    printf("Digite o numero das questoes: ");
    scanf("%d", &q);

    char *gab = (char *)malloc((q + 1) * sizeof(char)); // 
    if (gab == NULL) {
        printf("Erro na alocacao de memoria para gabarito");
        exit(1);
    }

    float *nota = (float *)malloc(alunos * sizeof(float));

    printf("Digite as respostas do gabarito: ");
    scanf("%s", gab);

    printf("Digite as respostas dos alunos:\n");
    char **respostas = (char **)malloc(alunos * sizeof(char *));
    for (i = 0; i < alunos; i++) {
       char *respostas[i] = (char *)malloc((q + 1) * sizeof(char)); 
        printf("Aluno %d\n", i + 1);
        scanf("%s", respostas[i]);

        acertos = 0;
        for (j = 0; j < q; j++) {
            if (respostas[i][j] == gab[j]) {
                acertos++;
            }
        }

        nota[i] = 10.0 * acertos / q;
        printf("O aluno %d foi: %.2f\n", i + 1, nota[i]);

        if (nota[i] >= 6.0) {
            aprovados++;
        }
    }

    float paprovados = (float)aprovados / alunos * 100.0;

    printf("Porcentagem de aprovacao foi: %.2f%%\n", paprovados);
    return 0;
}
    