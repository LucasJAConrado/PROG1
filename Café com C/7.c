#include <stdio.h>
#include <math.h>

int main()

{

float cat1,cat2,hip;

printf("PROGRAMA PARA CALCULAR HIPOTENUSA.");

printf("\n\nEntre com o valor de um dos catetos do triangulo: ");
scanf("%f", &cat1);

printf("\nEntre com o valor do outro cateto do triangulo: ");
scanf("%f", &cat2);

hip=sqrt(pow(cat1,2)+pow(cat2,2));

printf("\nO valor da hipotenusa do triangulo de catetos %.1f e %.1f e igual a %.1f.",cat1,cat2,hip);

}

