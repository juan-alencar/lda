#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 2 (MATRIZES)
/*
	Gere uma matriz 3x4 de inteiros, e pe�a para o usu�rio do programa preench�-la.

	Informe a quantidade de vezes que o n�mero 5 foi digitado. 	
*/

int main()
{
	//declarar variaveis
	int matriz[3][4] = {'\0'};
	int i, j, cont;
	
	//pedindo ao usuario para preencher a matriz
	printf("Preencha a matriz (3x4) com numeros inteiros.\n");
	
	//guardando os valores atraves de for's aninhados
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
	
	//acessando cada indice, e acrescentando 1 ao contador, caso ele verifique o numero 5
	cont = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(matriz[i][j] == 5)
			{
				cont++;
			}
		}
	}
	printf("\nO numero 5 foi digitado %d vezes", cont); //mostrando na tela quantos 5 foram verificados
	
	return 0;	
}


