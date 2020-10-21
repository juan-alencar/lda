#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 17
/*
	Leia dois números inteiros, o primeiro representará a base e o segundo o expoente. 
	Calcule o valor da base elevado ao expoente. 
	
	Exemplo: 3^4 = 3*3*3*3 = 81; 5^3 = 5*5*5 = 125. 
	
	Em C não existe nenhum operador matemático que calcule o expoente. 
	
	Desenvolva o seu próprio algoritmo para realizar o cálculo, 
	utilizando um laço de repetição para realizar sucessivas multiplicações.
*/

int main()
{
	//declarar variaveis
	int resultado, base, cont, exp;

	//ler dois numeros inteiros
	printf("Digite a base da sua potencia:\n");
	scanf("%d", &base);
	getchar();
	
	printf("Digite o expoente da sua potencia:\n");
	scanf("%d", &exp);
		
	resultado = base; //ajustando a logica
	//criar um laço 
	for (cont = 1; cont < exp; cont++)  //o expoente é o tamanho do laço
	{
		resultado = resultado * base;  //a variavel guarda o resultado e usa no prox reset
	}
	
	//mostrando na tela a potencia com as multiplicacoes
	printf("\n");	
	for(cont = 0; cont < exp; cont++)
	{
		printf("%d*", base);
	}
	printf("\b = %d", resultado);
	
	return 0;
}
