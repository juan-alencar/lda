#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 5	 
/*
	Ler a altura e a base de um tri�ngulo e calcular sua �rea. 
	A f�rmula de �rea de um tri�ngulo � A = (base*altura)/2.
*/

int main()
{
	//declarar variaveis
	float base, altura, area;
	
	//solicitar e ler o valor da base
	printf("Digite o valor da base do triangulo:\n");
	scanf("%f", &base);
	
	//solicitar e ler o valor da altura
	printf("Digite o valor da altura do triangulo:\n");
	scanf("%f", &altura);
	
	//calcular a area
	area = (base * altura) / 2;
	
	//mostrar na tela o valor
	printf("a area desse triangulo eh: %.2f u (unidade de medida)", area);
	
	return 0;
}
