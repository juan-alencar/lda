#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 13
/*
	Exiba todos os n�meros entre 32 e 126. 
	
	Exiba um n�mero por linha, mas em cada linha mostre o n�mero em tr�s formatos: 
	inteiro (%d), hexadecimal (%x), e caractere (%c).
	
	Utilize a estrutura de repeti��o for na resolu��o do problema. 
	Compare o resultado com a tabela ascii abaixo.
*/

int main()
{
	//declarar variavel
	int cont;
	
	//usar o for para fazer o la�o
	for(cont = 32; cont <= 126; cont++)
	{
		//mostrar na tela inteiro, hexadecimal e caractere
		printf("int = %d | hex = %x | char = %c\n", cont, cont, cont);
	}
	
	return 0;
}
