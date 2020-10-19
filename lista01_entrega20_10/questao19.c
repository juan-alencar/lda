#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 8
/*
	Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor.
	a) Diga qual é o maior dos 10 números.
	b) Diga qual é o menor dos 10 números
*/

int main()
{
	int vetor[10] =  {'\0'}; 
	int maior = 0, menor = 0;
	int i = 0, j = 0; 
	int teste;
	
		
	//ler dados do user
	printf("Digite 10 numeros:\n");
	
	//while para armazenar os dados
	while(i < 10)
	{
		scanf("%d", &vetor[i]);
		i++;
	}
	
	for(j = 0; j < 10; j++);
	{
		if(vetor[j] > maior)
		{
			maior = vetor[j];	
		}
	}
	printf("O maior numero do vetor eh: %d\n\n", maior);
	
	for(j = 0; j < 10; j++);
	{
		if(vetor[j] < menor)
		{
			menor = vetor[j];
		}
	}
	printf("O menor numero do vetor eh: %d", menor);
}	
