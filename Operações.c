#include <stdio.h>

int main()

{

	int num1;
	int num2;
	int opc;

	printf("\n PROGRAMA CALCULADORA !\n");

	printf("\n Entre com o primeiro numero:\n\n");
	scanf("%d", &num1);

	printf("\n Entre com o segundo numero:\n\n");
	scanf("%d", &num2);

	printf("\nMENU\n");
	printf("\n ----------------------------------------\n");

	printf("\n Escolha uma das opcoes abaixo:\n\n 1-Adicao\n 2-Subtracao\n 3- Multiplicacao\n 4- Divisao\n\n");
	scanf("%d", &opc);

	if (opc==1) {
		printf("\n Resultado: %d + %d = %d\n\n",num1,num2,num1 + num2);
	}

	else if (opc==2) {
		printf("\n Resultado: %d - %d = %d\n\n",num1,num2,num1 - num2);
	}

	else if (opc==3) {
		printf("\n Resultado: %d * %d = %d\n\n",num1,num2,num1 * num2);
	}

	else if (opc==4) {
		printf("\n Resultado: %d / %d = %d\n\n",num1,num2,num1 / num2);
	}

	system("pause");

}
