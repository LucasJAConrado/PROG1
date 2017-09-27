/* PROGRAMA PARA CALCULAR O TERMO GERAL DE UMA PROGRESSÃO ARITIMÉTICA
Nome: Lucas Jacintho de Abreu Conrado
*/

#include <stdio.h>

int main()

{

int primeirotermo;
int razao;
int termo;
int resposta;
int soma; 

do
{
printf("Entre com o primeiro termo da PA: ");
scanf("%d", &primeirotermo);

printf("\n\nEntre com a razao da PA: ");
scanf("%d", &razao);

printf("\n\nEscolha qual termo da PA voce deseja calcular: ");
scanf("%d", &termo);

printf("\n\n O %d termo da PA e: %d + (%d - 1)*%d = %d \n\n",termo,primeirotermo,termo,razao,primeirotermo + (termo - 1)*razao);

printf("\n\n Voce deseja calcular o termo geral de outra PA ? \n\n 1- Sim 2-Nao \n\n ");
scanf("%d", &resposta);
}
while (resposta==1);

if (resposta==2)
{
printf("\n\n Foi um prazer, ate mais !\n\n");
}


system("pause");
return 0;
}
