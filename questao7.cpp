#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 7
/*
	Para ler um n�mero inteiro e dizer se ele � impar ou par.
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
