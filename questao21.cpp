#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 21
/*
	Converter um texto para mai�sculo, de depois para min�sculo. 
	
	Utilize as fun��es toupper,  e tolower. 
*/

int main()
{
	//declarar variaveis
	char nome[30], maiusculo[30], minusculo[30];
	int i = 0;
	
	//solicitar dados ao usuario
	printf("Digite um nome (max: 30):\n");
	scanf("%[ -~]", nome);
	printf("\n");
	
	//criar um la�o que imprima caractere por caractere
	//colocando-os em maiusculo, usando a fun��o (toupper())
	
	//printf("\nmaiusculo: %s\n\n", strupr(nome));
	while(nome[i])
	{
		printf("%c", toupper(nome[i]));
		i++;
	}
	
	printf("\n\n");
	
	//criar um la�o que imprima caractere por caractere
	//colocando-os em minusculo, usando a fun��o (tolower())
	
	//printf("minusculo: %s", strlwr(nome));
	i = 0;
	while(nome[i])
	{
		printf("%c", tolower(nome[i]));
		i++;
	}
	
	return 0;
}
