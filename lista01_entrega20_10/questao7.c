#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 7
/*
	Para ler um número inteiro e dizer se ele é impar ou par.
*/

int main()
{
	//declarar variaveis
	int num;
	
	//solicitar e receber um numero
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	//verificar se ele e impar ou par (%)
	num % 2 == 0 ? printf("PAR") : printf("IMPAR");
	
	return 0;	
} 