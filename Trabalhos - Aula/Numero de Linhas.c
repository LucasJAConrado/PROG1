#include<stdio.h>

int main()

{

int i,n;

printf("Entre com o numero de linhas que voce deseja listar abaixo: ");
scanf("%d", &n);

for(i=1;i<=n;i=i+1)
{
printf("\nLinha %d ",i);
}

}
