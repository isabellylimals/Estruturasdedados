#include <stdio.h>

int main(void) {
    int valores[10];
    FILE *entrada, *saida;
    int i;


    entrada = fopen("entrada_q2.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

   
    saida = fopen("saida_q2.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(entrada); /
        return 1;
    }

    char linha[100];

    while (fgets(linha, 100, entrada) != NULL) {
        int media = 0;
        int maiorvalor = 0;
        int menorvalor = 0;

        sscanf(linha, "%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d", &valores[0], &valores[1], &valores[2], &valores[3], &valores[4], &valores[5], &valores[6], &valores[7], &valores[8], &valores[9]);

        for (i = 0; i < 10; i++) {
            media += valores[i];

            if (maiorvalor < valores[i]) {
                maiorvalor = valores[i];
            }
            if (i == 0 || menorvalor > valores[i]) {
                menorvalor = valores[i];
            }
        }

        media /= 10;
        fprintf(saida, "A media dos valores eh: %d. O maior valor eh: %d. O menor valor eh: %d\n", media, maiorvalor, menorvalor);
    }

    fclose(entrada);
    fclose(saida);

    // Reabre o arquivo de entrada para leitura e imprime o conteúdo na tela
    entrada = fopen("entrada_q2.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir novamente o arquivo de entrada para leitura.\n");
        return 1;
    }

    printf("Conteúdo do arquivo de entrada:\n");

    // Lê e imprime cada linha do arquivo
    while (fgets(linha, 100, entrada) != NULL) {
        printf("%s", linha);
    }

    // Fecha o arquivo de entrada novamente
    fclose(entrada);
    return 0;
}




