#include <stdio.h>
#include <math.h>

void calcula_hexagono(float lado, float *area, float *perimetro) {
    *area = (3 * pow(l, 2) * sqrt(3)) / 2;
    *perimetro = 6 * l;
}

int main() {
    float ld, area, perimetro;

    printf("Digite o comprimento do lado do hexagono: ");
    scanf("%f", &ld);

    calcula_hexagono(lado, &area, &perimetro);

    printf("A area do hexagono eh: %.2f", area);
    printf(" O perimetro do hexagono eh: %.2f", perimetro);

    return 0;
}