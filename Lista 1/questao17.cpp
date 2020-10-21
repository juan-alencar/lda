#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 17
/*
	Leia dois n�meros inteiros, o primeiro representar� a base e o segundo o expoente. 
	Calcule o valor da base elevado ao expoente. 
	
	Exemplo: 3^4 = 3*3*3*3 = 81; 5^3 = 5*5*5 = 125. 
	
	Em C n�o existe nenhum operador matem�tico que calcule o expoente. 
	
	Desenvolva o seu pr�prio algoritmo para realizar o c�lculo, 
	utilizando um la�o de repeti��o para realizar sucessivas multiplica��es.
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
	//criar um la�o 
	for (cont = 1; cont < exp; cont++)  //o expoente � o tamanho do la�o
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
