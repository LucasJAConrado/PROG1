#include <stdio.h>

int main()

{
 
float nota[5][2],media;
int i,j; 

for(i=0;i<=4;i++)
  {
     for(j=0;j<=1;j++)
       {
          printf("Entre com a nota da AV%d do aluno %d: ",j+1,i+1);
          scanf("%f", &nota[i][j]);                            
       }
    printf("\n\n");   
  }
  
printf("\nRelatorio de AV1 e AV2");
printf("\n------------------------------");
printf("\nAluno\tMedia\tResultado");
printf("\n\n");

for(i=0;i<=4;i++)
  {
     media=((nota[i][0]+nota[i][1])/2);
     printf("\n%d\t%.2f\t",i+1,media);
  }             
                
 
      
system("pause");
return 0;
}
