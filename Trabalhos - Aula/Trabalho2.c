/* 

2° Trabalho: Números Primos
Nome: Lucas Jacintho de Abreu Conrado         Matrícula:0050015313
Professor: Alex Salgado

*/ 

#include <stdio.h>
#include <stdlib.h>

int main()

{
	int numero;
	int i;
	int resp;
	
printf("Ola, meu nome e Lucas Jacintho de Abreu Conrado e vou calcular numeros primos !");	
	
do
{
	printf("\n____________________________________\n");
	printf("\n\nEntre com um numero positivo: ");
	scanf("%d", &numero);

if (numero==1)
	printf("\n%d e um numero primo !\n\n",numero);
		

for (i=2;i<numero;i=i+1) 
{
	if (numero%i==0)
	{
	 printf("%d nao e um numero primo !",numero);
	 break;
	}
	else
	{
	 printf("%d e um numero primo !", numero);
     break;
	}
}
if(numero>0)
{
	printf("\n\nDeseja continua(1-sim/2-nao)?");
	scanf("%d", &resp);
}

}
while(numero<=0 || resp==1);

if(resp==2)
	printf("\nFoi um prazer\n");

system("pause");
return 0;
}
