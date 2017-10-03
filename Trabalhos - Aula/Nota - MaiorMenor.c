#include <stdio.h>

int main()

{

int i,nalunos;
float nota,maior,menor;

maior=0;
menor=10;

printf("PROGRAMA PARA INFORMAR MAIOR E MENOR NOTA DE UMA TURMA");

printf("\n\nEntre com o numero de alunos: ");
scanf("%d", &nalunos);

for(i=1;i<=nalunos;i=i+1)
    {
    printf("------------------------------------------");
    printf("\nEntre com a nota do %d aluno: ",i);
	scanf("%f", &nota);
	    
	    if(nota>maior)
	    {
	    maior=nota;
		}
	    if(nota<menor)
	    {
	    menor=nota;
		} 	   
	}
	
	printf("\n\nA maior nota dentre os %d alunos foi %.1f",nalunos,maior);
	printf("\n\nA menor nota dentre os %d alunos foi %.1f",nalunos,menor);
}
