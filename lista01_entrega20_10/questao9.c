#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 9
/*
	Uma companhia quer verificar se um empregado está qualificado para a aposentadoria.
	
	Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
	 * Ter no mínimo 65 anos de idade.
	 * Ter trabalhado, no mínimo 30 anos.
	 * Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
	 
	Ler os dados: o ano de nascimento do empregado e o ano de seu ingresso na
	companhia. O programa deverá escrever a idade e o tempo de trabalho do empregado e a 
	mensagem “Requerer aposentadoria” ou “Não requerer”.
	
	Obs.: Utilize como ano atual o ano de 2011.
*/

int main()
{
	//declarar variaveis
	int ano_atual, ano_nascimento, ano_contratacao;
	
	//receber dados
	printf("ANO DE NASCIMENTO:\n");
	scanf("%d", &ano_nascimento);
	
	printf("ANO QUE FOI CONTRATADO:\n");
	scanf("%d", &ano_contratacao);
	
	//verificacoes
	
	ano_atual = 2011;
	
	//minimo 65 anos
	
	if ((ano_atual - ano_nascimento) >= 65)
	{
		printf("Requerer aposentadoria");
		return 0;
	}
	
	//ter trabalhado no minimo 30 anos
	else if ((ano_atual - ano_contratacao) >= 30)
	{
		printf("Requerer aposentadoria");
		return 0;
	}
	
	//se tiver 60 anos e ter trabalhado 25 anos
	else if((ano_atual - ano_nascimento) >= 60 && (ano_atual - ano_contratacao) >= 25)
	{
		printf("Requerer aposentadoria");
		return 0;
	}
	else
	{
		printf("Nao requerer");
		return 0;
	}
}