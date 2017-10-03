#include<stdio.h>

int main()

{

int numero;
int opc;
int i;

printf("----------PROGRAMA PARA INFORMAR SE UM NUMERO E PRIMO OU NAO----------");

do
{
printf("\n\nEntre com o numero que voce deseja consultar: ");
scanf("%d", &numero);

for(i=2;i<numero;i=i+1)
   {
       if(numero%i==0)
           {
           printf("\n\nO numero %d nao e primo.",numero);
           break;
		   }
		   
	    else 
	       {
	       printf("\n\nO numero %d e primo.",numero);
	       break;
		   }
 
   }
  
  printf("\n\nVoce deseja consultar mais algum numero ? 1-Sim 2-Nao");
  scanf("%d", &opc); 
   
}
while(opc==1);

if(opc==2)
{
printf("--------------------FIM--------------------");
}


system("pause");
}
