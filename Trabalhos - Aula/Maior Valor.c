#include <stdio.h>

int main()

{

int n,i,vet[i],maior;

maior=0;

printf("Entre com a quantidade de valores que voce deseja comparar: ");
scanf("%d", &n);

for(i=1;i<=n;i=i+1)
{
printf("Entre com o numero %d: ",i);
scanf("%d", &vet[i]);

if(vet[i]>maior)
{
maior=vet[i];
}

}

printf("\n\nO maior numero dentre os informados e %d",maior);

}
