#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 15
/*
	Desenhe na tela uma forma geom�trica utilizando caracteres, 
	utilize um espa�o entre os caracteres. 
	
	Sugest�o de caracteres: X, 0, O.
	
	a) Desenhe um quadrado de tamanho 5x5. Exemplo:
	X X X X X
	X X X X X
	X X X X X
	X X X X X
	X X X X X
	
	b) Pergunte ao usu�rio qual o tamanho do quadrado que ele quer que seja desenhado, 
	e o	desenhe
*/

int main ()
{
	//a) Desenhe um quadrado de tamanho 5x5
	
		//declarar uma matriz 5x5
		int matriz[150][150] = {'\0'};
		int i, j, lar, alt;
		
		//usar o for intrela�ado para pintar cada indice da matriz
		for(i = 0; i < 5; i++)
		{
			for(j = 0; j < 5; j++)
			{				
				matriz[i][j] = 0;
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
	
		
	//b) Pergunte ao usuario o tamanho do quadrado e desenhe
		
		//perguntar ao usuario o tamanho do quadrado	
		printf("\n\nquantos caracteres de altura?\n");
		scanf("%d", &alt);
		getchar();
		
		printf("quantos caracteres de largura?\n");
		scanf("%d", &lar);
		getchar();
		
		//implementar o la�o para "pintar" o quadrado
		for(i = 0; i < alt; i++)
		{
			for(j = 0; j < lar; j++)
			{				
				matriz[i][j] = 0;
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
	return 0;
}

