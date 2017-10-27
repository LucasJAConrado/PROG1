#include <stdio.h>

int main()

{
    
int mat[2][2],i,j,k,s;  //K --> Diagonal principal.  s--> Diagonal secundária. 


for(i=0;i<3;i=i+1)
{
   for(j=0;j<3;j=j+1)
     {               
          printf("Entre com o elemento %d-%d da matriz: ",i,j);
          scanf("%d", &mat[i][j]);
     } 
}

printf("\n");

for(k=0;k<3;k=k+1)
{
printf("%d ", mat[k][k]);//Diagonal principal.
}

printf("\n\n");


for(s=2;s>=0;s=s-1)
{
printf("%d ",mat[s][s]);//Diagonal secundária.
}

printf("\n\n");

system("pause");
return 0;
}   
