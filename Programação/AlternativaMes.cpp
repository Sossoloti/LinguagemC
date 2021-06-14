#include <stdio.h>
int main()
{
	float X, Y, Resultado;
	int Formula;
	
	printf("\nDigite um numero real para X: ");
	scanf("%f", &X);
	printf("\nDigite outro numero real para Y: ");
	scanf("%f", &Y);
	printf("\nEscolha as formular a baixo:\n\n1= Media Aritmetica. \n2= Maior e menor. \n3= Multiplicacao. \n4= Divisao do primeiro numero pelo segundo.\n\n");
	scanf("%d", &Formula);
	
	switch (Formula)
	{
		
	case 1: Resultado = (X + Y) / 2.0; 
	printf ("\nResposta: %2.f\n\n", Resultado); break;
	
	
	case 2: if (X >= Y)
	{
	 Resultado = X - Y;
	} 
	else
	{
	 Resultado = Y - X;
	}
	printf("\nResposta: %2.f\n\n", Resultado); break;
	
	
	case 3: Resultado = X * Y; 
	printf("\nResposta: %2.f\n\n", Resultado); break;
	
	
	case 4: if (Y != 0.0)
	{
		Resultado = X / Y;
		printf("\nResposta: %2.f\n\n", Resultado); break;
	}
	else
	{
		printf("\nNao existe divisao por ZERO !!!\n\n");
	}
	
	
	
		break;
	default: printf("\nErro, o numero digitado não corresponde !\n\n");
		break;
	}
	
	return 0;
	
}