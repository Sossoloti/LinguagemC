//inclusão bibliotecas
#include <stdio.h>
#include <conio.h>
//declaração das variáveis
int main()
{
	int valor = 48, qntingresso = 350, despesa = 5600, lucro, valormax = valor, qntmax = qntingresso, lucromax;
//entrada de dados/calculos
	lucromax = (valormax * qntmax) - despesa;
    for(valor = 48; valor >= 22; valor = valor - 2)	
 	
	{
		lucro = (valor * qntingresso) - despesa;
		printf("Quantidade: %d\n Valor: %d\n Lucro: %d\n\n", qntingresso, valor, lucro);
		
		if(lucro > lucromax)
		{
			lucromax = lucro;
			valormax = valor;
			qntmax = qntingresso;
		}
		qntingresso = qntingresso + 17;	
	}
//saida de dados  
	printf("O lucro maximo e: %d Reais\n", lucromax);
	printf("Quantidade de ingressos vendidos: %d Ingressos\n", qntmax);
	printf("Preco do ingresso: %d Reais\n", valormax);
		
	return 0;
}