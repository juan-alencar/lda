#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 6 
/*
	Ler um n�mero e diga se eles est� contido no intervalo entre 10 e 15
	onde 10 e 15 tamb�m pertencem ao intervalo
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
