// inclus�o das bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	//Declara��o das vari�veis
	int Vendas, QuantidadeDeFilhos;
	float Salario, Comissao, Impostos, SalarioFinal, Auxilio, ImpostosTransporte, ImpostoTotal, SalarioLiquido;
	//C�lculos
	Comissao = Vendas * 0.10;
	Auxilio = QuantidadeDeFilhos * 100.00;
	SalarioFinal = Salario + Comissao + Auxilio + 600.00;
	Impostos = SalarioFinal * 0.05;
	ImpostosTransporte = SalarioFinal * 0.06;
	ImpostoTotal = Impostos + ImpostosTransporte;
	SalarioLiquido = SalarioFinal - ImpostoTotal;
	
	//Sa�da de dados
	printf("\n Digite o seu salario mensal:");
	scanf("%f", &Salario);
	printf("\n Digite o total de vendas mansal:");
	scanf("%d", &Vendas);
	printf("\n Digite quantos filhos voce tem:");
	scanf("%d", &QuantidadeDeFilhos);
	printf("\n Salario Final: %.2f\n", SalarioFinal);
	printf("\n Valor Descontado: %.2f\n", ImpostoTotal);
	printf("\n O seu salario liquido e: %.2f\n", SalarioLiquido);
	
 	return 0;
}