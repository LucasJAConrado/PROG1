#include <stdio.h>

int main()

{

int numero;
int i;

do
{
printf("\n\nEntre com um numero positivo: ");
scanf("%d", &numero);
}
while(numero<=0);

if (numero==1)
{
printf("\n%d e um numero primo !\n\n",numero);
}


for (i=2;i<numero;i=i+1) 
{
 if (numero%i==0)
 {
 printf("%d nao e um numero primo !",numero);
 }
 else if (numero%i!=0) 
 {
 printf("%d e um numero primo !", numero);
 }
}

system("pause");
return 0;
}
