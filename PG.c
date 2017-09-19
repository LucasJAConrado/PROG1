#include <stdio.h>

int main ()

{

int primeirotermo;
int razao;
int termo;
int resposta;

printf(" \n\n Entre com o primeiro termo da PG: \n\n");
scanf("%d", &primeirotermo);

printf(" \n\n Entre com a razao da PG: \n\n");
scanf("%d", &razao);

printf("\n\n Escolha qual termo da PG voce deseja calcular: \n\n");
scanf("%d", &termo);



printf("\n\n O %d termo da PG e igual a: %d*(%d)^%d-1 = %d \n\n  ",termo,primeirotermo,razao,termo,(primeirotermo)*(razao)^(termo - 1));

printf("\n\n Voce deseja calcular a soma dos %d termos da PG ? \n\n 1- Sim 2- Nao \n\n",termo);
scanf("%d", &resposta);

if (resposta==2)

{
printf("\n\n --------------------------- FIM --------------------------- \n\n");
}

else if (resposta==1)

{
printf("\n\n A soma dos %d termos da PG e: \n\n");
}


}
