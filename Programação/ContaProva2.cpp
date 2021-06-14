#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	float numcont, saldo, debito, credito, saldoatual;
	char resp = 's';
	while(resp == 's' || resp == 'S')
	{
		
	printf ("Informe o numero da sua conta: ");
	scanf("%f", &numcont);
	printf ("\nInforme o seu saldo: ");
	scanf("%f", &saldo);
	printf ("\nInforme o seu debito: ");
	scanf("%f", &debito);
	printf ("\nInforme o seu credito: ");
	scanf("%f", &credito);
	
	saldoatual = saldo + credito - debito;
	
	if ((saldo + credito ) < debito)
	 {
	 	printf("\nSaldo Suficiente");
	 }
	 else
	 {
	    printf("\nSaldo Negativo"); 
	 }
	 printf("\n\nDeseja continuar: ");
	 printf("\nS = Sim ou N = Nao: ");
	 fflush(stdin);
	 resp = getch();
	 system("CLS");
	}

	return 0;
}