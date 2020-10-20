#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 3 (MATRIZES)
/*
	Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê-la.
	
	a) Informe qual foi o maior número encontrado na matriz.
	b) Informe qual foi o menor número encontrado na matriz.  	
*/

int main()
{
	//declarar variaveis
	int matriz[3][4] = {'\0'};
	int i, j, menor = 0, maior = 0;
	
	//pedir dados ao usuario
	printf("Preencha a matriz (3x4) com numeros inteiros.\n");
	
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
	
	//a) Informe qual foi o maior número encontrado na matriz
		//usando o for aninhado para acessar os indices
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 4; j++)
			{
				//se um indice da matriz for maior que 0  (inicialmente)
				if(matriz[i][j] > maior)
				{
					maior = matriz[i][j];	//guarda o valor na variavel 'maior' que será comparada quando resetar
				}
			}
			
		//quando acessar todos os indices da matriz, o ultimo numero guardado, sera o maior
		printf("O maior numero do vetor eh: %d\n\n", maior); 
		}
	 
	
	
	//b) Informe qual foi o menor número encontrado na matriz
		menor = matriz[0][0]; //guardar o indice 0 da matriz na variavel menor, para comparar apenas com numeros de dentro
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 4; j++)
			{
				if(matriz[i][j] < menor)
				{
					menor = matriz[i][j];	
				}
			}
		}
		printf("O menor numero do vetor eh: %d", menor);

	return 0;
}
