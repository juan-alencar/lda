#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 11
/*
	Fa�a algoritmo que funcione como uma calculadora entre dois n�meros, e que possua as
	4 opera��es b�sicas: soma, subtra��o, divis�o e multiplica��o. 
	
	O programa deve perguntar ao usu�rio qual opera��o ele quer realizar, a resposta do usu�rio 
	dever� ser um caractere, '+' se soma, '-' se subtra��o, '*' se multiplica��o, e '/' se divis�o. 
	
	Em seguida o programa deve pedir para o usu�rio digitar o primeiro n�mero e depois o segundo. 
	
	Como sa�da o programa deve exibir o resultado da opera��o realizada.
	
	a) fa�a utilizando if/else.
	b) fa�a utilizando switch/case.
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
		if (operacao == '+')	//se a variavel opera��o for igual � algum operador matematico, faz a opera��o e mostra
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
		printf("\n\nSWITCH CASE\n");	//se a variavel opera��o for igual � algum operador matematico, faz a opera��o e mostra
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


