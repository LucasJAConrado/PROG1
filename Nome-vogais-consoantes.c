#include <stdio.h>

int main()

{

char nome[20];
int i,k,cont=0;

printf("Entre com o seu nome: ");
scanf("%s", nome);

k=strlen(nome);

printf("\n\n%s contem %d letras.\n",nome,k);

for(i=0;i<k;i++)
  {
     if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' )
	   {
	      cont=cont+1;
	   } 
  }

printf("%s contem %d vogais.\n",nome,cont);
printf("%s contem %d consoantes.\n\n",nome,k-cont);

//IMPRIMINDO UMA LETRA POR LINHA DO NOME 

for(i=0;i<k;i++)
  {
    printf("  %c  \n",nome[i]);
  }


system("pause");
return 0;
}
