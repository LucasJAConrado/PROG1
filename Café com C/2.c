#include <stdio.h>

int main()

{

int n,i,vet[i],soma;

soma=0;

printf("Entre com a quantidade de numeros que voce deseja calcular a media: ");
scanf("%d", &n);

for(i=1;i<=n;i=i+1)
{
printf("\nEntre com o numero %d: ",i);
scanf("%d", &vet[i]);

soma=soma+vet[i];
}


printf("\nA media aritimetica dos %d termos e igual a %d.",n,soma/n);

}
