#include <stdio.h>

int main()

{
    
int num;
int i;
int fat;

do
{
printf("\n\n Entre com um numero:");
scanf("%d", &num);
}
while (num<=0);

fat = 1;

for (i=num;i>=1;i=i-1) // No lugar de i=i-1, poderia usar, também, i--
{
    fat = fat*i;
}    

printf("\n fatorial: %d \n\n",fat);


system("pause");    
return 0;    
}    
