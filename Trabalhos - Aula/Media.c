/* PROGRAMA PARA CALCULAR A MEDIA DE UM ALUNO */

#include <stdio.h>

int main()

{

float nota1;
float nota2;
float media;
int opc;

do
{
printf("Entre com o nota tirada na AV1: ");
scanf("%f", &nota1);

printf("\nEntre com a nota tirada na AV2: ");
scanf("%f", &nota2);

media=(nota1+nota2)/2;

if(media>=6)
{
printf("\nO aluno em questao esta aprovado com media %.2f\n",media);
}

else 
{
printf("\nO aluno em questao esta reprovado com media %.2f\n",media);
}

printf("\nVoce deseja calcular a media de mais algum aluno ? 1-Sim 2-Nao");
scanf("%d", &opc);
}
while(opc==1);

if(opc==2)
{
printf("\nFoi um prazer, ate mais  !");
}


} 


