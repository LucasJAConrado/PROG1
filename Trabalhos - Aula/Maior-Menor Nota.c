#include <stdio.h>

int main()

{

float nota;
float maior;
float menor; 
int i;

maior=0;
menor=10;

for (i=1;i<=5;i=i+1)
{ 
printf("Entre com a nota: ");
scanf("%f", &nota);

if(nota>maior)
{
maior=nota;
}
if (nota<menor)
{
menor=nota;
}

}

printf("\n Maior nota: %f",maior);
printf("\n Menor nota: %f",menor);

system("pause");
return 0;
}
