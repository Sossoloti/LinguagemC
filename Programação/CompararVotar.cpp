#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Idade, AnoNasc, AnoAtual;
	printf("\nDidite seu ano de nascimento: ");
	scanf("%d", &AnoNasc);
	printf("\nDidite o ano atual: ");
	scanf("%d", &AnoAtual);
	
	Idade = AnoAtual - AnoNasc;
	
	if (Idade>=16)
	{
		printf("\nVoce pode votar nas proximas elei��es\n");						
	} 
	else
	{
		printf("\nVoce pode nao votar nas proximas elei��es\n");
		
	}
	
	return 0;
}
	
 