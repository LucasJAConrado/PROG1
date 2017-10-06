#include <stdio.h>
#include <math.h>

int main()

{

float lmaior,lado2,lado3;

printf("Entre com o maior lado do triangulo: ");
scanf("%f", &lmaior);

printf("\nEntre com o mais um lado do triangulo: ");
scanf("%f", &lado2);

printf("\nEntre com o ultimo lado do triangulo: ");
scanf("%f", &lado3);

if(pow(lmaior,2)==pow(lado2,2)+pow(lado3,2))
{
printf("\nO triangulo que possui os lados %.1f, %.1f e %.1f e retangulo.",lmaior,lado2,lado3 );
}

else if(pow(lmaior,2)<pow(lado2,2)+pow(lado3,2))
{
printf("\nO triangulo que possui os lados %.1f, %.1f e %.1f e acutangulo.",lmaior,lado2,lado3 );
}

else
{
printf("\nO triangulo que possui os lados %.1f, %.1f e %.1f e obtusangulo.",lmaior,lado2,lado3 );
}


}
