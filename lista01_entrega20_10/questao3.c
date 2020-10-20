#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 3
/*
	Ler duas notas e exibir a média aritmética.
*/

int main()
{
	//declarar variaveis
	float nota1, nota2, media;
	
	//solicitar e ler a primeira nota
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	
	//ler a segunda nota
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	
	//fazer a media aritmetica 
	media = (nota1 + nota2) / 2; 
	
	//mostrar na tela o resultado
	printf("\nA media eh: %.2f", media);
	
	return 0;
}