#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 3
/*
	Ler duas notas e exibir a m�dia aritm�tica.
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
