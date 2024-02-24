#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    Janeiro = 1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
} Meses;

typedef struct {
    int dia;
    char meses[20];
    int ano;
    int mesnumero;
} Data;


int converterMesParaNumero(char *nomeMes) {
    if (strcmp(nomeMes, "Janeiro") == 0) return Janeiro;
    if (strcmp(nomeMes, "Fevereiro") == 0) return Fevereiro;
    if (strcmp(nomeMes, "Marco") == 0) return Marco;
    if (strcmp(nomeMes, "Abril") == 0) return Abril;
    if (strcmp(nomeMes, "Maio") == 0) return Maio;
    if (strcmp(nomeMes, "Junho") == 0) return Junho;
    if (strcmp(nomeMes, "Julho") == 0) return Julho;
    if (strcmp(nomeMes, "Agosto") == 0) return Agosto;
    if (strcmp(nomeMes, "Setembro") == 0) return Setembro;
    if (strcmp(nomeMes, "Outubro") == 0) return Outubro;
    if (strcmp(nomeMes, "Novembro") == 0) return Novembro;
    if (strcmp(nomeMes, "Dezembro") == 0) return Dezembro;
    
    return -1;
}

void receberdata(Data *data) {
    printf("Digite o dia: ");
    scanf("%d", &data->dia);

    printf("Digite o mes: ");
    scanf("%s", data->meses);

    
    data->mesnumero = converterMesParaNumero(data->meses);

    if (data->mesnumero == -1) {
        printf("Mes invalido.\n");
        exit(1);
    }

    printf("Digite o ano: ");
    scanf("%d", &data->ano);
}

void imprimirdata(Data *data) {
    printf("A Data eh: %d / %d / %d\n", data->dia, data->mesnumero, data->ano);
}

int main() {
    Data *data = (Data *)malloc(1 * sizeof(Data));

    if (data == NULL) {
        exit(1);
    }

    receberdata(data);
    imprimirdata(data);

    free(data);

    return 0;
}