// inclus�o das bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	float Salario, Vendas, Comissao, Impostos, SalarioFinal;
	// atribui��o
	Salario = 2500.00;
	Vendas = 10000.00;
	// c�lculos
	Comissao = Vendas * 0.075;
	SalarioFinal = Salario + Comissao;
	Impostos = SalarioFinal * 0.03;
	SalarioFinal = SalarioFinal - Impostos; 
	// sa�da de dados
	printf("\n Salario %.2f\n Comissao %.2f\n Impostos %.2f\n Salario Final %.2f\n\n", Salario, Comissao, Impostos, SalarioFinal);
 	return 0;
}