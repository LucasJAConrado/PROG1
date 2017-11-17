#include <stdio.h>

int main()

{

char nome[5][20],situacao[5][20];
float nota[5][2],media[5];
int i;

for(i=0;i<=4;i++)
  {
    printf("Entre com o nome do aluno%d: ",i+1);
    scanf("%s", nome[i]);
    
    printf("Entre com a nota da AV1 do(a) %s: ",nome[i]);
    scanf("%f", &nota[i][0]);
    
    printf("Entre com a nota da AV2 do(a) %s: ",nome[i]);
    scanf("%f", &nota[i][1]);
  
    media[i]=(nota[i][0]+nota[i][1])/2;  
  
    printf("\n\n\n");     
  
  }

printf("-----RELATORIO FINAL\n-----\n\n");
printf("Nome\tSituacao\n\n\n");

for(i=0;i<=4;i++)
  {
    if (media[i]>= 6)
       {	   
          printf("%s\tAprovado(a)\n",nome[i]);		   
       }

    else
        {
        printf("%s\tAV3\n",nome[i]);
		}
  }
  
  printf("\n\n");    
    
system("pause");
return 0;
}


