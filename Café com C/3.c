#include <stdio.h>

int main()

{

int dia1,mes1,ano1,opc,anoatual;
int dia2,mes2,ano2;

do
{
printf("\nEntre com o dia do seu aniversario: ");
scanf("%d", &dia1);

printf("\nEntre com o mes do seu aniversario: ");
scanf("%d", &mes1);

printf("\nEntre com o ano do seu aniversario: ");
scanf("%d", &ano1);

printf("\nSua data de nascimento e %d/%d/%d ?",dia1,mes1,ano1);
printf("\n1-Sim 2-Nao");
scanf("%d", &opc);
}
while(opc==2);

printf("\nEntre com o dia de hoje: ");
scanf("%d", &dia2);

printf("\nEntre com o mes atual: ");
scanf("%d", &mes2);

printf("\nEntre com o ano em que estamos: ");
scanf("%d", &ano2);

if(dia1>=dia2 && mes1>=mes2)
{
printf("\nVoce tem %d anos de idade.",ano2-ano1);
}

if(dia1<dia2 && mes1<mes2)
{
printf("\nVoce tem %d anos de idade.",(ano2-ano1)-1);
}

}

