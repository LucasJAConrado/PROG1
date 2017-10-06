#include <stdio.h>

int main()

{

int n,i,j,k;

printf("PROGRAMA QUADRADO 2.\n\nEntre com um numero n, maior ou igual a 4 e menor ou igual a 100: ");
scanf("%d", &n);

for(i=1;i<=n;i=i+1)
{
printf("x");
}

k=0;

do
{
printf("\nx");

for(j=1;j<n-1;j=j+1)
{
printf(" ");
}

printf("x");

k=k+1;
}
while (k<=n-3);

printf("\n");

for(i=1;i<=n;i=i+1)
{
printf("x");
}


}
