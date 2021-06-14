#include <stdio.h>
#include <stdlib.h>
int main()
{
	float ValorDaCompra;
	int CodPagamento;
	char Comprador [30];
	printf("\nDigite o seu nome: \n");
	gets(Comprador);
	printf("\nDigite o valor da sua compra: \n");
	scanf("%f", &ValorDaCompra);
	printf("\nDigite o Codigo de Pagamento: \n");
	scanf("%d", &CodPagamento);
	
	if(CodPagamento == 1)
	{
	ValorDaCompra = ValorDaCompra - (ValorDaCompra * 0.05);	
	}																	
	printf("\nSua compra foi no valor de: %.2f\n", ValorDaCompra);
	printf("%s Seu desconto foi APROVADO !!!\n\n", Comprador);
	else
	{
		printf("%s Seu desconto não foi APROVADO !!!\n\n", Comprador);
		
	return 0;
	
}