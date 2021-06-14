#include <stdio.h>
int main()
{
	float NotaProva1, NotaProva2,Trabalho, Media, MediaProva;
	printf("\nDigite a nota da sua primeira prova: \n");
	scanf("%f", &NotaProva1);
	printf("\nDigite a nota da sua segunda prova: \n");
	scanf("%f", &NotaProva2);
	printf("\nDigite a nota do seu trabalho: \n");
	scanf("%f", &Trabalho);
							
	Media = (NotaProva1 + NotaProva2) / 2.0;
	MediaProva = 0.7 * Media + 0.3 * Trabalho;
	
	if(MediaProva > 7.0)
	{
		printf("\nVoce foi aprovado ! \n");
	}
	else
	{
		printf("\nVoce foi reprovado! \n");
	}
	printf("Sua media final foi: %.2f\n\n", MediaProva);
	return 0;
	
}