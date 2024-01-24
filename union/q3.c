#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum meses {
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

typedef struct data {
    int dia;
    int meses;
    int ano;
} Data;

void receberdata(Data *data) {
    printf("Digite o dia: ");
    scanf("%d", &data->dia);
    printf("Digite o mes: ");
    scanf("%d", &data->meses);
    printf("Digite o ano: ");
    scanf("%d", &data->ano);
}

void imprimirdata(Data *data) {
    printf("A Data é: %d / %d / %d\n", data->dia, data->meses, data->ano);
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
