#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 1 
/*
	Ler um número e exibir a frase: “o número digitado foi: ” e logo após esta frase apresentar
	o valor do número lido.
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


