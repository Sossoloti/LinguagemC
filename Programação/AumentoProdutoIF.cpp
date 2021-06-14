#include <stdio.h>
int main()
{
	float PrecoProduto, Aumento;
	int Departamento;
	
	printf("\nDigite de qual departamento voce comprou o prodruto: ");
	scanf("%d", &Departamento);
	printf("\nDigite o preco do produto R$: ");
	scanf("%f", &PrecoProduto);
	if( Departamento == 1 )
	{	
	Aumento = PrecoProduto + PrecoProduto * 0.05;
	}
	else
	{
	Aumento = PrecoProduto + PrecoProduto * 0.074;
	}
	printf("\nPreco do produto: R$%.2f\n", PrecoProduto);
	printf("\nPreco com aumento: R$%.2f\n", Aumento);

		return 0;
}