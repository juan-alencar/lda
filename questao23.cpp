#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 23
/*
	Converter um texto para maiúsculo, de depois para minúsculo. 
	
	Utilize as funções toupper,  e tolower. 
*/


int main()
{
	//declarar variaveis
	char nome[256];
	int i = 0, j = 0, aux = 0;
	
	//solicitando dados ao usuario
	printf("Digite seu nome completo:\n");
	scanf("%[ -~]", nome);
	getchar();
	
	printf("\n");
	
	//guardar o tamanho do vetor numa variavel
	i = strlen(nome);
	
	
	//guardar o valor da variavel, em outra auxiliar para poder fazer os prints
	aux = i;
	
	
	//while descrescente que verifica os espaços, e coloca um '\0' no lugar deles
	while(i >= 0)
	{
		
		//if que faz a verificação
		if (nome[i] == ' ')		//no indice que tiver um espaço
		{
			nome[i] = {'\0'};	//coloque um '\0'
		}
		i--;	//decrescendo o contador, pra ir do tamanho do vetor, até o indice 0;
	}
 	
 	
	i = aux; // para funcionar a logica novamente, coloca-se de novo, o valor inicial do tamanho do vetor
	j = i; // e guarda esse valor na variavel de print, para as duas andarem juntas
	
	
	for(i = aux; i >= 0; i--) // for para ir do tamanho do vetor ('i'), até o indice 0
							  // verificando de tras pra frente, os '\0', e se tiver, printa até o ultimo do vetor (crescente)
	{
		
		if (nome[i] == '\0') //se for '\0' printe, em ordem crescente, até o ultimo '\0'
		{
			while(nome[j])
			{
				printf("%c", nome[j]);  //printa caractere por caractere
				j++;	//em ordem crescente					
			}
			printf("\n"); //apos printar, pula uma linha
		}
		
		
		j = i; // e atualiza o valor da variavel de print, para que ela ande sempre com 'i'
		
		
		if (i == 0) // e se o indice for 0, faz um ultimo print, da primeira palavra
					// if necessario, pois antes da primeira palavra não tem um '\0'
		{
			while(nome[j]) //while printando normalmente
			{
				printf("%c", nome[j]);
				j++;
			}
		} 
	}	
	
	return 0;	
}
