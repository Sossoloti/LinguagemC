//inclus�o bibliotecas
#include <stdio.h>
#include <conio.h>
//programa
int main()
{
	//declara��o vari�veis
	float salario, valorfinanciamento, repeticao;
	//entrada dados
	for(repeticao = 1; repeticao  <= 1000; repeticao++)
	{
	printf("\nInforme o seu salario: ");
	scanf("%f", &salario);
	printf("Informe o seu financiamento pretendido: ");
	scanf("%f", &valorfinanciamento);	
	}
	//calculos / sa�da de dados
	if (valorfinanciamento <= (5 * salario))
		printf("\nFinancionamento concedido");
	else
	{
		printf("\nFinanciamento negado");
	}
	printf("\nObrigado pror nos consultar !\n\n\n");
	
	
	return 0;
}