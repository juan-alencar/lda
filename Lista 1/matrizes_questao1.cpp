#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 1 (MATRIZES)
/*
	Gere uma matriz 3x4 de inteiros, e pe�a para o usu�rio do programa preench�-la:
	
	Em seguida exiba-a separando os elementos da mesma linha por �-� (tra�o) e separando as
	linhas por nova linha. 
*/

int main()
{
	//declarar variaveis
	int matriz[3][4] = {'\0'};
	int i, j;
	
	//pedindo ao usuario para preencher a matriz
	printf("Preencha a matriz (3x4) com numeros inteiros.\n");
	
	//usando la�o que acessa todos os indices, para guardar os valores
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("linha %d, ", i+1);
			printf("coluna %d: ", j+1);
			scanf("%d", &matriz[i][j]);
		}
	printf("\n");
	}
	
	//mostrando a matriz separando as colunas por ('-') e as linhas por uma linha composta por ('-')
	for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 4; j++)
			{
				printf(" %d -", matriz[i][j]);
			}
			
			printf("\n------------------\n");
		}
		
	return 0;	
}

