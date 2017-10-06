#include<stdio.h>

int main()

{

int n,i,r;

printf("Entre o numero que voce deseja calcular a tabuada: ");
scanf("%d", &n);

for(i=1;i<=10;i=i+1)
{

r=n*i;

printf("\n%d x %d = %d",n,i,r);

}



}
