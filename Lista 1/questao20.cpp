#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 20
/*
	Criar uma aplicação para ler um nome. Em seguida exiba o nome de três formas diferentes.
	a) texto normal, utilizando a máscara de formatação string (%s).
	b) caractere a caractere em ordem crescente dos índices (do começo para o fim).
	c) caractere a caractere em ordem decrescente dos índices (do fim para o começo)	
*/

int main()
{
	char nome[30];
	int i, tam;
	
	printf("Digite um nome (max: 30):\n");
	scanf("%[ -~]", nome);

	tam = strlen(nome);

	//a) texto normal, utilizando a máscara de formatação string (%s).
		printf("\ntexto normal utilizando o %%s:\n");
		printf("%s\n", nome);
	
	
	//b) caractere a caractere em ordem crescente dos índices (do começo para o fim).
		printf("\n\ncaractere por caractere:\n");
		for(i = 0; i <= tam; i++)
		{
			printf("%c\n", nome[i]);	
		}
	
	//c) caractere a caractere em ordem decrescente dos índices (do fim para o começo)
		printf("\ncaractere por caractere de tras pra frente:");
		for(i = tam; i >= 0; i--)
			{
				printf("%c\n", nome[i]);	
			}

	return 0;
}
