#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 14
/*
	Leia dois valores, e exiba sua soma. 
	Em seguida pergunte ao usu�rio: �Novo C�lculo (S/N)?�.
	 
	Deve-se ler a resposta e se a resposta for �S� (sim), 
	deve-se repetir todos oscomandos (instru��es) novamente,
	 
	mas se for qualquer outra resposta, o algoritmo deve
	ser finalizado escrevendo a mensagem �Fim dos C�lculos�
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
