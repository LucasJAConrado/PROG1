#include <stdio.h>

int main()

{
 
float nota[5],media,soma,k;
int i,maior=0; 

for(i=0;i<=4;i++)
{
printf("Entre com a nota do aluno %d: ",i+1);  
scanf("%f", &nota[i]);

soma=soma+nota[i];

}

media=soma/5;

for(i=0;i<=4;i++)
{
  if(nota[i]>media)
    {               
       maior=maior+1;
    }
}

printf("\n\n");

k=(100*maior)/5;

printf("A porcentual de alunos que tirou uma nota acima da media da turma foi de %.2f %% .",k);
    
printf("\n\n");
 
 
system("pause");
return 0;    
}    
