#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 8
/*
	Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três.
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
