#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 19
/*
	Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor.
	a) Diga qual � o maior dos 10 n�meros.
	b) Diga qual � o menor dos 10 n�meros
*/

int main()
{
	//declarar variaveis
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
	
	for(j = 0; j < 10; j++)
	{
		if(vetor[j] > maior)
		{
			maior = vetor[j];	
		}
	}
	printf("O maior numero do vetor eh: %d\n\n", maior);
	
	menor = vetor[0];
	for(j = 0; j < 10; j++)
	{
		if(vetor[j] < menor)
		{
			menor = vetor[j];
		}
	}
	printf("O menor numero do vetor eh: %d", menor);
	
	return 0;
}	
