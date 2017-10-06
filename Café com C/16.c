#include<stdio.h>

int main()

{

int n,i;

do
{
printf("Entre com um numero impar: ");
scanf("%d", &n);

printf("\n");

}
while(n%2==0);

for(i=1;i<=n;i=i+1)
{
printf("%d",i);
printf(" ");
}




}
