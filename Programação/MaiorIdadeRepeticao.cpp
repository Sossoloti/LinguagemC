// inclusão de bibliotecas
#include <stdio.h>
#include <conio.h>
//programa
int main()
{
	int idade, somaidade = 0, contpessoas = 0, mediaidade, idademaisvelho = 0;
	char resp = 's';
	// repetição
	while(resp == 's' || resp == 'S')
	{
		//entrada de dados
		printf("\n Digite sua idade em anos: ");
		scanf("%d", &idade);
		somaidade = somaidade + idade;
		contpessoas = contpessoas + 1;
		//verificar
		if(idade > idademaisvelho)
		{
			idademaisvelho = idade;
		}
		//perguntar
		printf("\n Deseja continuar a pesquisa S/N? ");
		fflush(stdin);
		resp = getche();
	}
	mediaidade = somaidade / contpessoas;
	// saida dados
	printf("\n Media de idade do grupo: %d \n Idade do mais velho do grupo: %d \n\n", mediaidade, idademaisvelho);
	return 0;
}