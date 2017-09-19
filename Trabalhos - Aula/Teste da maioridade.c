#include <stdio.h>

int main()

{

int idade; 

printf("PROGRAMA PARA DESIGNAR MAIORIDADE\n\n");

printf("\n Entre com a sua idade:\n\n");
scanf("%d",&idade);

if (idade<18)
{
printf("\n\n Voce e menor de idade.\n\n\n");
}

else if (idade>=18)
{
printf("\n\n Voce e maior de idade.\n\n\n");
}


system ("pause");


}
