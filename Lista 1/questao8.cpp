#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 8
/*
	Escreva um algoritmo que leia 3 n�meros e diga qual � o menor entre os tr�s.
*/

int main()
{
	//declarar variaveis
	int a, b, c;
	
	//receber os numeros
	printf("digite 3 numeros:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	//verificar os numeros
	
	if (a < b && a < c)
	{
		printf("menor numero: %d ", a);
	}
	else if (b < a && b < c)
	{
		printf("menor numero: %d ", b);
	}
	else
	{
		printf("menor numero: %d ", c);
	}	
	return 0;
}
