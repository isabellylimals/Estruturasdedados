#include <stdio.h>
#include <stdlib.h>


int main() {
    int tam, i, contf = 0, contm = 0;
    float pessoasf, pessoasm;

    printf("Quantas pessoas foram entrevistadas? ");
    scanf("%d", &tam);

    char *sexo = (char *)malloc(tam * sizeof(char));
    char *opiniao = (char *)malloc(tam * sizeof(char));

    if (sexo == NULL || opiniao == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    printf("Responda as perguntas M e F para sexo, G e N para gostou/não gostou\n");
    for (i = 0; i < tam; i++) {
        printf("Digite seu sexo (f/m): ");
        scanf("\n%c", &sexo[i]);

        printf("Digite sua opiniao sobre o produto (g/n): ");
        scanf("\n%c", &opiniao[i]);

        if (sexo[i] == 'f' && opiniao[i] == 'g') {
            contf++;
        }

        if (sexo[i] == 'm' && opiniao[i] == 'n') {
            contm++;
        }
    }

    pessoasf = (contf * 100.0) / tam;
    ppessoasm = (contm * 100.0) / tam;

    printf("A porcentagem de mulheres que gostaram foi: %.2f%%\n", pf);
    printf("A porcentagem de homens que nao gostaram foi: %.2f%%\n", pm);

    free(sexo);
    free(opiniao);

    return 0;
}