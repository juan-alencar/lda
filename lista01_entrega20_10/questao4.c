#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 4 
/*
	Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. 
	A fórmula de conversão é: C = (F-32)*(5.0/9).
*/

int main()
{
	//declarar variaveis
	float temp_fhr, temp_cels;
	
	//solicitar uma temperatura em fahrenheit
	printf("digite uma temperatura em graus fahrenheit:\n");
	
	//ler o dado
	scanf("%f", &temp_fhr);
	
	//fazer a conversao
	temp_cels = (temp_fhr - 32.0) * (5.0 / 9.0);
	
	//mostrar na tela o valor convertido	
	printf("\n%.1f graus fahrenheit, equivale a %.1f graus celsius", temp_fhr, temp_cels);
	
	return 0;
}