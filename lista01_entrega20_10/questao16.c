#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 16
/*
	Leia um número inteiro e diga se ele é um número primo ou não
*/

int main()
{
	//declarar variaveis
	int num, cont, aux, div;
	
	//solicitar dados ao usuario
	printf("Digite um numero para saber se e primo ou nao:\n");
	scanf("%d", &num);
	
	aux = 0; //inicializando o contador de divisores
	
	//usando o for para ver quantos divisores tem
	
	for(cont = 1; cont <= num; cont++) //o contador divide o numero por todos os numeros ate ele mesmo
	{
		//guarda o resto da divisao
		div = num % cont; 
	
		//se o resto for igual a 0, aumenta 1 no contador de divisores
		if (div == 0) 
		{	
			//contador de divisores
			aux++;		
		}
	}
	
	//se o numero tiver apenas 2 divisores, ele é primo
	aux == 2 ? printf("%d E PRIMO", num) : printf("%d NAO E PRIMO", num); 
	
	return 0;
}