#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 11
/*
	Faça algoritmo que funcione como uma calculadora entre dois números, e que possua as
	4 operações básicas: soma, subtração, divisão e multiplicação. 
	
	O programa deve perguntar ao usuário qual operação ele quer realizar, a resposta do usuário 
	deverá ser um caractere, '+' se soma, '-' se subtração, '*' se multiplicação, e '/' se divisão. 
	
	Em seguida o programa deve pedir para o usuário digitar o primeiro número e depois o segundo. 
	
	Como saída o programa deve exibir o resultado da operação realizada.
	
	a) faça utilizando if/else.
	b) faça utilizando switch/case.
*/

int main()
{
	
	//declarar variaveis
	char operacao;
	float num1, num2, resultado;
	
	//perguntar ao usuario a operacao
	printf("QUAL OPERACAO DESEJA EFETUAR\n\n");
	printf("\t(+) ADICAO\n");
	printf("\t(-) SUBTRACAO\n");
	printf("\t(*) MULTIPLICACAO\n");
	printf("\t(/) DIVISAO\n");
	scanf("%c", &operacao);
	
	//pedir os dois numeros da operacao ao usuario
	printf("DIGITE O PRIMEIRO NUMERO: \n");
	scanf("%f", &num1);
	
	printf("DIGITE O SEGUNDO NUMERO: \n");
	scanf("%f", &num2);
	
	//a) if e else
		printf("\n\nIF ELSE\n");
		if (operacao == '+')	//se a variavel operação for igual à algum operador matematico, faz a operação e mostra
		{
			resultado = num1 + num2;
			printf("RESULTADO: %.2f + %.2f = %.2f", num1, num2, resultado);
		}
		else if (operacao == '-')
		{
			resultado = num1 - num2;
			printf("RESULTADO: %.2f - %.2f = %.2f", num1, num2, resultado);
		}
		else if (operacao == '*')
		{
			resultado = num1 * num2;
			printf("RESULTADO: %.2f * %.2f = %.2f", num1, num2, resultado); 
		}
		else if (operacao == '/')
		{
			resultado = num1 / num2;
			printf("RESULTADO: %.2f / %.2f = %.2f", num1, num2, resultado);
		}
	
	
	//b) switch case
		printf("\n\nSWITCH CASE\n");	//se a variavel operação for igual à algum operador matematico, faz a operação e mostra
		switch (operacao)
		{
		case '+': 
			resultado = num1 + num2;
			printf("RESULTADO: %.2f + %.2f = %.2f", num1, num2, resultado);
		break;
		
		case '-':
			resultado = num1 - num2;
			printf("RESULTADO: %.2f - %.2f = %.2f", num1, num2, resultado);
		break;
		
		case '*':
			resultado = num1 * num2;
			printf("RESULTADO: %.2f * %.2f = %.2f", num1, num2, resultado);
		break;
		
		case '/':
			resultado = num1 / num2;
			printf("RESULTADO: %.2f / %.2f = %.2f", num1, num2, resultado);
		break;
		}
		
	return 0;
}

