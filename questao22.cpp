#include <stdio.h>
#include <string.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 22
/*
	Leia o nome completo de uma pessoa de uma vez s�.
	(nome / nome do meio / sobrenome)
	
	Em seguida, exiba cada uma das palavras do nome em linhas diferentes.
	
	Ex.: Jo�o da Silva Cavalcanti.
	Jo�o
	da
	Silva
	Cavalcanti 
*/

int main()
{
	//declarar variaveis
	char nome[256];
	int i;
	
	//solicitar dados ao usuario
	printf("Digite seu nome completo:\n");
	scanf("%[ -~]", nome);
	getchar();
	
	printf("\n");
	
	//criar uma estrutura de repeti��o
	while(nome[i] != '\0')
	{
		//printar o nome caractere, por caractere
		printf("%c", nome[i]);
		
		//verificar onde tem espa�os, e se tiver, colocar um pula linha
		if (nome[i] == ' ')
		{
			printf("\n");
		}
		
		//colocar um contador para ir at� o fim do vetor
		i++;
	}	
	return 0;	
}
