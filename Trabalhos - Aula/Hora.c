#include <stdio.h>

int main()

{

int hora;

printf("\n\n Entre com a hora:\n\n");
scanf("%d", &hora);

if (hora>=0 && hora <12)

{
printf("\n\n Bom dia !\n\n");
}

else if(hora >=12 && hora<18)

{
printf("\n\n Boa tarde !\n\n");
}

else if(hora>=18 && hora<24)

{
printf("\n\n Boa noite !\n\n");
}


system ("pause");

}
