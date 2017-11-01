#include<stdio.h>

int main()

{

char nome[20];
int k,i,cont=0;

printf("Entre com o seu nome: ");
scanf("%s", nome);

k=strlen(nome);

for(i=0;i<k;i++)
  {
    if(nome[i]=='a' || nome[i]=='e' || nome[i]=='i' || nome[i]=='o' || nome[i]=='u')
      {
      cont=cont+1;
	  }
  }  
 
 printf("\n\nO nome %s possui %d vogais", nome,cont);
 
}  




