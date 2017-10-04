#include <stdio.h>

int main()

//FAZER UM PROGRAMA QUE DIGA SE A SOMA DE DOIS NUMEROS É PAR OU IMPAR 

{

int n1,n2,opc;

do
{
printf("Entre com o primeiro numero: ");
scanf("%d", &n1);

printf("Entre com o segundo numero: ");
scanf("%d", &n2);


if(n1%2==0 && n2%2==0)
{
printf("O valor da soma dos numeros e %d, um numero par.",n1+n2);
}

if(n1%2==0 && n2%2!=0)
{
printf("O valor da soma dos numeros e %d, um numero impar.",n1+n2);
}
if(n1%2!=0 && n2%2!=0)
{
printf("A soma dos numeros e %d, um numero par.",n1+n2);
}

printf("\nVoce deseja realizar mais alguma consulta ? 1-Sim 2-Nao");
scanf("%d", &opc);

}
while(opc==1);

if(opc==2)
{
printf("---------------FIM----------------");
}
}
