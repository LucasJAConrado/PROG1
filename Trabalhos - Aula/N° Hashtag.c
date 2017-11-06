#include <stdio.h>

int main()

{
    
char tweet[140];
int i,k;

k=0;

printf("Entre com um tweet: ");
scanf("%[^\n]s", tweet);

for(i=0;i<=139;i++)
  {
     if(tweet[i] == '#')
       {
          k=k+1;                                
       }
  }

printf("\n\nnumero de hashtag(s): %d.", k); 

system("pause");
return 0;
}    
