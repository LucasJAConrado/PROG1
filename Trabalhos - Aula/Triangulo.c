#include <stdio.h>
#include <math.h>

int main()


{

float lmaior,l1,l2;
int opc;

do
{
printf("PROGRAMA PARA DIZER SE UM TRIANGULO E ACUTANGULO, RETANGULO OU OBTUSANGULO");
printf("\n\nEntre com valor do maior lado do triangulo: ");
scanf("%f", &lmaior);
printf("\n\nEntre com valor de mais um lado do triangulo: ");
scanf("%f", &l1);
printf("\n\nEntre com valor do ultimo lado do triangulo: ");
scanf("%f", &l2);

if(pow(lmaior,2)<pow(l1,2)+pow(l2,2))
{
printf("\nO triangulo formado pelos lados %.1f,%.1f e %.1f e acutangulo.",lmaior,l1,l2);
printf("\nDeseja consultar mais alguns triangulo ? 1-Sim 2-Nao");
scanf("%d", &opc);
}

if(pow(lmaior,2)==pow(l1,2)+pow(l2,2))
{
printf("\nO triangulo formado pelos lados %.1f,%.1f e %.1f e retangulo.",lmaior,l1,l2);
printf("\nDeseja consultar mais alguns triangulo ? 1-Sim 2-Nao");
scanf("%d", &opc);
}

if(pow(lmaior,2)>pow(l1,2)+pow(l2,2))
{
printf("\nO triangulo formado pelos lados %.1f,%.1f e %.1f e obtusangulo.",lmaior,l1,l2);
printf("\nDeseja consultar mais alguns triangulo ? 1-Sim 2-Nao");
scanf("%d", &opc);
}
}

while(opc==1);

if (opc==2)
{
printf("\n\nFoi um prazer, ate mais !");
}


}

