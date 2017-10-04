#include <stdio.h>

int main()

{

int nalunos,i;
float nota,soma,vet[i];

soma=0;

printf("PROGRAMA PARA CALCULAR A MEDIA DE UMA TURMA");

printf("\n\nEntre com o numeros da alunos: ");
scanf("%d", &nalunos);

for(i=1;i<=nalunos;i=i+1)
    {
    printf("\n-----------------------------------");
    printf("\nEntre com a nota do %d aluno: ",i);
    scanf("%f", &vet[i]);
        
       soma=soma+vet[i];
	}

printf("\n\nA media da turma foi %.1f.",soma/nalunos);

}
