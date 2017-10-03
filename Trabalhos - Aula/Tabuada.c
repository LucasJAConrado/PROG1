#include <stdio.h>

int main()

{

int numero,i;

printf("Entre com o numero que voce deselja calcular a tabuada: ");
scanf("%d", &numero);

for(i=1;i<=10;i=i+1)
{
printf("%d * %d = %d\n",numero,i,numero*i);
}

}
