#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 14
/*
	Leia dois valores, e exiba sua soma. 
	Em seguida pergunte ao usuário: “Novo Cálculo (S/N)?”.
	 
	Deve-se ler a resposta e se a resposta for ‘S’ (sim), 
	deve-se repetir todos oscomandos (instruções) novamente,
	 
	mas se for qualquer outra resposta, o algoritmo deve
	ser finalizado escrevendo a mensagem “Fim dos Cálculos”
*/

int main()
{
	//declarar variaveis
	short aux;
	float valor1, valor2, soma;
	char user;
	do {
		//declarar variaveis
		
		//ler dois valores
	
		printf("Digite dois valores:\n");
		scanf("%f", &valor1);
		scanf("%f", &valor2);
		getchar();
		//fazer soma entre os valores
		soma = valor1 + valor2;
		
		printf("O valor da soma: %.1f + %.1f = %.1f\n\n", valor1, valor2, soma);
		
		//perguntar ao usuario se quer repetir
		printf("Novo calculo (S/N)?\n\n");
		scanf("%c", &user);
		
		//encerrar o programa com "fim dos calculos"
		if (user == 'S' || user == 's')
		{
			aux = 1;
		}
		else
		{
			aux = 0;
			printf("\nFim dos calculos");
			return 0;
		}
		
	}while(aux == 1);
	
	return  0;
}
