#include<stdio.h>
int main(int argc, char** argv)
{
    float altura, pesoIdeal;
    char sexo;
    printf("\n Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("\n Digite seu sexo F - FEM ou M - MASC: ");
    fflush(stdin);
    scanf("%c", &sexo);

    if( sexo == 'f'|| sexo == 'F' )

pesoIdeal = (62.1 * altura) - 44.7;
else
{
    pesoIdeal = (72.7 * altura) - 58.0;
}
printf("\n Peso Ideal : %.2f kg\n\n", pesoIdeal);

return 0;

}
