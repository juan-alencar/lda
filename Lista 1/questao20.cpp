#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 20
/*
	Criar uma aplica��o para ler um nome. Em seguida exiba o nome de tr�s formas diferentes.
	a) texto normal, utilizando a m�scara de formata��o string (%s).
	b) caractere a caractere em ordem crescente dos �ndices (do come�o para o fim).
	c) caractere a caractere em ordem decrescente dos �ndices (do fim para o come�o)	
*/

int main()
{
	char nome[30];
	int i, tam;
	
	printf("Digite um nome (max: 30):\n");
	scanf("%[ -~]", nome);

	tam = strlen(nome);

	//a) texto normal, utilizando a m�scara de formata��o string (%s).
		printf("\ntexto normal utilizando o %%s:\n");
		printf("%s\n", nome);
	
	
	//b) caractere a caractere em ordem crescente dos �ndices (do come�o para o fim).
		printf("\n\ncaractere por caractere:\n");
		for(i = 0; i <= tam; i++)
		{
			printf("%c\n", nome[i]);	
		}
	
	//c) caractere a caractere em ordem decrescente dos �ndices (do fim para o come�o)
		printf("\ncaractere por caractere de tras pra frente:");
		for(i = tam; i >= 0; i--)
			{
				printf("%c\n", nome[i]);	
			}

	return 0;
}
