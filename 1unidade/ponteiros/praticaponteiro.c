#include <stdio.h>
#include <locale.h>

// Funções das operações com retornos
int soma(int a, int b)
{
	return a + b;
}

int subtracao(int a, int b)
{
	return a - b;
}

int multiplicacao(int a, int b)
{
	return a * b;
}

int divisao(int a, int b)
{
	return a / b;
}

// Função que realiza a operação escolhida, passando a e b para x e y.
int calcula(int x, int y, int (*operacao)(int, int))
{
	return operacao(x, y);
}

int main()
{
	setlocale(LC_ALL, "portuguese");

	int escolhaOperacao;
	int numero1;
	int numero2;

	printf("Insira o primeiro número: \n");
	scanf("%d", &numero1);

	printf("Insira o segundo número: \n");
	scanf("%d", &numero2);

	printf("Digite o número da operação (1 a 4):\n");
	printf("====================================\n");
	printf("=========== 1 - Adição =============\n");
	printf("========== 2 - Subtração ===========\n");
	printf("======= 3 - Multiplicação ==========\n");
	printf("========== 4 - Divisão =============\n");
	printf("====================================\n");

	scanf("%d", &escolhaOperacao);

	switch (escolhaOperacao) {

	case 1:
		printf("Adição: \n");
		// Chama a função calcula, passando a função soma como argumento e as 
		// demais caso sejam escolhidas.
		printf("Resultado: %d", calcula(numero1, numero2, soma));
		break;
	case 2:
		printf("Subtração: \n");
		printf("Resultado: %d", calcula(numero1, numero2, subtracao));
		break;
	case 3:
		printf("Multiplicação: \n");
		printf("Resultado: %d", calcula(numero1, numero2, multiplicacao));
		break;
	case 4:
		printf("Divisão: \n");
		printf("Resultado: %d", calcula(numero1, numero2, divisao));
		break;
	default:
		printf("Opção inválida \n");
	}

	return 0;
}
