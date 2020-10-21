#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 21
/*
	Converter um texto para maiúsculo, de depois para minúsculo. 
	
	Utilize as funções toupper,  e tolower. 
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
	
	//criar um laço que imprima caractere por caractere
	//colocando-os em maiusculo, usando a função (toupper())
	
	//printf("\nmaiusculo: %s\n\n", strupr(nome));
	while(nome[i])
	{
		printf("%c", toupper(nome[i]));
		i++;
	}
	
	printf("\n\n");
	
	//criar um laço que imprima caractere por caractere
	//colocando-os em minusculo, usando a função (tolower())
	
	//printf("minusculo: %s", strlwr(nome));
	i = 0;
	while(nome[i])
	{
		printf("%c", tolower(nome[i]));
		i++;
	}
	
	return 0;
}
