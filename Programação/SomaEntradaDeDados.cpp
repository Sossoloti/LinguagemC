// Inclusão da blibiotecas
#include <stdio.h>
#include <stdlib.h>

// Programa principal
int main()
{
	// Declaração das variáveis
	int a, b, c, somaAB, subtraiBC, multiplicaCA;
	
	// Entrada de dados
	printf("\n Digite um numero: ");
	scanf("%d", &a);
	printf("\n Digite outro numero: ");
	scanf("%d", &b);
	printf("\n Digite outro numero: ");
	scanf("%d", &c);
	
	// Calculos
	somaAB = a + b;
	subtraiBC = b - c;
	multiplicaCA = c * a;
	
	// Saída de dados
	printf("\n Os numeros inseridos foram: %d %d %d\n", a,b,c);
	printf("\n O resultado da soma de A e B foi: %d\n", somaAB);
	printf("\n O resultado da subtracao de B e C foi: %d\n", subtraiBC);
	printf("\n O resultado da multiplicacao de C e A foi: %d\n", multiplicaCA);
	
	return 0;
}