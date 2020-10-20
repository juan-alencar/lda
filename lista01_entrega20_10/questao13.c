#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 13
/*
	Exiba todos os números entre 32 e 126. 
	
	Exiba um número por linha, mas em cada linha mostre o número em três formatos: 
	inteiro (%d), hexadecimal (%x), e caractere (%c).
	
	Utilize a estrutura de repetição for na resolução do problema. 
	Compare o resultado com a tabela ascii abaixo.
*/

int main()
{
	//declarar variavel
	int cont;
	
	//usar o for para fazer o laço
	for(cont = 32; cont <= 126; cont++)
	{
		//mostrar na tela inteiro, hexadecimal e caractere
		printf("int = %d | hex = %x | char = %c\n", cont, cont, cont);
	}
	
	return 0;
}