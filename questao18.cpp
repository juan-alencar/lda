#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 18
/*
	Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor.
	
	a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
	
	b) Pergunte ao usuário qual número ele quer pesquisar (no lugar do número 3), 
	e diga quantas vezes este número está presente no vetor.
*/


int main()
{
	//a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
		//declarar variaveis
		int vetor[10] =  {'\0'}, cont = 0, i = 0, num;
		
		//ler dados do user
		printf("Digite 10 numeros:\n");
		
		//while para armazenar os dados
		while(i < 10)
		{
			scanf("%d", &vetor[i]);
			i++;
		}
	
		//for usado para a contagem de '3's no vetor	
		for(i = 0; i < 10; i++)
		{
			if (vetor[i] == 3)
			{
				cont++;	
			} 
		}
		printf("O numero 3 apareceu %d vez(es) no vetor\n\n", cont);	
		
	//b) Pergunte ao usuario qual numero ele quer pesquisar
		printf("Qual numero voce deseja pesquisar no vetor?\n");
		scanf("%d", &num);
		
		//for usado para a contagem do numero informado no vetor	
		cont = 0;
		for(i = 0; i < 10; i++)
		{
			if (vetor[i] == num)
			{
				cont++;	
			} 
		}
		printf("O numero %d apareceu %d vez(es) no vetor", num, cont);
		
	return 0;
}
