// inclus�o de bibliotecas
#include <stdio.h>
// programa pripacipal
int main()
{
	// declara��o das vari�veis
	float alturaJoao = 1.40, alturaPedro = 1.25;
	int anos = 0;
	// repati��o
	while(alturaPedro <= alturaJoao)
	{
		alturaJoao = alturaJoao + 0.03;
		alturaPedro = alturaPedro + 0.05;
		anos++; // anos = anos + 1
	}
printf("\n\n Serao necessarios %d anos para Pedro ficar mais alto que Joao \n\n", anos);
	return 0;
}
