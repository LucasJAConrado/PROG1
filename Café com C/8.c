#include <stdio.h>

int main()

{

int voto,cand1,cand2,opc;
float p1;

printf("PROGRAMA PARA CONTABILIZACAO DE VOTOS");

cand1=0;
cand2=0;

do
{
printf("\n\nEntre com 1, se o voto foi para o primeiro candidato e 2 se o voto tiver sido para o segundo candidato.");
scanf("%d", &voto);

if(voto==1)
{
cand1=cand1+1;
}


else 
{
cand2=cand2+1;
}

printf("\nTem mais algum voto para contabilizar ?\n1-Sim 2-Nao");
scanf("%d", &opc);
}
while(opc==1);

p1=(100*cand1)/(cand1+cand2);

printf("\nO candidato 1 obteve %.2f%%  dos votos.",p1);
printf("\nO candidato 2 obteve %.2f%% dos votos.",100-p1);



}
