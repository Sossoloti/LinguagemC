#include <stdio.h>
int main()
{
	int A, B;
	printf("\n Digite o primeiro numero inteiro: ");
	scanf("%d", &A);
	printf("\n Digite o segundo numero inteiro: ");					
	scanf("%d", &B);
	
	
	if( A < B )
	{
		printf("\n Ordem crescente: %d < %d\n", A, B);
	}
	else
	{
		printf("\n Ordem crescente: %d < %d\n", B, A);
	}
		return 0;
}
