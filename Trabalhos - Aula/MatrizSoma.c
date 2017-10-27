#include <stdio.h>

int main()

{
    
int matA[2][2],matB[2][2],matC[2][2],i,j; 


for(i=0;i<3;i=i+1)
   {
       for(j=0;j<3;j=j+1)
          {              
              printf("\nEntre com o elemento %d-%d da matriz A: ",i,j);
              scanf("%d", &matA[i][j]);
          }
   }
 
 printf("-----------------------------------------------------------------\n");
 
 
for(i=0;i<3;i=i+1)
  {
       for(j=0;j<3;j=j+1)
          {                
               printf("\nEntre com o elemento %d-%d da matriz B: ",i,j);
               scanf("%d", &matB[i][j]);
          }
  } 
 
printf("-----------------------------------------------------------------\n");
  
for(i=0;i<3;i=i+1)
  {
        for(j=0;j<3;j=j+1)
           {            
               matC[i][j]=matA[i][j]+matB[i][j];
           }
  }
   
printf("\nMatriz C, resultado da soma da matriz A com a matriz B\n");
 
 
for(i=0;i<3;i=i+1)
  {
         printf("|");
         for(j=0;j<3;j=j+1)
            {          
                printf("%d ",matC[i][j]);         
            } 
            
            printf("|\n");
  } 
  
  printf("\n\n\n");
 
 
   
system("pause");
return 0;
}         
