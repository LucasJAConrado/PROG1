#include <stdio.h>

int main()

{

int primeirotermo;
int razao;
int termo;
int resposta;
int soma; 

printf("\n\n Entre com o primeiro termo da PA: \n\n");
scanf("%d", &primeirotermo);

printf("\n\n Entre com a razao da PA: \n\n");
scanf("%d", &razao);

printf("\n\n Escolha qual termo da PA voce deseja calcular:\n\n");
scanf("%d", &termo);

printf("\n\n O %d termo da PA e: %d + (%d - 1)*%d = %d \n\n",termo,primeirotermo,termo,razao,primeirotermo + (termo - 1)*razao);

printf("\n\n Voce deseja calcular a soma dos termos da PA ? \n\n 1- Sim 2-Nao \n\n ");
scanf("%d", &resposta);

if(resposta==1)

{
printf("\n\n A soma dos %d termos da PA e igual a: (%d + %d)*(%d/2)=%d \n\n",termo,primeirotermo,primeirotermo + (termo - 1)*razao,termo,(primeirotermo + primeirotermo + (termo - 1)*razao )*(termo/2));
}

else if(resposta==2)

{
printf("\n\n--------------------FIM ----------------------\n\n");
}

system("pause");

}
