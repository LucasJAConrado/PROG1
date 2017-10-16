#include <stdio.h>
#include <string.h>


int main()

{
    
char nome[20];
int tam;
int i;


printf("Qual o seu nome: ");
scanf("%s",nome);

tam=strlen(nome);

printf("\n\nBoa noite %s\n",nome);
printf("\nO seu nome tem %d caracteres.\n\n",tam);


for(i=0;i<tam;i=i+1)
{
printf("\n %d letra do seu nome e %c\n",i+1,nome[i]);
}

printf("\n\n");

system("pause");
return 0;


}    
    
