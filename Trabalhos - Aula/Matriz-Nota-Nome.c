#include <stdio.h>

int main()

{
    
char nome[5][20]; //Nota de 5 alunos com no máximo 20 letras.
float nota[5][2],media; //Nota de 5 alunos (AV1 e AV2)
int i;

for(i=0;i<5;i++)
  {
    printf("\nEntre com o nome do aluno %d: ",i+1);
    scanf("%s", nome[i]);

    printf("\nEntre com a AV1 do aluno %d: ",i+1);
    scanf("%f", &nota[i][0]);
  
    printf("\nEntre com a AV2 do aluno %d: ",i+1);
    scanf("%f", &nota[i][1]);
  }  
 
printf("\n\nResultado final");

for(i=0;i<5;i++)
  {
    media=(nota[i][0] + nota[i][1])/2; //Calcula média
    if(media>=6)
      {
         printf("\n%s\t aprovado", nome[i]);
      }                          
    else
      {
         printf("\n%s\t vai para AV3", nome[i]);
      }                                       
  }
  
printf("\n\n");  

system("pause");
return 0;
}    
