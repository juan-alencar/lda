#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 1 
/*
	Ler um n�mero e exibir a frase: �o n�mero digitado foi: � e logo ap�s esta frase apresentar
	o valor do n�mero lido.
*/


int main()
{
	//declarar as variaveis
	int num;
	
	//solicitar um numero
	printf("digite um numero:\n");
	
	//ler o numero
	scanf("%d", &num);
	
	//mostrar o numero
	printf("o numero digitado foi: %d", num);
	
	return 0;
}


