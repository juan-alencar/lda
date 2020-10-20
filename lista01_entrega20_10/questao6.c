#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 6 
/*
	Ler um número e diga se eles está contido no intervalo entre 10 e 15
	onde 10 e 15 também pertencem ao intervalo
*/

int main()
{
	//declarar variaveis
	int num;
	
	//solicitar e ler um numero 
	printf("digite um numero:\n");
	scanf("%d", &num);

	//verificar se esta entre 10 e 15 e mostrar
	if (num >= 10 && num <= 15)
	{
		printf("esse numero PERTENCE ao intervalo de 10 a 15");	
	} 
	else
	{
		printf("esse numero NAO pertence ao intervalo de 10 a 15");
	}
	
	return 0;
}