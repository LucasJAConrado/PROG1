#include <stdio.h>

int main()

{
    
float altura[300],menor,maior;
int i;

menor=300;
maior=0;

for(i=0;i<=299;i++)
{
  printf("Entre com a altura, em centimetros, do atleta %d: ",i+1);
  scanf("%f", &altura[i]);

  if(altura[i]>maior)
    {
       maior=altura[i];
    }
    
  if(altura[i]<menor)
    {
       menor=altura[i];

    }
} 

printf("\n\nMenor altura: %.2f centimetros.", menor);
printf("\nMaior altura: %.2f centimetros.", maior);   

printf("\n\n");

system("pause");
return 0;
         
}                                          
