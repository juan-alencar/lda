#include <stdio.h>
#include <string.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 22
/*
	Leia o nome completo de uma pessoa de uma vez só.
	(nome / nome do meio / sobrenome)
	
	Em seguida, exiba cada uma das palavras do nome em linhas diferentes.
	
	Ex.: João da Silva Cavalcanti.
	João
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
	
	//criar uma estrutura de repetição
	while(nome[i] != '\0')
	{
		//printar o nome caractere, por caractere
		printf("%c", nome[i]);
		
		//verificar onde tem espaços, e se tiver, colocar um pula linha
		if (nome[i] == ' ')
		{
			printf("\n");
		}
		
		//colocar um contador para ir até o fim do vetor
		i++;
	}	
	return 0;	
}
