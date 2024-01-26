#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


typedef struct {
    float x;
    float y;
} Ponto;


typedef struct {
    Ponto canto_superior_esquerdo;
    float base;
    float altura;
} Retangulo;


typedef struct {
    Ponto centro;
    float raio;
} Circulo;


Retangulo ret_circunscrito(Circulo* meuCirculo, float h) {
    Retangulo ret;

   
    ret.base = 2 * meuCirculo->raio;
    ret.altura = h;

   
    ret.canto_superior_esquerdo.x = meuCirculo->centro.x - meuCirculo->raio;
    ret.canto_superior_esquerdo.y = meuCirculo->centro.y - h / 2;

    return ret;
}


Circulo circ_interno(Retangulo* meuRetangulo) {
    Circulo meuCirculoInterno;
    meuCirculoInterno.raio = fmin(meuRetangulo->base, meuRetangulo->altura) / 2;
    meuCirculoInterno.centro.x = meuRetangulo->canto_superior_esquerdo.x + meuRetangulo->base / 2;
    meuCirculoInterno.centro.y = meuRetangulo->canto_superior_esquerdo.y + meuRetangulo->altura / 2;

    return meuCirculoInterno;
}

int main() {
    
    Circulo meuCirculo;
    printf("Informe o centro do círculo (x y): ");
    scanf("%f %f", &meuCirculo.centro.x, &meuCirculo.centro.y);
    printf("Informe o raio do círculo: ");
    scanf("%f", &meuCirculo.raio);

    float alturaRetangulo;
    printf("Informe a altura do retângulo circunscrito: ");
    scanf("%f", &alturaRetangulo);

   
    Retangulo meuRetangulo = ret_circunscrito(&meuCirculo, alturaRetangulo);
    Circulo meuCirculoInterno = circ_interno(&meuRetangulo);

   
    printf("O Maior Retângulo circunscrito: Base = %.2f, Altura = %.2f\n", meuRetangulo.base, meuRetangulo.altura);
    printf("O maior Círculo interno ao retângulo: Raio = %.2f\n", meuCirculoInterno.raio);

    return 0;
}
