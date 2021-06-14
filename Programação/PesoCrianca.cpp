// inclusão das bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	float Salario, Vendas, Comissao, Impostos, SalarioFinal;
	// atribuição
	Salario = 2500.00;
	Vendas = 10000.00;
	// cálculos
	Comissao = Vendas * 0.075;
	SalarioFinal = Salario + Comissao;
	Impostos = SalarioFinal * 0.03;
	SalarioFinal = SalarioFinal - Impostos; 
	// saída de dados
	printf("\n Salario %.2f\n Comissao %.2f\n Impostos %.2f\n Salario Final %.2f\n\n", Salario, Comissao, Impostos, SalarioFinal);
 	return 0;
}