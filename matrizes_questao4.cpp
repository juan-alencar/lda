#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 4 (MATRIZES)
/*
	4) Leia 2 notas de 10 alunos. N�o � para ler o Nome. 
	
	As notas devem ser armazenadas em uma matriz 2D 
	onde a primeira coluna � a nota1, e a segunda coluna a nota2. 
	
	Em seguida, exiba a tabela.
	
	a) Adicione uma terceira coluna a sua matriz, e armazene nela a m�dia das 2 notas. 
	
	Aten��o a m�dia deve ser calculada automaticamente pelo seu programa, 
	o usu�rio n�o ir� digitar a m�dia, apenas as 2 notas.
*/


int main()
{
	//declarar variaveis
	float matriz[10][3] = {'\0'};
	int i, j;
	
	//solicitando dados
	printf("Preencha a matriz com as notas dos alunos.\n");
	
	//for acessando todos os indices e guardando os dados
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 2; j++)
		{
			//pedindo ao usuario, por aluno e informando qual nota �
			printf("Aluno %d, ", i+1);
			printf("nota %d: ", j+1);
			scanf("%f", &matriz[i][j]);
		}
	printf("\n");
	}
	
	//for fazendo a media de todos os alunos e guardando na 3 coluna
	for(i = 0; i < 10; i++)
	{
		matriz[i][2] = (matriz[i][0] + matriz[i][1]) / 2;
	}
	
	//print demonstrativo
	printf("-------- nota 1 - nota2 - media\n");
	//for printando cada nota de cada aluno, separadas por um '-'
	for(i = 0; i < 10; i++)
	{
		printf("aluno %d ", i+1);
		for(j = 0; j < 3; j++)
		{
			printf(" %.2f -", matriz[i][j]);
		}
		printf("\n");
	}
					
	return 0;	
}
