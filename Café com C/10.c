#include <stdio.h>

int main()

{

float n1,n2,n3,maior;


maior=0;

printf("Entre com o primeiro numero: ");
scanf("%f", &n1);

if(n1>=maior)
{
maior=n1;
}

printf("Entre com o segundo numero: ");
scanf("%f", &n2);

if(n2>=maior)
{
maior=n2;
}

printf("Entre com o terceiro numero: ");
scanf("%f", &n3);

if(n3>=maior)
{
maior=n3;
}

printf("\n\nDentre os tres numeros fernceidos, o maior deles e o numero %.2f .",maior);


}


