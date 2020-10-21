#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 18
/*
	Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor.
	
	a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.
	
	b) Pergunte ao usu�rio qual n�mero ele quer pesquisar (no lugar do n�mero 3), 
	e diga quantas vezes este n�mero est� presente no vetor.
*/


int main()
{
	//a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.
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
