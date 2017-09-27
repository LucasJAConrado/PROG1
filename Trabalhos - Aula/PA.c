/* PROGRAMA PARA CALCULAR O TERMO GERAL DE UMA PROGRESSÃO ARITIMÉTICA
Nome: Lucas Jacintho de Abreu Conrado
*/

#include <stdio.h>

int main()

{

float primeirotermo;
float razao;
int termo;
int resposta;

printf("PROGRAMA PARA CALCULAR O TERMO GERAL DE UMA PROGRESSAO ARITIMETICA (P.A)\n\n");

do
{
printf("Entre com o primeiro termo da PA: ");
scanf("%f", &primeirotermo);

printf("\n\nEntre com a razao da PA: ");
scanf("%f", &razao);

printf("\n\nEscolha qual termo da PA voce deseja calcular: ");
scanf("%d", &termo);

printf("\n\nO %d termo da PA e: %f + (%d - 1)*%f = %.2f \n\n",termo,primeirotermo,termo,razao,primeirotermo + (termo - 1)*razao);

printf("\n\nVoce deseja calcular o termo geral de outra PA ? \n\n 1- Sim 2-Nao \n\n ");
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
