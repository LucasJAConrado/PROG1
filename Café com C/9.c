#include<stdio.h>

int main()

{

int idade,opc;

do
{
printf("Entre com a sua idade: ");
scanf("%d", &idade);

if(idade<16)
{
printf("\n\nVoce ainda nao tem idade para votar.");
}

if(idade>=16 && idade<=17)
{
printf("\n\nNessa idade, o voto para voce e opicional.");
}

else if(idade>=18 && idade<=70)
{
printf("\n\nVoce deve votar, pois o voto nessa idade e obrigatorio.");
}

printf("\n\nVoce deseja realizar mais alguma consulta ?\n1-Sim 2-Nao");
scanf("%d", &opc);
}
while(opc==1);

printf("\n\nFoi um prazer, ate mais.");


}
